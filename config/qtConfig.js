const os = require('os');
const path = require('path');
const fs = require('fs');

const SETUP_DIR = path.resolve(__dirname, '..', 'miniqt');
const QT_VERSION = '5.15.2';
const MIRROR = Boolean(process.env.QT_LINK_MIRROR) ? process.env.QT_LINK_MIRROR : 'https://download.qt.io';

const checkIfExists = (fullPath) => {
    return () => fs.existsSync(fullPath);
};

function getMiniQtConfig() {
    switch (os.platform()) {
        case 'darwin': {
            if (os.arch() === 'arm64') {
                const qtHome = path.resolve(SETUP_DIR, 'Qt-5.15.3');
                return {
                    qtHome,
                    artifacts: [
                        {
                            name: 'Mini Qt Bundle',
                            link: `https://github.com/nodegui/nodegui/releases/download/miniQtm1-5153/Qt-5.15.3.zip`,
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
                            link: `${MIRROR}/online/qtsdkrepository/mac_x64/desktop/qt5_5152/qt.qt5.5152.clang_64/5.15.2-0-202011130601qtbase-MacOS-MacOS_10_13-Clang-MacOS-MacOS_10_13-X86_64.7z`,
                            skipSetup: checkIfExists(path.resolve(qtHome, 'plugins', 'platforms', 'libqcocoa.dylib')),
                        },
                        {
                            name: 'Qt Svg',
                            link: `${MIRROR}/online/qtsdkrepository/mac_x64/desktop/qt5_5152/qt.qt5.5152.clang_64/5.15.2-0-202011130601qtsvg-MacOS-MacOS_10_13-Clang-MacOS-MacOS_10_13-X86_64.7z`,
                            skipSetup: checkIfExists(path.resolve(qtHome, 'lib', 'QtSvg.framework', 'QtSvg')),
                        },
                        {
                            name: 'Qt Tools',
                            link: `${MIRROR}/online/qtsdkrepository/mac_x64/desktop/qt5_5152/qt.qt5.5152.clang_64/5.15.2-0-202011130601qttools-MacOS-MacOS_10_13-Clang-MacOS-MacOS_10_13-X86_64.7z`,
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
                        link: `${MIRROR}/online/qtsdkrepository/windows_x86/desktop/qt5_5152/qt.qt5.5152.win64_msvc2019_64/5.15.2-0-202011130602qtbase-Windows-Windows_10-MSVC2019-Windows-Windows_10-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'Qt5Core.dll')),
                    },
                    {
                        name: 'Qt SVG',
                        link: `${MIRROR}/online/qtsdkrepository/windows_x86/desktop/qt5_5152/qt.qt5.5152.win64_msvc2019_64/5.15.2-0-202011130602qtsvg-Windows-Windows_10-MSVC2019-Windows-Windows_10-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'Qt5Svg.dll')),
                    },
                    {
                        name: 'Qt Tools',
                        link: `${MIRROR}/online/qtsdkrepository/windows_x86/desktop/qt5_5152/qt.qt5.5152.win64_msvc2019_64/5.15.2-0-202011130602qttools-Windows-Windows_10-MSVC2019-Windows-Windows_10-X86_64.7z`,
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
                        link: `${MIRROR}/online/qtsdkrepository/linux_x64/desktop/qt5_5152/qt.qt5.5152.gcc_64/5.15.2-0-202011130601qtbase-Linux-RHEL_7_6-GCC-Linux-RHEL_7_6-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'moc')),
                    },
                    {
                        name: 'Qt SVG',
                        link: `${MIRROR}/online/qtsdkrepository/linux_x64/desktop/qt5_5152/qt.qt5.5152.gcc_64/5.15.2-0-202011130601qtsvg-Linux-RHEL_7_6-GCC-Linux-RHEL_7_6-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'lib', 'libQt5Svg.so')),
                    },
                    {
                        name: 'Qt ICU',
                        link: `${MIRROR}/online/qtsdkrepository/linux_x64/desktop/qt5_5152/qt.qt5.5152.gcc_64/5.15.2-0-202011130601icu-linux-Rhel7.2-x64.7z`,
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
