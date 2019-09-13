const path = require("path");
module.exports = {
  rootDir: path.resolve(__dirname, ".."),
  include: "src/cpp/core/NodeWidget/nodewidget.h",
  headers: [
    "src/cpp/QtWidgets/QWidget/nwidget.h",
    "src/cpp/QtWidgets/QLabel/nlabel.h",
    "src/cpp/QtWidgets/QCheckBox/ncheckbox.h",
    "src/cpp/QtWidgets/QDial/ndial.h",
    "src/cpp/QtWidgets/QLineEdit/nlineedit.h",
    "src/cpp/QtWidgets/QMainWindow/nmainwindow.h",
    "src/cpp/QtWidgets/QProgressBar/nprogressbar.h",
    "src/cpp/QtWidgets/QPushButton/npushbutton.h",
    "src/cpp/QtWidgets/QSpinBox/nspinbox.h",
    "src/cpp/QtWidgets/QRadioButton/nradiobutton.h",
    "src/cpp/QtWidgets/QPlainTextEdit/nplaintextedit.h",
    "src/cpp/QtWidgets/QScrollArea/nscrollarea.h"
  ]
};
