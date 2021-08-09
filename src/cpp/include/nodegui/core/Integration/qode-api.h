// Temporary fix till we figure out how to get this working without exe symbol exports
#ifdef _WIN32
#define QODE_FIX static
#else
#define QODE_FIX extern
#endif

#pragma once
// From Qode headers
namespace qode {
QODE_FIX int qode_argc;
QODE_FIX char **qode_argv;
typedef int (*QodeCustomRunLoopFunc)();
extern void InjectCustomRunLoop(
    QodeCustomRunLoopFunc customRunLoop);
}  // namespace qode