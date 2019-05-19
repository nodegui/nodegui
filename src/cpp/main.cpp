#include "QtGui/QApplication/qapplication_wrap.h"
#include "QtGui/QWidget/qwidget_wrap.h"
#include "QtWidgets/QGridLayout/qgridlayout_wrap.h"
#include "QtWidgets/QLayout/qlayout_wrap.h"
#include "QtWidgets/QLabel/qlabel_wrap.h"
#include "QtWidgets/QMainWindow/qmainwindow_wrap.h"
#include <napi.h>



//private : will not be accessibe in js
void InitPrivateHelpers(Napi::Env env){
    QLayoutWrap::init(env); //Abstact class wrapper for pointing to any layout
}

Napi::Object Main(Napi::Env env, Napi::Object exports) {
    InitPrivateHelpers(env);
    QApplicationWrap::init(env, exports);
    QWidgetWrap::init(env, exports);
    QGridLayoutWrap::init(env, exports);
    QMainWindowWrap::init(env,exports);
    return QLabelWrap::init(env, exports);
}


NODE_API_MODULE(NODE_GYP_MODULE_NAME, Main)
