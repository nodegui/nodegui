const os = require('os');
const path = require('path');
const fs = require('fs');

const SETUP_DIR = path.resolve(__dirname, '..', 'miniqt');
const QT_VERSION = '6.10.0';
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
                        link: `${MIRROR}/online/qtsdkrepository/mac_x64/desktop/qt6_6102/qt.qt6.6102.clang_64/6.10.2-0-202601050617qtbase-MacOS-MacOS_12-Clang-MacOS-MacOS_12-X86_64-ARM64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'plugins', 'platforms', 'libqcocoa.dylib')),
                    },
                    {
                        name: 'Qt Svg',
                        link: `${MIRROR}/online/qtsdkrepository/mac_x64/desktop/qt6_6102/qt.qt6.6102.clang_64/6.10.2-0-202601050617qtsvg-MacOS-MacOS_12-Clang-MacOS-MacOS_12-X86_64-ARM64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'lib', 'QtSvg.framework', 'QtSvg')),
                    },
                    {
                        name: 'Qt Tools',
                        link: `${MIRROR}/online/qtsdkrepository/mac_x64/desktop/qt6_6102/qt.qt6.6102.clang_64/6.10.2-0-202601050617qttools-MacOS-MacOS_12-Clang-MacOS-MacOS_12-X86_64-ARM64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'macdeployqt')),
                    },
                ],
            };
        }
        case 'win32': {
            const qtHome = path.resolve(SETUP_DIR, QT_VERSION, 'msvc2022_64');
            return {
                qtHome,
                artifacts: [
                    {
                        name: 'Qt Base',
                        link: `${MIRROR}/online/qtsdkrepository/windows_x86/desktop/qt6_6102/qt6_6102/qt.qt6.6102.win64_msvc2022_64/6.10.2-0-202601050619qtbase-Windows-Windows_11_24H2-MSVC2022-Windows-Windows_11_24H2-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'Qt6Core.dll')),
                    },
                    {
                        name: 'Qt SVG',
                        link: `${MIRROR}/online/qtsdkrepository/windows_x86/desktop/qt6_6102/qt6_6102/qt.qt6.6102.win64_msvc2022_64/6.10.2-0-202601050619qtsvg-Windows-Windows_11_24H2-MSVC2022-Windows-Windows_11_24H2-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'Qt6Svg.dll')),
                    },
                    {
                        name: 'Qt Tools',
                        link: `${MIRROR}/online/qtsdkrepository/windows_x86/desktop/qt6_6102/qt6_6102/qt.qt6.6102.win64_msvc2022_64/6.10.2-0-202601050619qttools-Windows-Windows_11_24H2-MSVC2022-Windows-Windows_11_24H2-X86_64.7z`,
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
                        link: `${MIRROR}/online/qtsdkrepository/linux_x64/desktop/qt6_6102/qt6_6102/qt.qt6.6102.linux_gcc_64/6.10.2-0-202601050619qtbase-Linux-RHEL_9_4-GCC-Linux-RHEL_9_4-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'moc')),
                    },
                    {
                        name: 'Qt SVG',
                        link: `${MIRROR}/online/qtsdkrepository/linux_x64/desktop/qt6_6102/qt6_6102/qt.qt6.6102.linux_gcc_64/6.10.2-0-202601050619qtsvg-Linux-RHEL_9_4-GCC-Linux-RHEL_9_4-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'lib', 'libQt6Svg.so')),
                    },
                    {
                        name: 'Qt ICU',
                        link: `${MIRROR}/online/qtsdkrepository/linux_x64/desktop/qt6_6102/qt6_6102/qt.qt6.6102.linux_gcc_64/6.10.2-0-202601050619icu-linux-Rhel8.6-x86_64.7z`,
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
