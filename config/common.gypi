{
    'cflags!': ['-fno-exceptions'],
    'cflags_cc!': ['-fno-exceptions'],
    'sources': [],
    'includes': [],
    'include_dirs': [
        "<!@(node -p \"require('node-addon-api').include\")",
        '..',
        '../deps/',
    ],
    'dependencies': [
        "<!(node -p \"require('node-addon-api').gyp\")",
    ],
    'defines': ['NAPI_CPP_EXCEPTIONS'],
    'target_conditions': [
        ['OS=="mac"', {
            'cflags+': ['-fvisibility=hidden'],
            'xcode_settings': {
                'GCC_SYMBOLS_PRIVATE_EXTERN': 'YES',  # -fvisibility=hidden
                'GCC_ENABLE_CPP_EXCEPTIONS': 'YES',
                'CLANG_CXX_LIBRARY': 'libc++',
                'MACOSX_DEPLOYMENT_TARGET': '10.7',
                'OTHER_CFLAGS': ['-std=c++14'],
                'OTHER_LDFLAGS': ['-Wl,-rpath,@loader_path'],
            },
        }],
        ['OS=="linux"', {
            'cflags': [
                '-fPIC'
            ],
        }],
        ['OS=="win"', {
            'msvs_settings': {
                'VCCLCompilerTool': {
                    'ExceptionHandling': 1,
                    'AdditionalOptions': [
                        '/GR-',
                        '/MT',
                        '/EHsc'
                    ]
                },
            },
            "defines": [
                "_HAS_EXCEPTIONS=1",
            ],
        }],
    ],
}
