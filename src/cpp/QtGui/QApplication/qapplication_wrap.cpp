#include "qapplication_wrap.h"
#include "src/cpp/core/Component/component_macro.h"

Napi::FunctionReference QApplicationWrap::constructor;
int QApplicationWrap::argc = 0;
char** QApplicationWrap::argv = NULL;

Napi::Object QApplicationWrap::init(Napi::Env env, Napi::Object exports)
{
    Napi::HandleScope scope(env);
    char CLASSNAME[] = "QApplication";
    Napi::Function func = DefineClass(env, CLASSNAME, {
        InstanceMethod("processEvents", &QApplicationWrap::processEvents),
        InstanceMethod("exec", &QApplicationWrap::exec),
        COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE
    });
    constructor = Napi::Persistent(func);
    exports.Set(CLASSNAME, func);
    return exports;
}

QApplicationWrap::QApplicationWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QApplicationWrap>(info)
{
    Napi::Env env = info.Env();
    Napi::HandleScope scope(env);
    this->instance = new QApplication(this->argc, this->argv);
}

QApplicationWrap::~QApplicationWrap()
{
    delete this->instance;
}

QApplication* QApplicationWrap::getInternalInstance()
{
    return this->instance;
}

Napi::Value QApplicationWrap::processEvents(const Napi::CallbackInfo& info)
{
    Napi::Env env = info.Env();
    Napi::HandleScope scope(env);
    this->instance->processEvents();
    return env.Null();
}

Napi::Value QApplicationWrap::exec(const Napi::CallbackInfo& info)
{
    Napi::Env env = info.Env();
    Napi::HandleScope scope(env);
    this->instance->exec();
    return env.Null();
}
