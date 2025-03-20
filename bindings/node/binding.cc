#include <napi.h>

typedef struct TSLanguage TSLanguage;

extern "C" TSLanguage *tree_sitter_prolog();
extern "C" TSLanguage *tree_sitter_problog();

// "tree-sitter", "language" hashed with BLAKE2
const napi_type_tag LANGUAGE_TYPE_TAG = {
  0x8AF2E5212AD58ABF, 0xD5006CAD83ABBA16
};

Napi::Object Init(Napi::Env env, Napi::Object exports) {
    auto prolog_exports = Napi::Object::New(env);
    prolog_exports["name"] = Napi::String::New(env, "prolog");
    auto prolog_language = Napi::External<TSLanguage>::New(env, tree_sitter_prolog());
    prolog_language.TypeTag(&LANGUAGE_TYPE_TAG);
    prolog_exports["language"] = prolog_language;
    exports["prolog"] = prolog_exports;

    auto problog_exports = Napi::Object::New(env);
    problog_exports["name"] = Napi::String::New(env, "problog");
    auto problog_language = Napi::External<TSLanguage>::New(env, tree_sitter_problog());
    problog_language.TypeTag(&LANGUAGE_TYPE_TAG);
    problog_exports["language"] = problog_language;
    exports["problog"] = problog_exports;

    return exports;
}

NODE_API_MODULE(tree_sitter_prolog_binding, Init)
