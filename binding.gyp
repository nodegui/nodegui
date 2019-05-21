{
    "targets": [{
        "target_name": "qtnode",
        "cflags!": ["-fno-exceptions"],
        "cflags_cc!": ["-fno-exceptions"],
        "sources": [
            "src/cpp/main.cpp",
            # non-wrapped cpps
            "src/cpp/Extras/Utils/utils.cpp",
            # wrapped cpps
            "src/cpp/QtGui/QApplication/qapplication_wrap.cpp",
            "src/cpp/QtGui/QWidget/qwidget_wrap.cpp",
            "src/cpp/QtWidgets/QGridLayout/qgridlayout_wrap.cpp",
            "src/cpp/QtWidgets/QLabel/qlabel_wrap.cpp",
            "src/cpp/QtWidgets/QLayout/qlayout_wrap.cpp",
            "src/cpp/QtWidgets/QMainWindow/qmainwindow_wrap.cpp",
            "src/cpp/QtWidgets/QPushButton/qpushbutton_wrap.cpp"
        ],
        'conditions': [
            ['OS=="mac"', {
                'xcode_settings': {
                    'GCC_ENABLE_CPP_EXCEPTIONS': 'YES',
                },
                'include_dirs': [
                    # install qt via homebrew only
                    '<!(echo $QN_QT_HOME_DIR)/include',
                    '<!(echo $QN_QT_HOME_DIR)/include/QtCore',
                    '<!(echo $QN_QT_HOME_DIR)/include/QtGui',
                    '<!(echo $QN_QT_HOME_DIR)/include/QtTest',
                    '<!(echo $QN_QT_HOME_DIR)/include/QtWidgets',
                ],
                'libraries': [
                    '<!(echo $QN_QT_HOME_DIR)/lib/QtCore.framework/QtCore',
                    '<!(echo $QN_QT_HOME_DIR)/lib/QtGui.framework/QtGui',
                    '<!(echo $QN_QT_HOME_DIR)/lib/QtTest.framework/QtTest',
                    '<!(echo $QN_QT_HOME_DIR)/lib/QtWidgets.framework/QtWidgets',
                    '<!(echo $QN_QT_HOME_DIR)/lib/QtPrintSupport.framework/QtPrintSupport',
                ],
                'link_settings': {
                    'libraries': [
                        '-Wl,-rpath,<!(echo $QN_QT_HOME_DIR)/lib/',
                    ],
                },
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
        'include_dirs': [
            "<!@(node -p \"require('node-addon-api').include\")",
        ],
        'dependencies': [
            "<!(node -p \"require('node-addon-api').gyp\")",
        ],
        'defines': ['NAPI_CPP_EXCEPTIONS'],

    }]
}
