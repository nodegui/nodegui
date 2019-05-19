#ifndef EXTRAUTILS_WRAP_H
#define EXTRAUTILS_WRAP_H

#include <napi.h>

namespace extrautils {
    void noop();
    void throwTypeError(Napi::Env env, std::string errorMessage);
}

#endif