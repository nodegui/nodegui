module.exports = {
    extends: [
        'plugin:prettier/recommended', // Enables eslint-plugin-prettier and eslint-config-prettier. This will display prettier errors as ESLint errors. Make sure this is always the last configuration in the extends array.
    ],
    parserOptions: {
        ecmaVersion: 2018, // Allows for the parsing of modern ECMAScript features
        sourceType: 'module', // Allows for the use of imports
    },
    overrides: [
        {
            files: ['*.ts', '*.tsx'],
            parser: '@typescript-eslint/parser', // Specifies the ESLint parser
            extends: [
                'plugin:@typescript-eslint/recommended', // Uses the recommended rules from the @typescript-eslint/eslint-plugin
                'prettier/@typescript-eslint', // Uses eslint-config-prettier to disable ESLint rules from @typescript-eslint/eslint-plugin that would conflict with prettier
                'plugin:prettier/recommended', // Enables eslint-plugin-prettier and eslint-config-prettier. This will display prettier errors as ESLint errors. Make sure this is always the last configuration in the extends array.
            ],
            parserOptions: {
                ecmaVersion: 2018, // Allows for the parsing of modern ECMAScript features
                sourceType: 'module', // Allows for the use of imports
            },
            rules: {
                '@typescript-eslint/camelcase': 0,
                '@typescript-eslint/no-var-requires': 0,
                '@typescript-eslint/no-explicit-any': 0,

                // Restore configuration to the default on in v2.34.0 (makes upgrade to v4.13.0 non-breaking)
                '@typescript-eslint/ban-types': [
                    2,
                    {
                        extendDefaults: false,
                        types: {
                            String: {
                                message: 'Use string instead',
                                fixWith: 'string',
                            },
                            Boolean: {
                                message: 'Use boolean instead',
                                fixWith: 'boolean',
                            },
                            Number: {
                                message: 'Use number instead',
                                fixWith: 'number',
                            },
                            Object: {
                                message: 'Use Record<string, any> instead',
                                fixWith: 'Record<string, any>',
                            },
                            Symbol: {
                                message: 'Use symbol instead',
                                fixWith: 'symbol',
                            }
                        }
                    }
                ]
            },
        },
    ],
};
