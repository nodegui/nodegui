# Adds Qt support

function(AddQtSupport addonName)
    execute_process(COMMAND node -p "require('@nodegui/qode').qtHome"
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        OUTPUT_VARIABLE QT_HOME_DIR
    )
    string(REPLACE "\n" "" QT_HOME_DIR "${QT_HOME_DIR}")
    string(REPLACE "\"" "" QT_HOME_DIR "${QT_HOME_DIR}")

    set_property(TARGET Qt5::moc PROPERTY IMPORTED_LOCATION ${QT_HOME_DIR}/bin/moc)

    if (APPLE) 
        # createQtMacSymlinks()

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

