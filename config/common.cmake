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