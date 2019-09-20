cmake_minimum_required(VERSION 3.1)
if(${CMAKE_VERSION} VERSION_LESS 3.15)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
else()
    cmake_policy(VERSION 3.15)
endif()

set(CMAKE_INCLUDE_CURRENT_DIR ON)
# Need for automatic moc. Moc executable path is set in qt.cmake
set(CMAKE_AUTOMOC ON)
set(QT_VERSION_MAJOR 5)
add_executable(Qt5::moc IMPORTED)

project(NodeGUI 
    VERSION 1.0
)

set(CORE_WIDGETS_ADDON "nodegui_core")
# ---------------------------------------

add_library(${CORE_WIDGETS_ADDON} SHARED  
    "${CMAKE_JS_SRC}"
    "${PROJECT_SOURCE_DIR}/src/cpp/main.cpp"
    # core internals 
    "${PROJECT_SOURCE_DIR}/src/cpp/Extras/Utils/nutils.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/core/FlexLayout/flexlayout.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/core/FlexLayout/flexitem.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/core/YogaWidget/nodestyle.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/core/Events/eventsmap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/core/Events/eventwidget.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/core/YogaWidget/yogawidget.cpp"
    # core deps
    "${PROJECT_SOURCE_DIR}/deps/yoga/log.cpp"
    "${PROJECT_SOURCE_DIR}/deps/yoga/Utils.cpp"
    "${PROJECT_SOURCE_DIR}/deps/yoga/YGConfig.cpp"
    "${PROJECT_SOURCE_DIR}/deps/yoga/YGEnums.cpp"
    "${PROJECT_SOURCE_DIR}/deps/yoga/YGLayout.cpp"
    "${PROJECT_SOURCE_DIR}/deps/yoga/YGNode.cpp"
    "${PROJECT_SOURCE_DIR}/deps/yoga/YGNodePrint.cpp"
    "${PROJECT_SOURCE_DIR}/deps/yoga/YGStyle.cpp"
    "${PROJECT_SOURCE_DIR}/deps/yoga/YGValue.cpp"
    "${PROJECT_SOURCE_DIR}/deps/yoga/Yoga.cpp"
    "${PROJECT_SOURCE_DIR}/deps/yoga/event/event.cpp"
    "${PROJECT_SOURCE_DIR}/deps/yoga/internal/experiments.cpp"
    # wrapped cpps 
    "${PROJECT_SOURCE_DIR}/src/cpp/QtGui/QApplication/qapplication_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtGui/QClipboard/qclipboard_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtGui/QEvent/QKeyEvent/qkeyevent_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtGui/QPixmap/qpixmap_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtGui/QIcon/qicon_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtGui/QCursor/qcursor_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QWidget/qwidget_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QGridLayout/qgridlayout_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QDial/qdial_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QLabel/qlabel_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QLayout/qlayout_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QMainWindow/qmainwindow_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QPushButton/qpushbutton_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QSpinBox/qspinbox_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QCheckBox/qcheckbox_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QProgressBar/qprogressbar_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QRadioButton/qradiobutton_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QTabWidget/qtabwidget_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QLineEdit/qlineedit_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QPlainTextEdit/qplaintextedit_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QScrollArea/qscrollarea_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/core/FlexLayout/flexlayout_wrap.cpp"
    # Custom widgets
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QWidget/nwidget.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QLabel/nlabel.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QCheckBox/ncheckbox.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QDial/ndial.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QLineEdit/nlineedit.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QMainWindow/nmainwindow.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QProgressBar/nprogressbar.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QPushButton/npushbutton.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QSpinBox/nspinbox.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QRadioButton/nradiobutton.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QPlainTextEdit/nplaintextedit.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QScrollArea/nscrollarea.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QTabWidget/ntabwidget.hpp"
) 

# common
include(./config/common.cmake)
AddCommonConfig(${CORE_WIDGETS_ADDON})
# qt
include(./config/qt.cmake)
AddQtSupport(${CORE_WIDGETS_ADDON})

# napi
include(./config/napi.cmake)
AddNapiSupport(${CORE_WIDGETS_ADDON})


target_include_directories(${CORE_WIDGETS_ADDON} PRIVATE 
    "${CMAKE_JS_INC}" 
    "${PROJECT_SOURCE_DIR}"
    "${PROJECT_SOURCE_DIR}/deps"
)

target_link_libraries(${CORE_WIDGETS_ADDON} PRIVATE
    "${CMAKE_JS_LIB}"
)