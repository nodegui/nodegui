{
    "targets": [
        {
            "target_name": "nodeguidep",
            'type': 'shared_library',
            "include_dirs": ['../deps/'],
            "sources": [
                "../deps/yoga/log.cpp",
                "../deps/yoga/Utils.cpp",
                "../deps/yoga/YGConfig.cpp",
                "../deps/yoga/YGEnums.cpp",
                "../deps/yoga/YGLayout.cpp",
                "../deps/yoga/YGNode.cpp",
                "../deps/yoga/YGNodePrint.cpp",
                "../deps/yoga/YGStyle.cpp",
                "../deps/yoga/YGValue.cpp",
                "../deps/yoga/Yoga.cpp",
                "../deps/yoga/event/event.cpp",
                "../deps/yoga/internal/experiments.cpp",
            ],
            'defines': [
                'SPDLOG_COMPILED_LIB'
            ],
            'conditions': [
                ['OS=="win"', {
                    'defines': [
                        'ENUM_BITFIELDS_NOT_SUPPORTED',  # Needed for yoga to work nicely on windows
                    ],
                }]
            ],
        }
    ]
}
