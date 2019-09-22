# This cmake file will be used in the plugins
set(PLUGIN_CMAKE_DIR "${CMAKE_CURRENT_LIST_DIR}")
set(NODEGUI_ROOT "${PLUGIN_CMAKE_DIR}/..")
set(NODEGUI_LIBRARY "${NODEGUI_ROOT}/build/Release/nodegui_core.node")

include("${PLUGIN_CMAKE_DIR}/common.cmake")
include("${PLUGIN_CMAKE_DIR}/qt.cmake")
include("${PLUGIN_CMAKE_DIR}/napi.cmake")

function(AddPluginConfig addonName)
    AddCommonConfig(${addonName})
    AddQtSupport(${addonName})
    AddNapiSupport(${addonName})

    target_link_libraries(${addonName} PRIVATE
        "${NODEGUI_LIBRARY}"
    )
    
    target_include_directories(${addonName} PRIVATE 
        "${CMAKE_JS_INC}" 
        "${NODEGUI_ROOT}"
        "${NODEGUI_ROOT}/src/cpp"
        "${NODEGUI_ROOT}/src/cpp/include"
        "${NODEGUI_ROOT}/src/cpp/include/deps"
        "${NODEGUI_ROOT}/src/cpp/include/nodegui"
    )

endfunction(AddPluginConfig addonName)

