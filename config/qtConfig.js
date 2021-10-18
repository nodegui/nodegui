const os = require('os');
const path = require('path');
const fs = require('fs');

const SETUP_DIR = path.resolve(__dirname, '..', 'miniqt');
const QT_VERSION = '5.14.1';
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
                            link: `${MIRROR}/online/qtsdkrepository/mac_x64/desktop/qt5_5141/qt.qt5.5141.clang_64/5.14.1-0-202001241000qtbase-MacOS-MacOS_10_13-Clang-MacOS-MacOS_10_13-X86_64.7z`,
                            skipSetup: checkIfExists(path.resolve(qtHome, 'plugins', 'platforms', 'libqcocoa.dylib')),
                        },
                        {
                            name: 'Qt Svg',
                            link: `${MIRROR}/online/qtsdkrepository/mac_x64/desktop/qt5_5141/qt.qt5.5141.clang_64/5.14.1-0-202001241000qtsvg-MacOS-MacOS_10_13-Clang-MacOS-MacOS_10_13-X86_64.7z`,
                            skipSetup: checkIfExists(path.resolve(qtHome, 'lib', 'QtSvg.framework', 'QtSvg')),
                        },
                        {
                            name: 'Qt Texttospeech',
                            link: `https://download.qt.io/online/qtsdkrepository/mac_x64/desktop/qt5_5141/qt.qt5.5141.clang_64/5.14.1-0-202001241000qtspeech-MacOS-MacOS_10_13-Clang-MacOS-MacOS_10_13-X86_64.7z`,
                            skipSetup: checkIfExists(
                                path.resolve(qtHome, 'lib', 'QtTextToSpeech.framework', 'QtTextToSpeech'),
                            ),
                        },
                        {
                            name: 'Qt Tools',
                            link: `${MIRROR}/online/qtsdkrepository/mac_x64/desktop/qt5_5141/qt.qt5.5141.clang_64/5.14.1-0-202001241000qttools-MacOS-MacOS_10_13-Clang-MacOS-MacOS_10_13-X86_64.7z`,
                            skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'macdeployqt')),
                        },
                    ],
                };
            }
        }
        case 'win32': {
            const qtHome = path.resolve(SETUP_DIR, QT_VERSION, 'msvc2017_64');
            return {
                qtHome,
                artifacts: [
                    {
                        name: 'Qt Base',
                        link: `${MIRROR}/online/qtsdkrepository/windows_x86/desktop/qt5_5141/qt.qt5.5141.win64_msvc2017_64/5.14.1-0-202001240957qtbase-Windows-Windows_10-MSVC2017-Windows-Windows_10-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'Qt5Core.dll')),
                    },
                    {
                        name: 'Qt SVG',
                        link: `${MIRROR}/online/qtsdkrepository/windows_x86/desktop/qt5_5141/qt.qt5.5141.win64_msvc2017_64/5.14.1-0-202001240957qtsvg-Windows-Windows_10-MSVC2017-Windows-Windows_10-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'Qt5Svg.dll')),
                    },
                    {
                        name: 'Qt Texttospeech',
                        link: `https://download.qt.io/online/qtsdkrepository/windows_x86/desktop/qt5_5141/qt.qt5.5141.win64_msvc2017_64/5.14.1-0-202001240957qtspeech-Windows-Windows_10-MSVC2017-Windows-Windows_10-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'lib', 'Qt5TextToSpeech.dll')),
                    },
                    {
                        name: 'Qt Tools',
                        link: `${MIRROR}/online/qtsdkrepository/windows_x86/desktop/qt5_5141/qt.qt5.5141.win64_msvc2017_64/5.14.1-0-202001240957qttools-Windows-Windows_10-MSVC2017-Windows-Windows_10-X86_64.7z`,
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
                        link: `${MIRROR}/online/qtsdkrepository/linux_x64/desktop/qt5_5141/qt.qt5.5141.gcc_64/5.14.1-0-202001240953qtbase-Linux-RHEL_7_6-GCC-Linux-RHEL_7_6-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'bin', 'moc')),
                    },
                    {
                        name: 'Qt SVG',
                        link: `${MIRROR}/online/qtsdkrepository/linux_x64/desktop/qt5_5141/qt.qt5.5141.gcc_64/5.14.1-0-202001240953qtsvg-Linux-RHEL_7_6-GCC-Linux-RHEL_7_6-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'lib', 'libQt5Svg.so')),
                    },
                    {
                        name: 'Qt Texttospeech',
                        link: `https://download.qt.io/online/qtsdkrepository/linux_x64/desktop/qt5_5141/qt.qt5.5141.gcc_64/5.14.1-0-202001240953qtspeech-Linux-RHEL_7_6-GCC-Linux-RHEL_7_6-X86_64.7z`,
                        skipSetup: checkIfExists(path.resolve(qtHome, 'lib', 'libQt5TextToSpeech.so')),
                    },
                    {
                        name: 'Qt ICU',
                        link: `${MIRROR}/online/qtsdkrepository/linux_x64/desktop/qt5_5141/qt.qt5.5141.gcc_64/5.14.1-0-202001240953icu-linux-Rhel7.2-x64.7z`,
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
