module.exports = {
    title: 'NodeGui',
    tagline: 'Build performant, native, cross platform desktop apps with JavaScript and CSS 🚀',
    url: 'https://nodegui.org',
    baseUrl: '/',
    favicon: 'img/favicon.ico',
    organizationName: 'nodegui', // Usually your GitHub org/user name.
    projectName: 'nodegui', // Usually your repo name.
    onBrokenLinks: 'warn',
    onDuplicateRoutes: 'warn',
    themeConfig: {
        navbar: {
            title: 'NodeGui',
            logo: {
                alt: 'NodeGui Logo',
                src: 'img/logo-circle.png',
            },
            items: [
                { to: 'docs/guides/getting-started', label: 'Docs', position: 'right' },
                { to: 'docs/api/manual/synopsis', label: 'API', position: 'right' },
                { to: 'blog', label: 'Blog', position: 'right' },
                {
                    href: 'https://github.com/nodegui/nodegui',
                    label: 'GitHub',
                    position: 'right',
                },
            ],
        },
        footer: {
            style: 'dark',
            links: [
                {
                    title: 'Docs',
                    items: [
                        { to: 'docs/guides/getting-started', label: 'Getting Started' },
                        { to: 'docs/api/manual/synopsis', label: 'API' },
                    ],
                },
                {
                    title: 'Community',
                    items: [
                        {
                            label: 'Slack',
                            href: 'https://nodegui.slack.com',
                        },
                        {
                            label: 'Medium',
                            to: 'https://medium.com/nodegui',
                        },
                    ],
                },
                {
                    title: 'More',
                    items: [
                        {
                            label: 'Blog',
                            to: 'blog',
                        },
                        {
                            label: 'React NodeGui',
                            to: 'https://react.nodegui.org',
                        },
                        {
                            label: 'FAQ',
                            to: 'docs/faq',
                        },
                    ],
                },
            ],
            copyright: `Copyright © ${new Date().getFullYear()} NodeGui`,
        },
        algolia: {
            apiKey: '0baa260ee0052fe6c974714cbf091ae1',
            appId: 'BH4D9OD16A',
            indexName: 'nodegui',
            algoliaOptions: {}, // Optional, if provided by Algolia
        },
    },
    presets: [
        [
            '@docusaurus/preset-classic',
            {
                docs: {
                    sidebarPath: require.resolve('./sidebars.js'),
                    editUrl: 'https://github.com/nodegui/nodegui/edit/master/website/',
                },
                theme: {
                    customCss: require.resolve('./src/css/custom.css'),
                },
            },
        ],
    ],
    plugins: [
        [
            '@docusaurus/plugin-google-analytics',
            {
                trackingID: 'UA-145065218-1',
            },
        ],
    ],
};
