{
    'includes': [],
    'type': 'shared_library',
    'variables': {
        'qt_home_dir%': "<!(node -p \"require('@nodegui/test').include\")",
    },
    'target_defaults': {
        'cflags!': ['-fno-exceptions'],
        'cflags_cc!': ['-fno-exceptions'],
        'sources': [],
        'includes': [],
        'include_dirs': [
            "<!@(node -p \"require('node-addon-api').include\")",
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
                },
                'include_dirs': [
                    # install qt via homebrew only
                    '<(qt_home_dir)/include',
                    '<(qt_home_dir)/include/QtCore',
                    '<(qt_home_dir)/include/QtGui',
                    '<(qt_home_dir)/include/QtTest',
                    '<(qt_home_dir)/include/QtWidgets',
                ],
                'libraries': [
                    '<(qt_home_dir)/lib/QtCore.framework/QtCore',
                    '<(qt_home_dir)/lib/QtGui.framework/QtGui',
                    '<(qt_home_dir)/lib/QtTest.framework/QtTest',
                    '<(qt_home_dir)/lib/QtWidgets.framework/QtWidgets',
                    '<(qt_home_dir)/lib/QtPrintSupport.framework/QtPrintSupport',
                ],
            }],
            ['OS=="linux"', {
                'include_dirs': [
                    '<(qt_home_dir)/include',
                    '<(qt_home_dir)/include/QtCore',
                    '<(qt_home_dir)/include/QtGui',
                    '<(qt_home_dir)/include/QtWidgets',
                ],
                'libraries': [
                    '<(qt_home_dir)/lib/libQt5Core.so',
                    '<(qt_home_dir)/lib/libQt5Gui.so',
                    '<(qt_home_dir)/lib/libQt5Widgets.so',
                ],
                'cflags':[
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
                    "_HAS_EXCEPTIONS=1"
                ],
                'include_dirs': [
                    '<(qt_home_dir)\\include',
                    '<(qt_home_dir)\\include\\QtCore',
                    '<(qt_home_dir)\\include\\QtGui',
                    '<(qt_home_dir)\\include\\QtWidgets',
                ],
                'libraries': [
                    '<(qt_home_dir)\\lib\\Qt5Core.lib',
                    '<(qt_home_dir)\\lib\\Qt5Gui.lib',
                    '<(qt_home_dir)\\lib\\Qt5Widgets.lib',
                ],
                'copies': [{
                    'files': [
                        '<(qt_home_dir)\\bin\\Qt5Core.dll',
                        '<(qt_home_dir)\\bin\\Qt5Gui.dll',
                        '<(qt_home_dir)\\bin\\Qt5Widgets.dll',
                    ],
                    'destination': '<(PRODUCT_DIR)',
                }]
            }],
        ],
    },
}
