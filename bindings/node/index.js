const root = require("path").join(__dirname, "..", "..");

module.exports =
  typeof process.versions.bun === "string"
    // Support `bun build --compile` by being statically analyzable enough to find the .node file at build-time
    ? require(`../../prebuilds/${process.platform}-${process.arch}/tree-sitter-prolog.node`)
    : require("node-gyp-build")(root);

try {
  module.exports.prolog.nodeTypeInfo = require("../../grammars/prolog/src/node-types.json");
  module.exports.problog.nodeTypeInfo = require("../../grammars/problog/src/node-types.json");
} catch (_) {}
