# Adds Qt support
# make sure you include this at the top of whichever Cmakelist file you are going to use.
# Need for automatic moc.

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(QTCONFIG_FILE ${CMAKE_CURRENT_LIST_DIR}/qtConfig.js)

macro(AddQtSupport addonName)    
    execute_process(COMMAND node -p "require('${QTCONFIG_FILE}').qtCmakeDir"
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        OUTPUT_VARIABLE QT_CMAKE_HOME_DIR
    )

    string(REPLACE "\n" "" QT_CMAKE_HOME_DIR "${QT_CMAKE_HOME_DIR}")
    string(REPLACE "\"" "" QT_CMAKE_HOME_DIR "${QT_CMAKE_HOME_DIR}")
    
    message(STATUS "Using QT installation for ${addonName} QT_CMAKE_HOME_DIR:${QT_CMAKE_HOME_DIR}")

    set(Qt5_DIR ${QT_CMAKE_HOME_DIR}) 
    find_package(Qt5 COMPONENTS Widgets Gui Core Svg REQUIRED)
      
endmacro(AddQtSupport addonName)
