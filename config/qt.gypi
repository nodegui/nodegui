{
    'variables': {
        'qt_home_dir%': "<!(node -p \"require('@nodegui/qode').qtHome\")",
    },
    'target_conditions': [
        ['OS=="mac"', {
            'actions': [
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
        }],
        ['OS=="win"', {
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
            ]
        }],
    ],
}
