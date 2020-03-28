const generated = require('./docs/api/sidebar-gen');

module.exports = {
    api: {
        Intro: ['api/manual/synopsis'],
        ...generated.docs,
        Others: ['api/manual/process'],
    },
    guides: {
        'The Basics': [
            'guides/getting-started',
            'guides/tutorial',
            'guides/styling',
            'guides/layout',
            'guides/handle-events',
            'guides/scroll-view',
            'guides/images',
            'guides/networking',
            'guides/helpful-links',
        ],
        Guides: [
            'guides/nodegui-architecture',
            'guides/debugging',
            'guides/debugging-in-vscode',
            'guides/using-native-node-modules',
            'guides/custom-nodegui-native-plugin',
        ],
    },
};
