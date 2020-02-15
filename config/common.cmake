set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_program(CCACHE_PROGRAM ccache)
if(CCACHE_PROGRAM)
    set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE "${CCACHE_PROGRAM}")
endif()

set(CMAKE_OSX_DEPLOYMENT_TARGET "10.9" CACHE STRING "Minimum OS X deployment version")

function(AddCommonConfig addonName)
    target_compile_features(${addonName} PRIVATE
        cxx_inheriting_constructors
        cxx_lambdas
        cxx_auto_type
        cxx_variadic_templates
        cxx_variable_templates
    )
    
    if(napi_build_version)
        target_compile_definitions(${addonName} PRIVATE
            NAPI_VERSION=${napi_build_version}
        )
    endif()
    
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