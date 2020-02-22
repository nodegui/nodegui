#!/usr/bin/env node

const { setupArtifact } = require('@nodegui/artifact-installer');
const { miniQt } = require('./config');

setupArtifact({
    outDir: miniQt.setupDir,
    id: 'nodegui-mini-qt',
    displayName: `Minimal Qt ${miniQt.version} installation`,
    downloadLink: miniQt.downloadLink,
}).catch(err => {
    console.error(err);
    process.exit(1);
});
