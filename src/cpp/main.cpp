#include "src/cpp/QtGui/QApplication/qapplication_wrap.h"
#include "src/cpp/QtWidgets/QWidget/qwidget_wrap.h"
#include "src/cpp/QtGui/QPixmap/qpixmap_wrap.h"
#include "src/cpp/QtGui/QIcon/qicon_wrap.h"
#include "src/cpp/QtWidgets/QGridLayout/qgridlayout_wrap.h"
#include "src/cpp/QtWidgets/QLayout/qlayout_wrap.h"
#include "src/cpp/QtWidgets/QLabel/qlabel_wrap.h"
#include "src/cpp/QtWidgets/QMainWindow/qmainwindow_wrap.h"
#include "src/cpp/QtWidgets/QPushButton/qpushbutton_wrap.h"
#include "src/cpp/QtWidgets/QCheckBox/qcheckbox_wrap.h"
#include "src/cpp/QtWidgets/QProgressBar/qprogressbar_wrap.h"
#include "src/cpp/QtWidgets/QRadioButton/qradiobutton_wrap.h"
#include "src/cpp/QtWidgets/QLineEdit/qlineedit_wrap.h"
#include "src/cpp/QtWidgets/QPlainTextEdit/qplaintextedit_wrap.h"
#include "src/cpp/core/FlexLayout/flexlayout_wrap.h"
#include "src/cpp/QtGui/QEvent/QKeyEvent/qkeyevent_wrap.h"
#include <napi.h>
// These cant be instantiated in JS Side
void InitPrivateHelpers(Napi::Env env){
    QLayoutWrap::init(env); //Abstact class wrapper for pointing to any layout
}

Napi::Object Main(Napi::Env env, Napi::Object exports) {
    InitPrivateHelpers(env);
    QApplicationWrap::init(env, exports);
    QWidgetWrap::init(env, exports);
    QPixmapWrap::init(env, exports);
    QIconWrap::init(env, exports);
    QGridLayoutWrap::init(env, exports);
    FlexLayoutWrap::init(env, exports);
    QMainWindowWrap::init(env, exports);
    QPushButtonWrap::init(env, exports);
    QCheckBoxWrap::init(env, exports);
    QProgressBarWrap::init(env, exports);
    QRadioButtonWrap::init(env, exports);
    QLineEditWrap::init(env, exports);
    QKeyEventWrap::init(env, exports);
    QPlainTextEditWrap::init(env, exports);
    return QLabelWrap::init(env, exports);
}

NODE_API_MODULE(NODE_GYP_MODULE_NAME, Main)
