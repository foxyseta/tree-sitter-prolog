from os import path
from platform import system
from sysconfig import get_config_var

from setuptools import Extension, find_packages, setup
from setuptools.command.build import build
from setuptools.command.egg_info import egg_info
from wheel.bdist_wheel import bdist_wheel


macros: list[tuple[str, str | None]] = [
    ("PY_SSIZE_T_CLEAN", None),
    ("TREE_SITTER_HIDE_SYMBOLS", None),
]
if limited_api := not get_config_var("Py_GIL_DISABLED"):
    macros.append(("Py_LIMITED_API", "0x030A0000"))

if system() != "Windows":
    cflags = ["-std=c11", "-fvisibility=hidden"]
else:
    cflags = ["/std:c11", "/utf-8"]


class Build(build):
    def run(self):
        if path.isdir("queries"):
            dest = path.join(self.build_lib, "tree_sitter_prolog", "queries")
            self.copy_tree("queries", dest)
        super().run()


class BdistWheel(bdist_wheel):
    def get_tag(self):
        python, abi, platform = super().get_tag()
        if python.startswith("cp"):
            python, abi = "cp310", "abi3"
        return python, abi, platform


class EggInfo(egg_info):
    def find_sources(self):
        super().find_sources()
        self.filelist.recursive_include("queries", "*.scm")
        self.filelist.include("grammars/prolog/src/tree_sitter/*.h")


setup(
    packages=find_packages("bindings/python"),
    package_dir={"": "bindings/python"},
    package_data={
        "tree_sitter_prolog": ["*.pyi", "py.typed"],
        "tree_sitter_prolog.queries": ["*.scm"],
    },
    ext_package="tree_sitter_prolog",
    ext_modules=[
        Extension(
            name="_binding",
            sources=[
                "bindings/python/tree_sitter_prolog/binding.c",
                "grammars/prolog/src/parser.c",
                "grammars/problog/src/parser.c",
            ],
            extra_compile_args=cflags,
            define_macros=macros,
            include_dirs=["grammars/prolog/src"],
            py_limited_api=limited_api,
        )
    ],
    cmdclass={
        "build": Build,
        "bdist_wheel": BdistWheel,
        "egg_info": EggInfo,
    },
    zip_safe=False,
)
