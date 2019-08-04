#include "qpixmap_wrap.h"
#include "src/cpp/Extras/Utils/nutils.h"
#include "deps/spdlog/spdlog.h"

Napi::FunctionReference QPixmapWrap::constructor;

Napi::Object QPixmapWrap::init(Napi::Env env, Napi::Object exports)
{
    Napi::HandleScope scope(env);
    char CLASSNAME[] = "QPixmap";
    Napi::Function func = DefineClass(env, CLASSNAME,{
        InstanceMethod("load", &QPixmapWrap::load),
        InstanceMethod("scaled",&QPixmapWrap::scaled),
        COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE
    });
    constructor = Napi::Persistent(func);
    exports.Set(CLASSNAME, func);
    return exports;
}

QPixmapWrap::QPixmapWrap(const Napi::CallbackInfo& info) : Napi::ObjectWrap<QPixmapWrap>(info)
{
    Napi::Env env = info.Env();
    Napi::HandleScope scope(env);
    if(info.Length() == 1) {
        if(info[0].IsExternal()){
            this->instance = info[0].As<Napi::External<QPixmap>>().Data();
        } else {
            Napi::String url = info[0].As<Napi::String>();
            QString imageUrl = QString::fromUtf8(url.Utf8Value().c_str());
            this->instance = new QPixmap(imageUrl);
        }
    }else if (info.Length() == 0){
        this->instance = new QPixmap();
    }else {
        extrautils::throwTypeError(env, "Wrong number of arguments");
    }
}

QPixmapWrap::~QPixmapWrap()
{
    delete this->instance;
}

QPixmap* QPixmapWrap::getInternalInstance()
{
    return this->instance;
}

Napi::Value QPixmapWrap::load(const Napi::CallbackInfo& info)
{
    Napi::Env env = info.Env();
    Napi::HandleScope scope(env);
    bool loadSuccess = false;
    if(info.Length() == 1) {
      Napi::String url = info[0].As<Napi::String>();
      QString imageUrl = QString::fromUtf8(url.Utf8Value().c_str());
      loadSuccess = this->instance->load(imageUrl);
    }else {
        extrautils::throwTypeError(env, "Wrong number of arguments");
    }
    return Napi::Boolean::New(env, loadSuccess);
}

Napi::Value QPixmapWrap::scaled(const Napi::CallbackInfo& info) 
{
    Napi::Env env = info.Env();
    Napi::HandleScope scope(env);
    Napi::Number width = info[0].As<Napi::Number>();
    Napi::Number height = info[1].As<Napi::Number>();

    QPixmap* updatedPixMap = new QPixmap(this->instance->scaled(width, height));
    auto instance = QPixmapWrap::constructor.New({ Napi::External<QPixmap>::New(env, updatedPixMap) });
    return instance;
}
