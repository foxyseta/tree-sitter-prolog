const root = require("path").join(__dirname, "..", "..");

module.exports = require("node-gyp-build")(root);

try {
  module.exports.prolog.nodeTypeInfo = require("../../grammars/prolog/src/node-types.json");
  module.exports.problog.nodeTypeInfo = require("../../grammars/problog/src/node-types.json");
} catch (_) {}
