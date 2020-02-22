#pragma once
// From Qode headers
namespace qode {
    extern int qode_argc;
    extern char **qode_argv;
    typedef int (*QodeCustomRunLoopFunc)();
    extern void InjectCustomRunLoop(QodeCustomRunLoopFunc customRunLoop);
}  // namespace qode