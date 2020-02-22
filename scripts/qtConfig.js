const os = require('os');
const path = require('path');

const setupDir = path.resolve(__dirname, '..', 'miniqt');

const miniQt = {
    downloadLink: null,
    qtHome: null,
    version: '5.15.0',
    setupDir,
};

switch (os.platform()) {
    case 'darwin': {
        miniQt.qtHome = path.resolve(setupDir, miniQt.version, 'clang_64');
        miniQt.downloadLink = `https://download.qt.io/online/qtsdkrepository/mac_x64/desktop/qt5_5150/qt.qt5.5150.clang_64/5.15.0-0-202002122005qtbase-MacOS-MacOS_10_13-Clang-MacOS-MacOS_10_13-X86_64.7z`;
        break;
    }
    case 'win32': {
        miniQt.qtHome = path.resolve(setupDir, miniQt.version, 'msvc2017_64');
        miniQt.downloadLink = `https://download.qt.io/online/qtsdkrepository/mac_x64/desktop/qt5_5150/qt.qt5.5150.clang_64/5.15.0-0-202002122005qtbase-MacOS-MacOS_10_13-Clang-MacOS-MacOS_10_13-X86_64.7z`;
        break;
    }
    case 'linux': {
        miniQt.qtHome = path.resolve(setupDir, miniQt.version, 'gcc_64');
        miniQt.downloadLink = `https://download.qt.io/online/qtsdkrepository/mac_x64/desktop/qt5_5150/qt.qt5.5150.clang_64/5.15.0-0-202002122005qtbase-MacOS-MacOS_10_13-Clang-MacOS-MacOS_10_13-X86_64.7z`;
        break;
    }
}

const qtHome = process.env.QT_INSTALL_DIR ? process.env.QT_INSTALL_DIR : miniQt.qtHome;

module.exports = {
    qtHome,
    qtCmakeDir: path.resolve(qtHome, 'lib', 'cmake', 'Qt5'),
    miniQt,
    useCustomQt: Boolean(process.env.QT_INSTALL_DIR),
};
