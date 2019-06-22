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
                "../src/cpp/Extras/Utils/nutils.cpp",
                "../src/cpp/core/FlexLayout/flexlayout.cpp",
                "../src/cpp/core/FlexLayout/flexitem.cpp",
                "../src/cpp/core/YogaWidget/nodestyle.cpp",
                "../src/cpp/core/Events/eventsmap.cpp",
                "../src/cpp/core/Events/eventwidget.cpp",
                "../src/cpp/core/YogaWidget/yogawidget.cpp",
                # wrapped cpps
                "../src/cpp/QtGui/QApplication/qapplication_wrap.cpp",
                "../src/cpp/QtGui/QWidget/qwidget_wrap.cpp",
                '../src/cpp/core/FlexLayout/flexlayout_wrap.cpp',
                "../src/cpp/QtWidgets/QGridLayout/qgridlayout_wrap.cpp",
                "../src/cpp/QtWidgets/QLabel/qlabel_wrap.cpp",
                "../src/cpp/QtWidgets/QLayout/qlayout_wrap.cpp",
                "../src/cpp/QtWidgets/QMainWindow/qmainwindow_wrap.cpp",
                "../src/cpp/QtWidgets/QPushButton/qpushbutton_wrap.cpp",
                "../src/cpp/QtWidgets/QCheckBox/qcheckbox_wrap.cpp",
                "../src/cpp/QtWidgets/QProgressBar/qprogressbar_wrap.cpp",
                "../src/cpp/QtWidgets/QRadioButton/qradiobutton_wrap.cpp",
                "../src/cpp/QtWidgets/QLineEdit/qlineedit_wrap.cpp",
            ],
        }
    ]
}
