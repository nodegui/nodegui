#include <napi.h>

#include "QtCore/QObject/qobject_wrap.h"
#include "QtGui/QApplication/qapplication_wrap.h"
#include "QtGui/QClipboard/qclipboard_wrap.h"
#include "QtGui/QCursor/qcursor_wrap.h"
#include "QtGui/QEvent/QKeyEvent/qkeyevent_wrap.h"
#include "QtGui/QIcon/qicon_wrap.h"
#include "QtGui/QKeySequence/qkeysequence_wrap.h"
#include "QtGui/QPixmap/qpixmap_wrap.h"
#include "QtWidgets/QAction/qaction_wrap.h"
#include "QtWidgets/QCheckBox/qcheckbox_wrap.h"
#include "QtWidgets/QDial/qdial_wrap.h"
#include "QtWidgets/QGridLayout/qgridlayout_wrap.h"
#include "QtWidgets/QLabel/qlabel_wrap.h"
#include "QtWidgets/QLayout/qlayout_wrap.h"
#include "QtWidgets/QLineEdit/qlineedit_wrap.h"
#include "QtWidgets/QMainWindow/qmainwindow_wrap.h"
#include "QtWidgets/QMenu/qmenu_wrap.h"
#include "QtWidgets/QMenuBar/qmenubar_wrap.h"
#include "QtWidgets/QPlainTextEdit/qplaintextedit_wrap.h"
#include "QtWidgets/QProgressBar/qprogressbar_wrap.h"
#include "QtWidgets/QPushButton/qpushbutton_wrap.h"
#include "QtWidgets/QRadioButton/qradiobutton_wrap.h"
#include "QtWidgets/QScrollArea/qscrollarea_wrap.h"
#include "QtWidgets/QShortcut/qshortcut_wrap.h"
#include "QtWidgets/QSpinBox/qspinbox_wrap.h"
#include "QtWidgets/QSystemTrayIcon/qsystemtrayicon_wrap.h"
#include "QtWidgets/QTabWidget/qtabwidget_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"
#include "core/FlexLayout/flexlayout_wrap.h"
// These cant be instantiated in JS Side
void InitPrivateHelpers(Napi::Env env) {
  QLayoutWrap::init(env);  // Abstact class wrapper for pointing to any layout
}

Napi::Object Main(Napi::Env env, Napi::Object exports) {
  InitPrivateHelpers(env);
  QApplicationWrap::init(env, exports);
  QObjectWrap::init(env, exports);
  QClipboardWrap::init(env, exports);
  QWidgetWrap::init(env, exports);
  QPixmapWrap::init(env, exports);
  QKeySequenceWrap::init(env, exports);
  QIconWrap::init(env, exports);
  QCursorWrap::init(env, exports);
  QGridLayoutWrap::init(env, exports);
  FlexLayoutWrap::init(env, exports);
  QMainWindowWrap::init(env, exports);
  QPushButtonWrap::init(env, exports);
  QSpinBoxWrap::init(env, exports);
  QCheckBoxWrap::init(env, exports);
  QProgressBarWrap::init(env, exports);
  QRadioButtonWrap::init(env, exports);
  QTabWidgetWrap::init(env, exports);
  QLineEditWrap::init(env, exports);
  QKeyEventWrap::init(env, exports);
  QPlainTextEditWrap::init(env, exports);
  QDialWrap::init(env, exports);
  QLabelWrap::init(env, exports);
  QScrollAreaWrap::init(env, exports);
  QSystemTrayIconWrap::init(env, exports);
  QActionWrap::init(env, exports);
  QShortcutWrap::init(env, exports);
  QMenuWrap::init(env, exports);
  QMenuBarWrap::init(env, exports);
  return exports;
}

NODE_API_MODULE(NODE_GYP_MODULE_NAME, Main)
