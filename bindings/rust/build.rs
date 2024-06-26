fn main() {
    let prolog_dir = std::path::Path::new("grammars/prolog/src");
    let problog_dir = std::path::Path::new("grammars/problog/src");

    let mut c_config = cc::Build::new();
    c_config.include(&src_dir);
    c_config
        .flag_if_supported("-Wno-unused-parameter")
        .flag_if_supported("-Wno-unused-but-set-variable")
        .flag_if_supported("-Wno-trigraphs");
    #[cfg(target_env = "msvc")]
    c_config.flag("-utf-8");

    for dir in &[prolog_dir, problog_dir] {
        let parser_path = src_dir.join("parser.c");
        c_config.file(&parser_path);

        // If your language uses an external scanner written in C,
        // then include this block of code:

        /*
        let scanner_path = src_dir.join("scanner.c");
        c_config.file(&scanner_path);
        println!("cargo:rerun-if-changed={}", scanner_path.to_str().unwrap());
        */

        println!("cargo:rerun-if-changed={}", parser_path.to_str().unwrap());
    }
    c_config.compile("parser");

    // If your language uses an external scanner written in C++,
    // then include this block of code:

    /*
    let mut cpp_config = cc::Build::new();
    cpp_config.cpp(true);
    cpp_config.include(&src_dir);
    cpp_config
        .flag_if_supported("-Wno-unused-parameter")
        .flag_if_supported("-Wno-unused-but-set-variable");
    let scanner_path = src_dir.join("scanner.cc");
    cpp_config.file(&scanner_path);
    cpp_config.compile("scanner");
    println!("cargo:rerun-if-changed={}", scanner_path.to_str().unwrap());
    */
}
