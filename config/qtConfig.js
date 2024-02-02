const os = require('os');
const path = require('path');
const fs = require('fs');

const SETUP_DIR = path.resolve(__dirname, '..', 'miniqt');
const QT_VERSION = '6.6.0';
const MIRROR = Boolean(process.env.QT_LINK_MIRROR) ? process.env.QT_LINK_MIRROR : 'https://download.qt.io';

const checkIfExists = (fullPath) => {
    return () => fs.existsSync(fullPath);
};

function getMiniQtConfig() {
    switch (os.platform()) {
        case 'darwin': {
            const qtHome = path.resolve(SETUP_DIR, QT_VERSION, 'macos');
            return {
                qtHome,
                artifacts: [
                    {
                        name: 'Qt Base',
                        link: `${MIRROR}/online/qtsdkrepository/mac_x64/desktop/qt6_660/qt.qt6.660.clang_64/6.6.0-0-202310040910qtbase-MacOS-MacOS_12-Clang-MacOS-MacOS_12-X86_64-ARM64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'plugins', 'platforms', 'libqcocoa.dylib')),
                    },
                    {
                        name: 'Qt Svg',
                        link: `${MIRROR}/online/qtsdkrepository/mac_x64/desktop/qt6_660/qt.qt6.660.clang_64/6.6.0-0-202310040910qtsvg-MacOS-MacOS_12-Clang-MacOS-MacOS_12-X86_64-ARM64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'lib', 'QtSvg.framework', 'QtSvg')),
                    },
                    {
                        name: 'Qt Tools',
                        link: `${MIRROR}/online/qtsdkrepository/mac_x64/desktop/qt6_660/qt.qt6.660.clang_64/6.6.0-0-202310040910qttools-MacOS-MacOS_12-Clang-MacOS-MacOS_12-X86_64-ARM64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'macdeployqt')),
                    },
                ],
            };
        }
        case 'win32': {
            const qtHome = path.resolve(SETUP_DIR, QT_VERSION, 'msvc2019_64');
            return {
                qtHome,
                artifacts: [
                    {
                        name: 'Qt Base',
                        link: `${MIRROR}/online/qtsdkrepository/windows_x86/desktop/qt6_660/qt.qt6.660.win64_msvc2019_64/6.6.0-0-202310040911qtbase-Windows-Windows_10_22H2-MSVC2019-Windows-Windows_10_22H2-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'Qt6Core.dll')),
                    },
                    {
                        name: 'Qt SVG',
                        link: `${MIRROR}/online/qtsdkrepository/windows_x86/desktop/qt6_660/qt.qt6.660.win64_msvc2019_64/6.6.0-0-202310040911qtsvg-Windows-Windows_10_22H2-MSVC2019-Windows-Windows_10_22H2-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'Qt6Svg.dll')),
                    },
                    {
                        name: 'Qt Tools',
                        link: `${MIRROR}/online/qtsdkrepository/windows_x86/desktop/qt6_660/qt.qt6.660.win64_msvc2019_64/6.6.0-0-202310040911qttools-Windows-Windows_10_22H2-MSVC2019-Windows-Windows_10_22H2-X86_64.7z`,
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
                        link: `${MIRROR}/online/qtsdkrepository/linux_x64/desktop/qt6_660/qt.qt6.660.gcc_64/6.6.0-0-202310040911qtbase-Linux-RHEL_8_6-GCC-Linux-RHEL_8_6-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'moc')),
                    },
                    {
                        name: 'Qt SVG',
                        link: `${MIRROR}/online/qtsdkrepository/linux_x64/desktop/qt6_660/qt.qt6.660.gcc_64/6.6.0-0-202310040911qtsvg-Linux-RHEL_8_6-GCC-Linux-RHEL_8_6-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'lib', 'libQt6Svg.so')),
                    },
                    {
                        name: 'Qt ICU',
                        link: `${MIRROR}/online/qtsdkrepository/linux_x64/desktop/qt6_660/qt.qt6.660.gcc_64/6.6.0-0-202310040911icu-linux-Rhel7.2-x64.7z`,
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
const qtCmakeDir = path.resolve(qtHome, 'lib', 'cmake', 'Qt6');

module.exports = {
    qtHome,
    miniQt,
    qtCmakeDir,
    useCustomQt,
};
