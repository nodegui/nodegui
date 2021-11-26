#include "core/WrapperCache/wrappercache.h"

#include "Extras/Utils/nutils.h"

DLL_EXPORT WrapperCache WrapperCache::instance;

Napi::FunctionReference WrapperCache::destroyedCallback;
