const fs = require('fs');
const path = require('path');

async function renameFile(oldPath, newPath) {
    return new Promise((resolve, reject) => {
        fs.rename(oldPath, newPath, (err) => (err ? reject(err) : resolve()));
    });
}

async function writeFile(filePath, fileContent) {
    return new Promise((resolve, reject) => {
        fs.writeFile(filePath, fileContent, (err) => (err ? reject(err) : resolve()));
    });
}

async function moveGeneratedSideBar() {
    const src = path.resolve(__dirname, `../../../website/website/sidebars.js`);
    const dest = path.resolve(__dirname, `../../../website/docs/api/sidebar-gen.js`);
    await renameFile(src, dest);
}
async function emptyIndexMd() {
    const src = path.resolve(__dirname, `../../../website/docs/api/generated/index.md`);
    await writeFile(src, '');
}

async function fixDocs() {
    console.log('Fixing Docs...');
    // await moveGeneratedSideBar();
    await emptyIndexMd();
    console.log('Docs fixed successfully.');
}

fixDocs().catch(console.error);
