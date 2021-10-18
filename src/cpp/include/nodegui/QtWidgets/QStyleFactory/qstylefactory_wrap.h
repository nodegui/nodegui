#pragma once

#include <napi.h>

namespace QStyleFactoryWrap {
DLL_EXPORT Napi::Object create(Napi::Env env, Napi::Object exports);
DLL_EXPORT Napi::Object keys(Napi::Env env, Napi::Object exports);
DLL_EXPORT Napi::Object init(Napi::Env env, Napi::Object exports);
}  // namespace QStyleFactoryWrap
