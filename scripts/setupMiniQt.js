#!/usr/bin/env node

const { setupArtifact } = require('@nodegui/artifact-installer');
const { miniQt, useCustomQt, qtHome } = require('./qtConfig');

if (!useCustomQt) {
    console.log(`Minimal Qt ${miniQt.version} setup:`);

    setupArtifact({
        outDir: miniQt.setupDir,
        id: 'nodegui-mini-qt',
        displayName: `Minimal Qt ${miniQt.version} installation`,
        downloadLink: miniQt.downloadLink,
    }).catch(err => {
        console.error(err);
        process.exit(1);
    });
} else {
    console.log(`CustomQt detected at ${qtHome} . Hence, skipping Mini Qt installation...`);
}
