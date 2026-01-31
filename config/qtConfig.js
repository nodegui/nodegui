const os = require('os');
const path = require('path');
const fs = require('fs');

const SETUP_DIR = path.resolve(__dirname, '..', 'miniqt');
const QT_VERSION = '6.10.2';
const MIRROR = Boolean(process.env.QT_LINK_MIRROR) ? process.env.QT_LINK_MIRROR : 'https://download.qt.io';

const checkIfExists = (fullPath) => {
    return () => fs.existsSync(fullPath);
};

function getMiniQtConfig() {
    switch (os.platform()) {
        case 'darwin': {
            const qtHome = path.resolve(SETUP_DIR, QT_VERSION, 'macos');
            const subDir = QT_VERSION + '/macos';
            return {
                qtHome,
                artifacts: [
                    {
                        name: 'Qt Base',
                        link: `${MIRROR}/online/qtsdkrepository/mac_x64/desktop/qt6_6102/qt6_6102/qt.qt6.6102.clang_64/6.10.2-0-202601261210qtbase-MacOS-MacOS_15-Clang-MacOS-MacOS_15-X86_64-ARM64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'plugins', 'platforms', 'libqcocoa.dylib')),
                        subDir: subDir,
                    },
                    {
                        name: 'Qt Svg',
                        link: `${MIRROR}/online/qtsdkrepository/mac_x64/desktop/qt6_6102/qt6_6102/qt.qt6.6102.clang_64/6.10.2-0-202601261210qtsvg-MacOS-MacOS_15-Clang-MacOS-MacOS_15-X86_64-ARM64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'lib', 'QtSvg.framework', 'QtSvg')),
                        subDir: subDir,
                    },
                    {
                        name: 'Qt Tools',
                        link: `${MIRROR}/online/qtsdkrepository/mac_x64/desktop/qt6_6102/qt6_6102/qt.qt6.6102.clang_64/6.10.2-0-202601261210qttools-MacOS-MacOS_15-Clang-MacOS-MacOS_15-X86_64-ARM64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'macdeployqt')),
                        subDir: subDir,
                    },
                ],
            };
        }
        case 'win32': {
            const qtHome = path.resolve(SETUP_DIR, QT_VERSION, 'msvc2022_64');
            const subDir = QT_VERSION + '/msvc2022_64';
            return {
                qtHome,
                artifacts: [
                    {
                        name: 'Qt Base',
                        link: `${MIRROR}/online/qtsdkrepository/windows_x86/desktop/qt6_6102/qt6_6102/qt.qt6.6102.win64_msvc2022_64/6.10.2-0-202601261212qtbase-Windows-Windows_11_24H2-MSVC2022-Windows-Windows_11_24H2-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'Qt6Core.dll')),
                        subDir: subDir,
                    },
                    {
                        name: 'Qt SVG',
                        link: `${MIRROR}/online/qtsdkrepository/windows_x86/desktop/qt6_6102/qt6_6102/qt.qt6.6102.win64_msvc2022_64/6.10.2-0-202601261212qtsvg-Windows-Windows_11_24H2-MSVC2022-Windows-Windows_11_24H2-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'Qt6Svg.dll')),
                        subDir: subDir,
                    },
                    {
                        name: 'Qt Tools',
                        link: `${MIRROR}/online/qtsdkrepository/windows_x86/desktop/qt6_6102/qt6_6102/qt.qt6.6102.win64_msvc2022_64/6.10.2-0-202601261212qttools-Windows-Windows_11_24H2-MSVC2022-Windows-Windows_11_24H2-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'windeployqt.exe')),
                        subDir: subDir,
                    },
                ],
            };
        }
        case 'linux': {
            const qtHome = path.resolve(SETUP_DIR, QT_VERSION, 'gcc_64');
            const subDir = QT_VERSION + '/gcc_64';
            return {
                qtHome,
                artifacts: [
                    {
                        name: 'Qt Base',
                        link: `${MIRROR}/online/qtsdkrepository/linux_x64/desktop/qt6_6102/qt6_6102/qt.qt6.6102.linux_gcc_64/6.10.2-0-202601261212qtbase-Linux-RHEL_9_4-GCC-Linux-RHEL_9_4-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'moc')),
                        subDir: subDir,
                    },
                    {
                        name: 'Qt SVG',
                        link: `${MIRROR}/online/qtsdkrepository/linux_x64/desktop/qt6_6102/qt6_6102/qt.qt6.6102.linux_gcc_64/6.10.2-0-202601261212qtsvg-Linux-RHEL_9_4-GCC-Linux-RHEL_9_4-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'lib', 'libQt6Svg.so')),
                        subDir: subDir,
                    },
                    {
                        name: 'Qt ICU',
                        link: `${MIRROR}/online/qtsdkrepository/linux_x64/desktop/qt6_6102/qt6_6102/qt.qt6.6102.linux_gcc_64/6.10.2-0-202601261212icu-linux-Rhel8.6-x86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'lib', 'libicuuc.so')),
                        subDir: subDir + '/lib',
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
