import { QFileDialog, DialogCode, FileMode } from './index';

const fileDialog = new QFileDialog();
fileDialog.setFileMode(FileMode.AnyFile);
fileDialog.setNameFilter('All files (*.*)');

if (fileDialog.exec() === DialogCode.Accepted) {
    const selectedFiles = fileDialog.selectedFiles();
    console.log(selectedFiles);
} else {
    console.log('User canceled');
}
