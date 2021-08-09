# Adds Qode shared binary support

set(QODE_CONFIG_FILE @nodegui/qode/src/config.js)

macro(AddQodeSupport addonName)   
    if (WIN32)

        execute_process(COMMAND node -p "require('${QODE_CONFIG_FILE}').extractDir"
            WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
            OUTPUT_VARIABLE QODE_BINARY_DIR
        )

        string(REPLACE "\n" "" QODE_BINARY_DIR "${QODE_BINARY_DIR}")
        string(REPLACE "\"" "" QODE_BINARY_DIR "${QODE_BINARY_DIR}")

        message(STATUS "Using Qode installation for ${addonName} QODE_BINARY_DIR:${QODE_BINARY_DIR}")
        
        target_link_libraries(${CORE_WIDGETS_ADDON} PRIVATE 
            "${QODE_BINARY_DIR}\\node.lib"      
        )

    endif() 
      
endmacro(AddQodeSupport addonName)
