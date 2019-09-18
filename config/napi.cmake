# NAPI stuff

function(AddNapiSupport addonName)
    execute_process(COMMAND node -p "require('node-addon-api').include"
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        OUTPUT_VARIABLE NODE_ADDON_API_DIR
    )
    string(REPLACE "\n" "" NODE_ADDON_API_DIR ${NODE_ADDON_API_DIR})
    string(REPLACE "\"" "" NODE_ADDON_API_DIR ${NODE_ADDON_API_DIR})

    set_target_properties(${addonName} PROPERTIES PREFIX "" SUFFIX ".node")

    target_include_directories(${addonName} PRIVATE 
        "${NODE_ADDON_API_DIR}"
    ) 
    target_compile_definitions(${addonName} PRIVATE
        NAPI_CPP_EXCEPTIONS
    )

    if (WIN32) 
        target_compile_definitions(${addonName} PRIVATE
            _HAS_EXCEPTIONS=1
        )
    endif()
endfunction(AddNapiSupport addonName)

 