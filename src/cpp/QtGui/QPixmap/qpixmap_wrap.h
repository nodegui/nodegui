#pragma once

#include <napi.h>
#include <stdlib.h>
#include <QPixmap>
#include "src/cpp/core/Component/component_macro.h"

class QPixmapWrap : public Napi::ObjectWrap<QPixmapWrap> {
private:
    std::unique_ptr<QPixmap> instance;
public:
    static Napi::FunctionReference constructor;
    static Napi::Object init(Napi::Env env, Napi::Object exports);
    QPixmapWrap(const Napi::CallbackInfo& info);
    ~QPixmapWrap();
    QPixmap* getInternalInstance();
    // Wrapped methods
    Napi::Value load(const Napi::CallbackInfo& info);
    Napi::Value scaled(const Napi::CallbackInfo& info);
};

