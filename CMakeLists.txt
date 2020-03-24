cmake_minimum_required(VERSION 3.1)

include(./config/common.cmake)
include(./config/qt.cmake)
include(./config/napi.cmake)
include(./config/qode.cmake)

# ---------------------------------------

set(CORE_WIDGETS_ADDON "nodegui_core")

project(${CORE_WIDGETS_ADDON})

add_library(${CORE_WIDGETS_ADDON} SHARED
    "${CMAKE_JS_SRC}"
    "${PROJECT_SOURCE_DIR}/src/cpp/main.cpp"
    # core internals
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/Extras/Utils/nutils.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/core/Integration/integration.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/core/FlexLayout/flexutils.cpp"
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
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtGui/QColor/qcolor_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtGui/QApplication/qapplication_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtGui/QClipboard/qclipboard_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtGui/QEvent/QKeyEvent/qkeyevent_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtGui/QEvent/QMouseEvent/qmouseevent_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtGui/QFontDatabase/qfontdatabase_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtGui/QPicture/qpicture_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtGui/QPixmap/qpixmap_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtGui/QIcon/qicon_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtGui/QFont/qfont_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtGui/QCursor/qcursor_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtGui/QKeySequence/qkeysequence_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtGui/QMovie/qmovie_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtGui/QStyle/qstyle_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtCore/QDate/qdate_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtCore/QDateTime/qdatetime_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtCore/QModelIndex/qmodelindex_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtCore/QObject/qobject_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtCore/QVariant/qvariant_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtCore/QSize/qsize_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtCore/QSettings/qsettings_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtCore/QRect/qrect_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtCore/QPoint/qpoint_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtCore/QTime/qtime_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtCore/QUrl/qurl_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QWidget/qwidget_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QDialog/qdialog_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QBoxLayout/qboxlayout_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QCalendarWidget/qcalendarwidget_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QColorDialog/qcolordialog_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QComboBox/qcombobox_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QDateEdit/qdateedit_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QDateTimeEdit/qdatetimeedit_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QDoubleSpinBox/qdoublespinbox_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QFileDialog/qfiledialog_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QFrame/qframe_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QListWidget/qlistwidget_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QListWidgetItem/qlistwidgetitem_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QTableView/qtableview_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QTableWidget/qtablewidget_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QTableWidgetItem/qtablewidgetitem_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QPainter/qpainter_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QGridLayout/qgridlayout_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QDial/qdial_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QLabel/qlabel_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QLayout/qlayout_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QMainWindow/qmainwindow_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QPushButton/qpushbutton_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QToolButton/qtoolbutton_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QSpinBox/qspinbox_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QCheckBox/qcheckbox_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QProgressBar/qprogressbar_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QRadioButton/qradiobutton_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QStackedWidget/qstackedwidget_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QTabBar/qtabbar_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QTabWidget/qtabwidget_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QLineEdit/qlineedit_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QPlainTextEdit/qplaintextedit_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QScrollArea/qscrollarea_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QScrollBar/qscrollbar_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QSystemTrayIcon/qsystemtrayicon_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QAction/qaction_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QShortcut/qshortcut_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QMenuBar/qmenubar_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QMenu/qmenu_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QGroupBox/qgroupbox_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QSlider/qslider_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QTimeEdit/qtimeedit_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QTreeWidget/qtreewidget_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QTreeWidgetItem/qtreewidgetitem_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QMessageBox/qmessagebox_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QInputDialog/qinputdialog_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QButtonGroup/qbuttongroup_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/QtWidgets/QStatusBar/qstatusbar_wrap.cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/lib/core/FlexLayout/flexlayout_wrap.cpp"
    # Custom widgets (include them for automoc since they contain Q_OBJECT)
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtCore/QObject/nobject.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/core/FlexLayout/flexlayout.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtGui/QMovie/nmovie.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtGui/QApplication/napplication.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QWidget/nwidget.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QDialog/ndialog.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QLabel/nlabel.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QCalendarWidget/ncalendarwidget.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QCheckBox/ncheckbox.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QColorDialog/ncolordialog.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QDateEdit/ndateedit.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QDateTimeEdit/ndatetimeedit.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QDial/ndial.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QDoubleSpinBox/ndoublespinbox.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QFileDialog/nfiledialog.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QFrame/nframe.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QListWidget/nlistwidget.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QTableView/ntableview.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QTableWidget/ntablewidget.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QLineEdit/nlineedit.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QMainWindow/nmainwindow.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QProgressBar/nprogressbar.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QPushButton/npushbutton.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QMessageBox/nmessagebox.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QInputDialog/ninputdialog.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QToolButton/ntoolbutton.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QSpinBox/nspinbox.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QRadioButton/nradiobutton.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QPlainTextEdit/nplaintextedit.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QScrollArea/nscrollarea.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QScrollBar/nscrollbar.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QStackedWidget/nstackedwidget.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QTabBar/ntabbar.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QTabWidget/ntabwidget.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QSystemTrayIcon/nsystemtrayicon.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QAction/naction.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QShortcut/nshortcut.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QMenuBar/nmenubar.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QMenu/nmenu.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QLayout/nlayout.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QGridLayout/ngridlayout.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QBoxLayout/nboxlayout.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QComboBox/ncombobox.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QGroupBox/ngroupbox.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QSlider/nslider.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QTimeEdit/ntimeedit.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QTreeWidget/ntreewidget.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QButtonGroup/nbuttongroup.hpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui/QtWidgets/QStatusBar/nstatusbar.hpp"

)

AddCommonConfig(${CORE_WIDGETS_ADDON})
AddQtSupport(${CORE_WIDGETS_ADDON})
AddNapiSupport(${CORE_WIDGETS_ADDON})
AddQodeSupport(${CORE_WIDGETS_ADDON})

target_include_directories(${CORE_WIDGETS_ADDON} PRIVATE
    "${CMAKE_JS_INC}"
    "${PROJECT_SOURCE_DIR}"
    "${PROJECT_SOURCE_DIR}/src/cpp"
    "${PROJECT_SOURCE_DIR}/src/cpp/include"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/deps"
    "${PROJECT_SOURCE_DIR}/src/cpp/include/nodegui"
)


if (WIN32) 
    target_compile_definitions(${CORE_WIDGETS_ADDON} PRIVATE
        ENABLE_DLL_EXPORT=1
    )
    target_compile_options(${CORE_WIDGETS_ADDON} PRIVATE "/MP4")

endif()

target_link_libraries(${CORE_WIDGETS_ADDON} PRIVATE
    "${CMAKE_JS_LIB}"
    Qt5::Widgets
    Qt5::Core
    Qt5::Gui
)

