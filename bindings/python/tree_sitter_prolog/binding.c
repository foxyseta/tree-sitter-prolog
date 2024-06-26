#include <Python.h>

typedef struct TSLanguage TSLanguage;

TSLanguage *tree_sitter_prolog(void);
TSLanguage *tree_sitter_problog(void);

static PyObject* _binding_prolog(PyObject *self, PyObject *args) {
    return PyLong_FromVoidPtr(tree_sitter_prolog());
}

static PyObject* _binding_problog(PyObject *self, PyObject *args) {
    return PyLong_FromVoidPtr(tree_sitter_problog());
}

static PyMethodDef methods[] = {
    {"prolog", _binding_prolog, METH_NOARGS,
     "Get the tree-sitter language for ISO Prolog."},
    {"problog", _binding_problog, METH_NOARGS,
     "Get the tree-sitter language for Problog."},
    {NULL, NULL, 0, NULL}
};

static struct PyModuleDef module = {
    .m_base = PyModuleDef_HEAD_INIT,
    .m_name = "_binding",
    .m_doc = NULL,
    .m_size = -1,
    .m_methods = methods
};

PyMODINIT_FUNC PyInit__binding(void) {
    return PyModule_Create(&module);
}
