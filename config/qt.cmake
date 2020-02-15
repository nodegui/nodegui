# Adds Qt support
# make sure you include this at the top of whichever Cmakelist file you are going to use.
# Need for automatic moc.

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)


macro(AddQtSupport addonName)
    # execute_process(COMMAND node -p "require('@nodegui/qode').qtHome"
    #     WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
    #     OUTPUT_VARIABLE QT_HOME_DIR
    # )

    # if(DEFINED ENV{QT_INSTALL_DIR})
    #     # Allows to use custom Qt installation via QT_INSTALL_DIR env variable
    #     message(STATUS "Using Custom QT installation for ${addonName} QT_INSTALL_DIR:$ENV{QT_INSTALL_DIR}")
    #     set(QT_HOME_DIR "$ENV{QT_INSTALL_DIR}")
    # endif()

    # string(REPLACE "\n" "" QT_HOME_DIR "${QT_HOME_DIR}")
    # string(REPLACE "\"" "" QT_HOME_DIR "${QT_HOME_DIR}")
    set(Qt5_DIR "/Users/atulr/Project/nodegui/nodegui/miniqt/5.15.0/clang_64/lib/cmake/Qt5")
    find_package(Qt5 COMPONENTS Widgets Gui Core REQUIRED)
      
endmacro(AddQtSupport addonName)
