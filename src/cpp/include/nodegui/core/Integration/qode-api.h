#ifdef _WIN32
#define QODE_IMPORT __declspec(dllimport)
#else
#define QODE_IMPORT
#endif

#pragma once
// From Qode headers
namespace qode {
QODE_IMPORT extern int qode_argc;
QODE_IMPORT extern char **qode_argv;
QODE_IMPORT typedef int (*QodeCustomRunLoopFunc)();
QODE_IMPORT extern void InjectCustomRunLoop(
    QodeCustomRunLoopFunc customRunLoop);
}  // namespace qode