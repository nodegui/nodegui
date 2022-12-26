const os = require('os');
const path = require('path');
const fs = require('fs');

const SETUP_DIR = path.resolve(__dirname, '..', 'miniqt');
const QT_VERSION = '6.4.1';
const MIRROR = Boolean(process.env.QT_LINK_MIRROR) ? process.env.QT_LINK_MIRROR : 'https://download.qt.io';

const checkIfExists = (fullPath) => {
    return () => fs.existsSync(fullPath);
};

function getMiniQtConfig() {
    switch (os.platform()) {
        case 'darwin': {
            if (os.arch() === 'arm64') {
                const qtHome = path.resolve(SETUP_DIR, 'Qt-6.4.1');
                return {
                    qtHome,
                    artifacts: [
                        {
                            name: 'Mini Qt Bundle',
                            link: `https://github.com/nodegui/nodegui/releases/download/miniQtm1-5153/Qt-6.4.1.zip`,
                            skipSetup: checkIfExists(path.resolve(qtHome, 'plugins', 'platforms', 'libqcocoa.dylib')),
                        },
                    ],
                };
            } else {
                const qtHome = path.resolve(SETUP_DIR, QT_VERSION, 'clang_64');
                return {
                    qtHome,
                    artifacts: [
                        {
                            name: 'Qt Base',
                            link: `${MIRROR}/online/qtsdkrepository/mac_x64/desktop/qt6_641/qt.qt6.641.clang_64/6.4.1-0-202211101256qtbase-MacOS-MacOS_12-Clang-MacOS-MacOS_12-X86_64-ARM64.7z`,
                            skipSetup: checkIfExists(path.resolve(qtHome, 'plugins', 'platforms', 'libqcocoa.dylib')),
                        },
                        {
                            name: 'Qt Svg',
                            link: `${MIRROR}/online/qtsdkrepository/mac_x64/desktop/qt6_641/qt.qt6.641.clang_64/6.4.1-0-202211101256qtsvg-MacOS-MacOS_12-Clang-MacOS-MacOS_12-X86_64-ARM64.7z`,
                            skipSetup: checkIfExists(path.resolve(qtHome, 'lib', 'QtSvg.framework', 'QtSvg')),
                        },
                        {
                            name: 'Qt Tools',
                            link: `${MIRROR}/online/qtsdkrepository/mac_x64/desktop/qt6_641/qt.qt6.641.clang_64/6.4.1-0-202211101256qttools-MacOS-MacOS_12-Clang-MacOS-MacOS_12-X86_64-ARM64.7z`,
                            skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'macdeployqt')),
                        },
                    ],
                };
            }
        }
        case 'win32': {
            const qtHome = path.resolve(SETUP_DIR, QT_VERSION, 'msvc2019_64');
            return {
                qtHome,
                artifacts: [
                    {
                        name: 'Qt Base',
                        link: `${MIRROR}/online/qtsdkrepository/windows_x86/desktop/qt6_641/qt.qt6.641.win64_msvc2019_64/6.4.1-0-202211101254qtbase-Windows-Windows_10_21H2-MSVC2019-Windows-Windows_10_21H2-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'Qt6Core.dll')),
                    },
                    {
                        name: 'Qt SVG',
                        link: `${MIRROR}/online/qtsdkrepository/windows_x86/desktop/qt6_641/qt.qt6.641.win64_msvc2019_64/6.4.1-0-202211101254qtsvg-Windows-Windows_10_21H2-MSVC2019-Windows-Windows_10_21H2-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'Qt6Svg.dll')),
                    },
                    {
                        name: 'Qt Tools',
                        link: `${MIRROR}/online/qtsdkrepository/windows_x86/desktop/qt6_641/qt.qt6.641.win64_msvc2019_64/6.4.1-0-202211101254qttools-Windows-Windows_10_21H2-MSVC2019-Windows-Windows_10_21H2-X86_64.7z`,
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
                        link: `${MIRROR}/online/qtsdkrepository/linux_x64/desktop/qt6_641/qt.qt6.641.gcc_64/6.4.1-0-202211101305qtbase-Linux-RHEL_8_4-GCC-Linux-RHEL_8_4-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'moc')),
                    },
                    {
                        name: 'Qt SVG',
                        link: `${MIRROR}/online/qtsdkrepository/linux_x64/desktop/qt6_641/qt.qt6.641.gcc_64/6.4.1-0-202211101305qtsvg-Linux-RHEL_8_4-GCC-Linux-RHEL_8_4-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'lib', 'libQt6Svg.so')),
                    },
                    {
                        name: 'Qt ICU',
                        link: `${MIRROR}/online/qtsdkrepository/linux_x64/desktop/qt6_641/qt.qt6.641.gcc_64/6.4.1-0-202211101305icu-linux-Rhel7.2-x64.7z`,
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
