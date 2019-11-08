const path = require('path');

const NODEGUI_ROOT = path.resolve(__dirname, '..');
const CMAKE_HELPER_DIR = path.resolve(NODEGUI_ROOT, 'config');
const CMAKE_HELPER_FILE = path.resolve(CMAKE_HELPER_DIR, 'plugin.cmake');

module.exports = {
    CMAKE_HELPER_FILE,
    CMAKE_HELPER_DIR,
    NODEGUI_ROOT,
};
