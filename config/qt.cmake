# Adds Qt support
# make sure you include this at the top of whichever Cmakelist file you are going to use.
# Need for automatic moc.

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

macro(AddQtSupport addonName)    
    execute_process(COMMAND node -p "require('./scripts/config.js').qtCmakeDir"
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        OUTPUT_VARIABLE QT_CMAKE_HOME_DIR
    )

    # if(DEFINED ENV{QT_INSTALL_DIR})
    #     # Allows to use custom Qt installation via QT_INSTALL_DIR env variable
    #     message(STATUS "Using Custom QT installation for ${addonName} QT_INSTALL_DIR:$ENV{QT_INSTALL_DIR}")
    #     set(QT_HOME_DIR "$ENV{QT_INSTALL_DIR}")
    # endif()

    string(REPLACE "\n" "" QT_CMAKE_HOME_DIR "${QT_CMAKE_HOME_DIR}")
    string(REPLACE "\"" "" QT_CMAKE_HOME_DIR "${QT_CMAKE_HOME_DIR}")
    
    message(STATUS "Using QT installation for ${addonName} QT_CMAKE_HOME_DIR:${QT_CMAKE_HOME_DIR}")

    set(Qt5_DIR ${QT_CMAKE_HOME_DIR}) 
    find_package(Qt5 COMPONENTS Widgets Gui Core REQUIRED)
      
endmacro(AddQtSupport addonName)
