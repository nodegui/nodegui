#include "qicon_wrap.h"
#include "src/cpp/Extras/Utils/nutils.h"
#include "deps/spdlog/spdlog.h"

Napi::FunctionReference QIconWrap::constructor;

Napi::Object QIconWrap::init(Napi::Env env, Napi::Object exports)
{
    Napi::HandleScope scope(env);
    char CLASSNAME[] = "QIcon";
    Napi::Function func = DefineClass(env, CLASSNAME, {
        COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE
    });
    constructor = Napi::Persistent(func);
    exports.Set(CLASSNAME, func);
    return exports;
}

QIconWrap::QIconWrap(const Napi::CallbackInfo &info) : Napi::ObjectWrap<QIconWrap>(info)
{
    Napi::Env env = info.Env();
    Napi::HandleScope scope(env);
    if (info.Length() == 1)
    {
        Napi::String url = info[0].As<Napi::String>();
        QString imageUrl = QString::fromUtf8(url.Utf8Value().c_str());
        this->instance = std::make_unique<QIcon>(imageUrl);
    }
    else if (info.Length() == 0)
    {
        this->instance = std::make_unique<QIcon>();
    }
    else
    {
        Napi::TypeError::New(env, "Wrong number of arguments").ThrowAsJavaScriptException();
    }
}

QIconWrap::~QIconWrap()
{
    this->instance.reset();
}

QIcon *QIconWrap::getInternalInstance()
{
    return this->instance.get();
}
