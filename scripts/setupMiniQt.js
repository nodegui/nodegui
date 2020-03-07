#!/usr/bin/env node

const { setupArtifact } = require('@nodegui/artifact-installer');
const { miniQt, useCustomQt, qtHome } = require('../config/qtConfig');

if (!useCustomQt) {
    console.log(`Minimal Qt ${miniQt.version} setup:`);
} else {
    console.log(`CustomQt detected at ${qtHome} . Hence, skipping Mini Qt installation...`);
}

async function setupQt() {
    return Promise.all(
        miniQt.artifacts.map(async artifact =>
            setupArtifact({
                outDir: miniQt.setupDir,
                id: 'nodegui-mini-qt',
                displayName: `${artifact.name} for Minimal Qt: ${miniQt.version} installation`,
                downloadLink: artifact.link,
            }),
        ),
    );
}

setupQt().catch(err => {
    console.error(err);
    process.exit(1);
});
