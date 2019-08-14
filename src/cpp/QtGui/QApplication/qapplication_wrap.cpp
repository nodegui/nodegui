#include "qapplication_wrap.h"
#include "src/cpp/core/Component/component_macro.h"
#include "src/cpp/Extras/Utils/nutils.h"

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
        InstanceMethod("quit", &QApplicationWrap::quit),
        StaticMethod("instance", &StaticQApplicationWrapMethods::instance),
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
    if(info.Length() == 1) {
        this->instance = info[0].As<Napi::External<QApplication>>().Data();
    } else if (info.Length() == 0){
        this->instance = new QApplication(this->argc, this->argv);
    } else {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
    }
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
    int exitCode = this->instance->exec();
    return Napi::Number::New(env, exitCode);
}

Napi::Value QApplicationWrap::quit(const Napi::CallbackInfo& info)
{
    Napi::Env env = info.Env();
    Napi::HandleScope scope(env);
    this->instance->quit();
    return env.Null();
}

Napi::Value QApplicationWrap::exit(const Napi::CallbackInfo& info)
{
    Napi::Env env = info.Env();
    Napi::HandleScope scope(env);
    Napi::Number exitCode = info[0].As<Napi::Number>();
    this->instance->exit(exitCode.Int32Value());
    return env.Null();
}

Napi::Value StaticQApplicationWrapMethods::instance(const Napi::CallbackInfo& info)
{
    Napi::Env env = info.Env();
    Napi::HandleScope scope(env);
    QApplication* app = static_cast<QApplication *>(QCoreApplication::instance());
    Napi::Object instance = QApplicationWrap::constructor.New({ Napi::External<QApplication>::New(env, app) });
    return instance;
}
