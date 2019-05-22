{
    'includes': [],
    'type': 'shared_library',
    'variables': {
        'qt_home_dir': '<!(echo $QN_QT_HOME_DIR)',
    },
    'target_defaults': {
        "cflags!": ["-fno-exceptions"],
        "cflags_cc!": ["-fno-exceptions"],
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
                'xcode_settings': {
                    'GCC_ENABLE_CPP_EXCEPTIONS': 'YES',
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
                # 'link_settings': {
                #     'libraries': [
                #         '-Wl,-rpath,<(qt_home_dir)/lib/',
                #     ],
                # },
            }],
            ['OS=="linux"', {
                'cflags': [
                    '<!@(pkg-config --cflags Qt5Core Qt5Gui Qt5Widgets Qt5Test)',
                ],
                'ldflags': [
                    '<!@(pkg-config --libs-only-L --libs-only-other Qt5Core Qt5Gui Qt5Widgets Qt5Test)',
                ],
                'libraries': [
                    '<!@(pkg-config --libs-only-l Qt5Core Qt5Gui Qt5Widgets Qt5Test)',
                ]
            }],
            ['OS=="win"', {
                'msvs_settings': {
                    'VCCLCompilerTool': {
                        'AdditionalOptions': [
                            '/GR-',
                            '/MT',
                            '/EHsc'
                        ]
                    },
                },
                'include_dirs': [
                    '<(module_root_dir)/dep/qt-5.11.0/win32/msvc2017_64/includes',
                    '<(module_root_dir)/dep/qt-5.11.0/win32/msvc2017_64/includes/QtCore',
                    '<(module_root_dir)/dep/qt-5.11.0/win32/msvc2017_64/includes/QtGui',
                    '<(module_root_dir)/dep/qt-5.11.0/win32/msvc2017_64/includes/QtTest',
                    '<(module_root_dir)/dep/qt-5.11.0/win32/msvc2017_64/includes/QtWidgets',
                ],
                'libraries': [
                    '<(module_root_dir)/dep/qt-5.11.0/win32/msvc2017_64/lib/Qt5Core.lib',
                    '<(module_root_dir)/dep/qt-5.11.0/win32/msvc2017_64/lib/Qt5Gui.lib',
                    '<(module_root_dir)/dep/qt-5.11.0/win32/msvc2017_64/lib/Qt5Test.lib',
                    '<(module_root_dir)/dep/qt-5.11.0/win32/msvc2017_64/lib/Qt5Widgets.lib',
                ],
                'copies': [{
                    'files': [
                        '<(module_root_dir)/dep/qt-5.11.0/win32/msvc2017_64/dll/Qt5Core.dll',
                        '<(module_root_dir)/dep/qt-5.11.0/win32/msvc2017_64/dll/Qt5Gui.dll',
                        '<(module_root_dir)/dep/qt-5.11.0/win32/msvc2017_64/dll/Qt5Test.dll',
                        '<(module_root_dir)/dep/qt-5.11.0/win32/msvc2017_64/dll/Qt5Widgets.dll',
                    ],
                    'destination': '<(module_root_dir)/build/Release',
                }]
            }],
        ],
    },
}
