const os = require('os');
const path = require('path');

const SETUP_DIR = path.resolve(__dirname, '..', 'miniqt');
const QT_VERSION = '5.15.0';

function getMiniQtConfig() {
    switch (os.platform()) {
        case 'darwin': {
            return {
                qtHome: path.resolve(SETUP_DIR, QT_VERSION, 'clang_64'),
                artifacts: [
                    {
                        name: 'Qt Base',
                        link: `https://download.qt.io/online/qtsdkrepository/mac_x64/desktop/qt5_5150/qt.qt5.5150.clang_64/5.15.0-0-202002122005qtbase-MacOS-MacOS_10_13-Clang-MacOS-MacOS_10_13-X86_64.7z`,
                    },
                ],
            };
        }
        case 'win32': {
            return {
                qtHome: path.resolve(SETUP_DIR, QT_VERSION, 'msvc2017_64'),
                artifacts: [
                    {
                        name: 'Qt Base',
                        link: `https://download.qt.io/online/qtsdkrepository/windows_x86/desktop/qt5_5150/qt.qt5.5150.win64_msvc2017_64/5.15.0-0-202002122017qtbase-Windows-Windows_10-MSVC2017-Windows-Windows_10-X86_64.7z`,
                    },
                ],
            };
        }
        case 'linux': {
            return {
                qtHome: path.resolve(SETUP_DIR, QT_VERSION, 'gcc_64'),
                artifacts: [
                    {
                        name: 'Qt Base',
                        link: `https://download.qt.io/online/qtsdkrepository/linux_x64/desktop/qt5_5150/qt.qt5.5150.gcc_64/5.15.0-0-202002122009qtbase-Linux-RHEL_7_6-GCC-Linux-RHEL_7_6-X86_64.7z`,
                    },
                    {
                        name: 'Qt ICU',
                        link: `https://download.qt.io/online/qtsdkrepository/linux_x64/desktop/qt5_5150/qt.qt5.5150.gcc_64/5.15.0-0-202002122009icu-linux-Rhel7.2-x64.7z`,
                    },
                ],
            };
        }
    }
}

const miniQt = {
    ...getMiniQtConfig(),
    version: QT_VERSION,
    setupDir: SETUP_DIR,
};

const useCustomQt = Boolean(process.env.QT_INSTALL_DIR);
const qtHome = useCustomQt ? process.env.QT_INSTALL_DIR : miniQt.qtHome;
const qtCmakeDir = path.resolve(qtHome, 'lib', 'cmake', 'Qt5');

module.exports = {
    qtHome,
    miniQt,
    qtCmakeDir,
    useCustomQt,
};
