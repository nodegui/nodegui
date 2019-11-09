cmake_minimum_required(VERSION 3.1)

include(./config/common.cmake)
include(./config/qt.cmake)
include(./config/napi.cmake)

# ---------------------------------------

set(CORE_WIDGETS_ADDON "nodegui_core")

project(${CORE_WIDGETS_ADDON})

add_library(${CORE_WIDGETS_ADDON} SHARED  
    "${CMAKE_JS_SRC}"
    "${PROJECT_SOURCE_DIR}/src/cpp/main.cpp"
    # core internals 
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/Extras/Utils/nutils.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/core/FlexLayout/flexlayout.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/core/FlexLayout/flexitem.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/core/YogaWidget/nodestyle.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/core/Events/eventsmap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/core/Events/eventwidget.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/core/YogaWidget/yogawidget.cpp"
    # core deps
    "${PROJECT_SOURCE_DIR}/src/cpp/include/deps/yoga/log.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/deps/yoga/Utils.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/deps/yoga/YGConfig.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/deps/yoga/YGEnums.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/deps/yoga/YGLayout.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/deps/yoga/YGNode.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/deps/yoga/YGNodePrint.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/deps/yoga/YGStyle.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/deps/yoga/YGValue.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/deps/yoga/Yoga.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/deps/yoga/event/event.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/deps/yoga/internal/experiments.cpp"
    # wrapped cpps 
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtGui/QApplication/qapplication_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtGui/QClipboard/qclipboard_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtGui/QEvent/QKeyEvent/qkeyevent_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtGui/QPixmap/qpixmap_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtGui/QIcon/qicon_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtGui/QCursor/qcursor_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtGui/QKeySequence/qkeysequence_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtCore/QObject/qobject_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QWidget/qwidget_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QGridLayout/qgridlayout_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QDial/qdial_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QLabel/qlabel_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QLayout/qlayout_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QMainWindow/qmainwindow_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QPushButton/qpushbutton_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QSpinBox/qspinbox_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QCheckBox/qcheckbox_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QProgressBar/qprogressbar_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QRadioButton/qradiobutton_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QTabWidget/qtabwidget_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QLineEdit/qlineedit_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QPlainTextEdit/qplaintextedit_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QScrollArea/qscrollarea_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QSystemTrayIcon/qsystemtrayicon_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QAction/qaction_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QShortcut/qshortcut_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QMenuBar/qmenubar_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QMenu/qmenu_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/core/FlexLayout/flexlayout_wrap.cpp"
    # Custom widgets (include them for automoc since they contain Q_OBJECT)
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtCore/QObject/nobject.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QWidget/nwidget.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QLabel/nlabel.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QCheckBox/ncheckbox.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QDial/ndial.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QLineEdit/nlineedit.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QMainWindow/nmainwindow.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QProgressBar/nprogressbar.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QPushButton/npushbutton.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QSpinBox/nspinbox.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QRadioButton/nradiobutton.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QPlainTextEdit/nplaintextedit.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QScrollArea/nscrollarea.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QTabWidget/ntabwidget.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QSystemTrayIcon/nsystemtrayicon.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QAction/naction.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QShortcut/nshortcut.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QMenuBar/nmenubar.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QMenu/nmenu.hpp"
) 

AddCommonConfig(${CORE_WIDGETS_ADDON})
AddQtSupport(${CORE_WIDGETS_ADDON})
AddNapiSupport(${CORE_WIDGETS_ADDON})

target_include_directories(${CORE_WIDGETS_ADDON} PRIVATE 
    "${CMAKE_JS_INC}" 
    "${PROJECT_SOURCE_DIR}"
    "${PROJECT_SOURCE_DIR}/src/cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/deps"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui"
)

target_link_libraries(${CORE_WIDGETS_ADDON} PRIVATE
    "${CMAKE_JS_LIB}"
)
