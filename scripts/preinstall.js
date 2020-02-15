const { setupQt } = require('@nodegui/qt-installer');
const path = require('path');

const qtDir = path.resolve(__dirname, '..', 'miniqt');

setupQt({
    qtDir,
    downloadLink:
        'https://download.qt.io/online/qtsdkrepository/mac_x64/desktop/qt5_5150/qt.qt5.5150.clang_64/5.15.0-0-202002122005qtbase-MacOS-MacOS_10_13-Clang-MacOS-MacOS_10_13-X86_64.7z',
    osType: 'darwin',
}).catch(err => {
    throw err;
});
