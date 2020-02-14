#pragma once

// From Qode headers
namespace qode {
    typedef bool (*QodeInjectedRunLoopFunc)();
    extern QodeInjectedRunLoopFunc qode_run_loop;
    extern int qode_argc;
    extern char **qode_argv;
    extern void InjectQodeRunLoop(QodeInjectedRunLoopFunc runLoop);
}

namespace qodeIntegration {
    void integrate();
}