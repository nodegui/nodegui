cmake_minimum_required(VERSION 3.1)
set(CMAKE_BUILD_PARALLEL_LEVEL 8)
if(${CMAKE_VERSION} VERSION_LESS 3.15)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
else()
    cmake_policy(VERSION 3.15)
endif()

project(NodeGUI 
    VERSION 1.0
    DESCRIPTION "Build cross platform native desktop apps"
    HOMEPAGE_URL https://nodegui.org
    LANGUAGES CXX
)

set(ADDON_NAME "qtnode")

add_library(${ADDON_NAME} SHARED  
    ${CMAKE_JS_SRC}
    ${PROJECT_SOURCE_DIR}/src/cpp/main.cpp
    # non wrapped 
    ${PROJECT_SOURCE_DIR}/src/cpp/Extras/Utils/nutils.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/core/FlexLayout/flexlayout.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/core/FlexLayout/flexitem.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/core/YogaWidget/nodestyle.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/core/Events/eventsmap.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/core/Events/eventwidget.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/core/YogaWidget/yogawidget.cpp
    # wrapped cpps. Move non wrapped ones to shared gypi 
    ${PROJECT_SOURCE_DIR}/src/cpp/QtGui/QApplication/qapplication_wrap.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/QtGui/QClipboard/qclipboard_wrap.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/QtGui/QEvent/QKeyEvent/qkeyevent_wrap.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/QtGui/QPixmap/qpixmap_wrap.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/QtGui/QIcon/qicon_wrap.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/QtGui/QCursor/qcursor_wrap.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/core/FlexLayout/flexlayout_wrap.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QWidget/qwidget_wrap.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QGridLayout/qgridlayout_wrap.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QDial/qdial_wrap.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QLabel/qlabel_wrap.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QLayout/qlayout_wrap.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QMainWindow/qmainwindow_wrap.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QPushButton/qpushbutton_wrap.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QSpinBox/qspinbox_wrap.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QCheckBox/qcheckbox_wrap.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QProgressBar/qprogressbar_wrap.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QRadioButton/qradiobutton_wrap.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QLineEdit/qlineedit_wrap.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QPlainTextEdit/qplaintextedit_wrap.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/QtWidgets/QScrollArea/qscrollarea_wrap.cpp
    # moc
    ${PROJECT_SOURCE_DIR}/src/cpp/autogen/nwidget_moc.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/autogen/nlabel_moc.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/autogen/ncheckbox_moc.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/autogen/ndial_moc.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/autogen/nlineedit_moc.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/autogen/nmainwindow_moc.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/autogen/nprogressbar_moc.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/autogen/npushbutton_moc.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/autogen/nspinbox_moc.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/autogen/nradiobutton_moc.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/autogen/nplaintextedit_moc.cpp
    ${PROJECT_SOURCE_DIR}/src/cpp/autogen/nscrollarea_moc.cpp
    # deps
    ${PROJECT_SOURCE_DIR}/deps/yoga/log.cpp
    ${PROJECT_SOURCE_DIR}/deps/yoga/Utils.cpp
    ${PROJECT_SOURCE_DIR}/deps/yoga/YGConfig.cpp
    ${PROJECT_SOURCE_DIR}/deps/yoga/YGEnums.cpp
    ${PROJECT_SOURCE_DIR}/deps/yoga/YGLayout.cpp
    ${PROJECT_SOURCE_DIR}/deps/yoga/YGNode.cpp
    ${PROJECT_SOURCE_DIR}/deps/yoga/YGNodePrint.cpp
    ${PROJECT_SOURCE_DIR}/deps/yoga/YGStyle.cpp
    ${PROJECT_SOURCE_DIR}/deps/yoga/YGValue.cpp
    ${PROJECT_SOURCE_DIR}/deps/yoga/Yoga.cpp
    ${PROJECT_SOURCE_DIR}/deps/yoga/event/event.cpp
    ${PROJECT_SOURCE_DIR}/deps/yoga/internal/experiments.cpp
) 

# NAPI stuff
execute_process(COMMAND node -p "require('node-addon-api').include"
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    OUTPUT_VARIABLE NODE_ADDON_API_DIR
)
string(REPLACE "\n" "" NODE_ADDON_API_DIR ${NODE_ADDON_API_DIR})
string(REPLACE "\"" "" NODE_ADDON_API_DIR ${NODE_ADDON_API_DIR})

# qt stuff
execute_process(COMMAND node -p "require('@nodegui/qode').qtHome"
    WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    OUTPUT_VARIABLE QT_HOME_DIR
)
string(REPLACE "\n" "" QT_HOME_DIR ${QT_HOME_DIR})
string(REPLACE "\"" "" QT_HOME_DIR ${QT_HOME_DIR})

# Continue
set_target_properties(${ADDON_NAME} PROPERTIES PREFIX "" SUFFIX ".node")

target_include_directories(${ADDON_NAME} PRIVATE 
    ${CMAKE_JS_INC} 
    ${NODE_ADDON_API_DIR}  
    ${PROJECT_SOURCE_DIR}
    ${PROJECT_SOURCE_DIR}/deps 
)

target_compile_definitions(${ADDON_NAME} PRIVATE
    NAPI_CPP_EXCEPTIONS
    _HAS_EXCEPTIONS=1
    SPDLOG_COMPILED_LIB
    ENUM_BITFIELDS_NOT_SUPPORTED
)

target_compile_features(${ADDON_NAME} PRIVATE 
    cxx_std_14
)

target_link_libraries(${ADDON_NAME} 
   ${CMAKE_JS_LIB}
)

if (APPLE) 
    target_include_directories(${ADDON_NAME} PRIVATE
        ${QT_HOME_DIR}/include
        ${QT_HOME_DIR}/lib/QtCore.framework/Versions/5/Headers
        ${QT_HOME_DIR}/lib/QtGui.framework/Versions/5/Headers
        ${QT_HOME_DIR}/lib/QtWidgets.framework/Versions/5/Headers
    )

    target_link_libraries(${ADDON_NAME} PRIVATE
        ${QT_HOME_DIR}/lib/QtCore.framework/Versions/5/QtCore
        ${QT_HOME_DIR}/lib/QtGui.framework/Versions/5/QtGui
        ${QT_HOME_DIR}/lib/QtWidgets.framework/Versions/5/QtWidgets
    )
endif()

if (WIN32)
    target_include_directories(${ADDON_NAME} PRIVATE
        ${QT_HOME_DIR}\include
        ${QT_HOME_DIR}\include\QtCore
        ${QT_HOME_DIR}\include\QtGui
        ${QT_HOME_DIR}\include\QtWidgets
    )

    target_link_libraries(${ADDON_NAME} PRIVATE
        ${QT_HOME_DIR}\lib\Qt5Core.lib
        ${QT_HOME_DIR}\lib\Qt5Gui.lib
        ${QT_HOME_DIR}\lib\Qt5Widgets.lib
    )
endif()

if(UNIX AND NOT APPLE)
    set(LINUX TRUE)
endif()

if(LINUX)
    target_include_directories(${ADDON_NAME} PRIVATE
        ${QT_HOME_DIR}/include
        ${QT_HOME_DIR}/include/QtCore
        ${QT_HOME_DIR}/include/QtGui
        ${QT_HOME_DIR}/include/QtWidgets
    )

    target_link_libraries(${ADDON_NAME} PRIVATE
        ${QT_HOME_DIR}/lib/libQt5Core.so
        ${QT_HOME_DIR}/lib/libQt5Gui.so
        ${QT_HOME_DIR}/lib/libQt5Widgets.so
    )
endif()