{
    'includes': [],
    'type': 'shared_library',
    'variables': {
        'qt_home_dir%': "<!(node -p \"require('@nodegui/test').qtHome\")",
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
                'actions':[
                    {
                        'action_name': 'symlink_qt_headers',
                        'inputs': [],
                        'outputs': [
                            '<(qt_home_dir)/include/QtCore',
                            '<(qt_home_dir)/include/QtGui',
                            '<(qt_home_dir)/include/QtWidgets',
                        ],
                        'action': [
                            'sh', '-c',
                            'mkdir -p <(qt_home_dir)/include && \
                            ln -sfn <(qt_home_dir)/lib/QtCore.framework/Versions/5/Headers <(qt_home_dir)/include/QtCore && \
                            ln -sfn <(qt_home_dir)/lib/QtGui.framework/Versions/5/Headers <(qt_home_dir)/include/QtGui && \
                            ln -sfn <(qt_home_dir)/lib/QtWidgets.framework/Versions/5/Headers <(qt_home_dir)/include/QtWidgets'
                        ],
                    }
                ],
                'include_dirs': [
                    '<(qt_home_dir)/include',
                    '<(qt_home_dir)/lib/QtCore.framework/Versions/5/Headers',
                    '<(qt_home_dir)/lib/QtGui.framework/Versions/5/Headers',
                    '<(qt_home_dir)/lib/QtWidgets.framework/Versions/5/Headers',
                ],
                'libraries': [
                    '<(qt_home_dir)/lib/QtCore.framework/Versions/5/QtCore',
                    '<(qt_home_dir)/lib/QtGui.framework/Versions/5/QtGui',
                    '<(qt_home_dir)/lib/QtWidgets.framework/Versions/5/QtWidgets',
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
            }],
        ],
    },
}
