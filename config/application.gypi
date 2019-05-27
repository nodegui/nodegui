{
    "includes": [
        "./common.gypi"
    ],
    "targets": [
        {
            "target_name": "qtnode",
            'include_dirs': ['<(module_root_dir)'],
            "sources": [
                "../src/cpp/main.cpp",
                # non-wrapped cpps
                "../src/cpp/Extras/Utils/utils.cpp",
                "../src/cpp/core/FlexLayout/flexlayout.cpp",
                # wrapped cpps
                "../src/cpp/QtGui/QApplication/qapplication_wrap.cpp",
                "../src/cpp/QtGui/QWidget/qwidget_wrap.cpp",
                "../src/cpp/QtWidgets/QGridLayout/qgridlayout_wrap.cpp",
                "../src/cpp/QtWidgets/QLabel/qlabel_wrap.cpp",
                "../src/cpp/QtWidgets/QLayout/qlayout_wrap.cpp",
                "../src/cpp/QtWidgets/QMainWindow/qmainwindow_wrap.cpp",
                "../src/cpp/QtWidgets/QPushButton/qpushbutton_wrap.cpp"
            ],
        }
    ]
}
