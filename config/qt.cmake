# Adds Qt support
# make sure you include this at the top of whichever Cmakelist file you are going to use.
# Need for automatic moc. Moc executable path is set in qt.cmake
set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(QT_VERSION_MAJOR 5)
set(QT_VERSION_MINOR 13)
add_executable(Qt5::moc IMPORTED)

function(AddQtSupport addonName)
    execute_process(COMMAND node -p "require('@nodegui/qode').qtHome"
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        OUTPUT_VARIABLE QT_HOME_DIR
    )
    string(REPLACE "\n" "" QT_HOME_DIR "${QT_HOME_DIR}")
    string(REPLACE "\"" "" QT_HOME_DIR "${QT_HOME_DIR}")
    if (APPLE) 
        # createQtMacSymlinks()
        set(CUSTOM_QT_MOC_PATH "${QT_HOME_DIR}/bin/moc")

        target_include_directories(${addonName} PRIVATE
            "${QT_HOME_DIR}/include"
            "${QT_HOME_DIR}/lib/QtCore.framework/Versions/5/Headers"
            "${QT_HOME_DIR}/lib/QtGui.framework/Versions/5/Headers"
            "${QT_HOME_DIR}/lib/QtWidgets.framework/Versions/5/Headers"
        )
        target_link_libraries(${addonName} PRIVATE
            "${QT_HOME_DIR}/lib/QtCore.framework/Versions/5/QtCore"
            "${QT_HOME_DIR}/lib/QtGui.framework/Versions/5/QtGui"
            "${QT_HOME_DIR}/lib/QtWidgets.framework/Versions/5/QtWidgets"
        )
    endif()

    if (WIN32)
        set(CUSTOM_QT_MOC_PATH "${QT_HOME_DIR}\\bin\\moc.exe")
       
        target_include_directories(${addonName} PRIVATE
            "${QT_HOME_DIR}\\include"
            "${QT_HOME_DIR}\\include\\QtCore"
            "${QT_HOME_DIR}\\include\\QtGui"
            "${QT_HOME_DIR}\\include\\QtWidgets"
        )
        target_link_libraries(${addonName} PRIVATE
            "${QT_HOME_DIR}\\lib\\Qt5Core.lib"
            "${QT_HOME_DIR}\\lib\\Qt5Gui.lib"
            "${QT_HOME_DIR}\\lib\\Qt5Widgets.lib"
        )
    endif()

    if(UNIX AND NOT APPLE)
        set(LINUX TRUE)
    endif()

    if(LINUX)
        set(CUSTOM_QT_MOC_PATH "${QT_HOME_DIR}/bin/moc")
        target_include_directories(${addonName} PRIVATE
            "${QT_HOME_DIR}/include"
            "${QT_HOME_DIR}/include/QtCore"
            "${QT_HOME_DIR}/include/QtGui"
            "${QT_HOME_DIR}/include/QtWidgets"
        )
        target_link_libraries(${addonName} PRIVATE
            "${QT_HOME_DIR}/lib/libQt5Core.so"
            "${QT_HOME_DIR}/lib/libQt5Gui.so"
            "${QT_HOME_DIR}/lib/libQt5Widgets.so"
        )
    endif()    

    # set custom moc executable location
    set_target_properties(Qt5::moc PROPERTIES IMPORTED_LOCATION "${CUSTOM_QT_MOC_PATH}")
    
endfunction(AddQtSupport addonName)

# function(createQtMacSymlinks)
#     message("Creating qt symlinks")
#     execute_process(
#         COMMAND 'mkdir -p ${QT_HOME_DIR}/include'
#         COMMAND 'ln -sfn ${QT_HOME_DIR}/lib/QtCore.framework/Versions/5/Headers ${QT_HOME_DIR}/include/QtCore'
#         COMMAND 'ln -sfn ${QT_HOME_DIR}/lib/QtGui.framework/Versions/5/Headers ${QT_HOME_DIR}/include/QtGui'
#         COMMAND 'ln -sfn ${QT_HOME_DIR}/lib/QtWidgets.framework/Versions/5/Headers ${QT_HOME_DIR}/include/QtWidgets'
#         WORKING_DIRECTORY ${QT_HOME_DIR}
#     )
# endfunction()

