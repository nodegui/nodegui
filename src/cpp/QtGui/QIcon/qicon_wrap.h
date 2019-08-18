#pragma once

#include <napi.h>
#include <QIcon>
#include "src/cpp/core/Component/component_macro.h"

class QIconWrap : public Napi::ObjectWrap<QIconWrap>
{
private:
    QIcon *instance;

public:
    static Napi::FunctionReference constructor;
    static Napi::Object init(Napi::Env env, Napi::Object exports);
    QIconWrap(const Napi::CallbackInfo &info);
    ~QIconWrap();
    QIcon *getInternalInstance();
    // Wrapped methods
};
