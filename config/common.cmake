function(AddCommonConfig addonName)
    target_compile_definitions(${addonName} PRIVATE
        SPDLOG_COMPILED_LIB
    )
    target_compile_features(${addonName} PRIVATE
        cxx_std_14
    )
    if (WIN32) 
        target_compile_definitions(${addonName} PRIVATE
            ENUM_BITFIELDS_NOT_SUPPORTED
        )
    endif()
endfunction(AddCommonConfig addonName)

function(GetModuleVersion moduleName packageJsonDir)
    execute_process(COMMAND node -p "require('${packageJsonDir}/package.json').version"
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR}
        OUTPUT_VARIABLE packageJsonVersion
    )
    string(REPLACE "\n" "" packageJsonVersion "${packageJsonVersion}")
    string(REPLACE "\"" "" packageJsonVersion "${packageJsonVersion}")

    set("${moduleName}_VERSION" "${packageJsonVersion}" PARENT_SCOPE)
endfunction(GetModuleVersion moduleName packageJsonDir)