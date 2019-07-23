{
    "includes": [],
    "target_defaults": {
        "include_dirs": ['../deps/'],
        "cflags": ['-DSPDLOG_COMPILED_LIB'],
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
             "../deps/yoga/internal/experiments.cpp"
        ],
    }
}
