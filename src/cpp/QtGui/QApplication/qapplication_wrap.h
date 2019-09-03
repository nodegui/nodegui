#pragma once

#include <napi.h>
#include <stdlib.h>
#include <stdlib.h>
#include <QApplication>


class QApplicationWrap : public Napi::ObjectWrap<QApplicationWrap> {
private:
    std::unique_ptr<QApplication> instance;
    static int argc;
    static char** argv;

public:
    static Napi::FunctionReference constructor;
    static Napi::Object init(Napi::Env env, Napi::Object exports);
    QApplicationWrap(const Napi::CallbackInfo& info);
    ~QApplicationWrap();
    QApplication* getInternalInstance();
    // Wrapped methods
    Napi::Value processEvents(const Napi::CallbackInfo& info);
    Napi::Value exec(const Napi::CallbackInfo& info);
    Napi::Value quit(const Napi::CallbackInfo& info);
    Napi::Value exit(const Napi::CallbackInfo& info);
};

namespace StaticQApplicationWrapMethods {
     Napi::Value instance(const Napi::CallbackInfo& info);
}