const os = require('os');
const path = require('path');
const fs = require('fs');

const SETUP_DIR = path.resolve(__dirname, '..', 'miniqt');
const QT_VERSION = '5.14.1';

const checkIfExists = fullPath => {
    return () => fs.existsSync(fullPath);
};

function getMiniQtConfig() {
    switch (os.platform()) {
        case 'darwin': {
            const qtHome = path.resolve(SETUP_DIR, QT_VERSION, 'clang_64');
            return {
                qtHome,
                artifacts: [
                    {
                        name: 'Qt Base',
                        link: `https://download.qt.io/online/qtsdkrepository/mac_x64/desktop/qt5_5141/qt.qt5.5141.clang_64/5.14.1-0-202001241000qtbase-MacOS-MacOS_10_13-Clang-MacOS-MacOS_10_13-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'plugins', 'platforms', 'libqcocoa.dylib')),
                    },
                    {
                        name: 'Qt Svg',
                        link: `https://download.qt.io/online/qtsdkrepository/mac_x64/desktop/qt5_5141/qt.qt5.5141.clang_64/5.14.1-0-202001241000qtsvg-MacOS-MacOS_10_13-Clang-MacOS-MacOS_10_13-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'lib', 'QtSvg.framework', 'QtSvg')),
                    },
                    {
                        name: 'Qt Tools',
                        link: `https://download.qt.io/online/qtsdkrepository/mac_x64/desktop/qt5_5141/qt.qt5.5141.clang_64/5.14.1-0-202001241000qttools-MacOS-MacOS_10_13-Clang-MacOS-MacOS_10_13-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'macdeployqt')),
                    },
                ],
            };
        }
        case 'win32': {
            const qtHome = path.resolve(SETUP_DIR, QT_VERSION, 'msvc2017_64');
            return {
                qtHome,
                artifacts: [
                    {
                        name: 'Qt Base',
                        link: `https://download.qt.io/online/qtsdkrepository/windows_x86/desktop/qt5_5141/qt.qt5.5141.win64_msvc2017_64/5.14.1-0-202001240957qtbase-Windows-Windows_10-MSVC2017-Windows-Windows_10-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'Qt5Core.dll')),
                    },
                    {
                        name: 'Qt SVG',
                        link: `https://download.qt.io/online/qtsdkrepository/windows_x86/desktop/qt5_5141/qt.qt5.5141.win64_msvc2017_64/5.14.1-0-202001240957qtsvg-Windows-Windows_10-MSVC2017-Windows-Windows_10-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'Qt5Svg.dll')),
                    },
                    {
                        name: 'Qt Tools',
                        link: `https://download.qt.io/online/qtsdkrepository/windows_x86/desktop/qt5_5141/qt.qt5.5141.win64_msvc2017_64/5.14.1-0-202001240957qttools-Windows-Windows_10-MSVC2017-Windows-Windows_10-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'windeployqt.exe')),
                    },
                ],
            };
        }
        case 'linux': {
            const qtHome = path.resolve(SETUP_DIR, QT_VERSION, 'gcc_64');
            return {
                qtHome,
                artifacts: [
                    {
                        name: 'Qt Base',
                        link: `https://download.qt.io/online/qtsdkrepository/linux_x64/desktop/qt5_5141/qt.qt5.5141.gcc_64/5.14.1-0-202001240953qtbase-Linux-RHEL_7_6-GCC-Linux-RHEL_7_6-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'moc')),
                    },
                    {
                        name: 'Qt SVG',
                        link: `https://download.qt.io/online/qtsdkrepository/linux_x64/desktop/qt5_5141/qt.qt5.5141.gcc_64/5.14.1-0-202001240953qtsvg-Linux-RHEL_7_6-GCC-Linux-RHEL_7_6-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'lib', 'libQt5Svg.so')),
                    },
                    {
                        name: 'Qt ICU',
                        link: `https://download.qt.io/online/qtsdkrepository/linux_x64/desktop/qt5_5141/qt.qt5.5141.gcc_64/5.14.1-0-202001240953icu-linux-Rhel7.2-x64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'lib', 'libicuuc.so')),
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
