#pragma once
// From Qode headers
namespace qode {
    extern int qode_argc;
    extern char **qode_argv;
    typedef bool (*QodeInjectedRunLoopFunc)();
    extern QodeInjectedRunLoopFunc qode_run_uv_loop_once;
    extern QodeInjectedRunLoopFunc qode_run_gui_loop;
    extern void InjectQodeRunLoop(QodeInjectedRunLoopFunc runLoop);
    extern void InjectQodeRunUvLoopOnce(QodeInjectedRunLoopFunc runUvLoopOnce);
}  // namespace qode