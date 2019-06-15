#include "qpushbutton_wrap.h"
#include "src/cpp/QtGui/QWidget/qwidget_wrap.h"
#include "src/cpp/Extras/Utils/utils.h"

Napi::FunctionReference QPushButtonWrap::constructor;

Napi::Object QPushButtonWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QPushButton";
  Napi::Function func = DefineClass(env, CLASSNAME, {
    InstanceMethod("setText", &QPushButtonWrap::setText),
    InstanceMethod("setupSignalListeners",&QPushButtonWrap::setupSignalListeners),
    InstanceMethod("subscribeToEvent",&QPushButtonWrap::subscribeToEvent),
    QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QPushButtonWrap)
  });
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NPushButton* QPushButtonWrap::getInternalInstance() {
  return this->instance;
}

QPushButtonWrap::QPushButtonWrap(const Napi::CallbackInfo& info): Napi::ObjectWrap<QPushButtonWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  
  if(info.Length() == 1) {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      QWidgetWrap* parentWidgetWrap = Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
      this->instance = new NPushButton(parentWidgetWrap->getInternalInstance()); //this sets the parent to current widget
  }else if (info.Length() == 0){
    this->instance = new NPushButton();
  }else {
    extrautils::throwTypeError(env, "Wrong number of arguments");
  }
  // Adds measure function on yoga node so that widget size is calculated based on its text also.
  YGNodeSetMeasureFunc(this->instance->getFlexNode(), &extrautils::measureQtWidget);
}

QPushButtonWrap::~QPushButtonWrap() {
  delete this->instance;
}

Napi::Value QPushButtonWrap::setupSignalListeners(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    this->instance->emitOnNode = std::make_unique<ThreadSafeCallback>(info[0].As<Napi::Function>());
   // Qt Connects: Implement all signal connects here 
    QObject::connect(this->instance, &QPushButton::clicked, [=](bool checked) { 
        this->instance->emitOnNode->call([=](Napi::Env env, std::vector<napi_value>& args) {
            args = {  Napi::String::New(env, "clicked"), Napi::Value::From(env, checked) };
        });
    });
    QObject::connect(this->instance, &QPushButton::released, [=]() { 
        this->instance->emitOnNode->call([=](Napi::Env env, std::vector<napi_value>& args) {
            args = {  Napi::String::New(env, "released") };
        });
    });
    QObject::connect(this->instance, &QPushButton::pressed, [=]() { 
        this->instance->emitOnNode->call([=](Napi::Env env, std::vector<napi_value>& args) {
            args = {  Napi::String::New(env, "pressed") };
        });
    });
    QObject::connect(this->instance, &QPushButton::toggled, [=](bool checked) { 
        this->instance->emitOnNode->call([=](Napi::Env env, std::vector<napi_value>& args) {
            args = {  Napi::String::New(env, "toggled"), Napi::Value::From(env, checked) };
        });
    });
    return env.Null();
}

Napi::Value QPushButtonWrap::subscribeToEvent(const Napi::CallbackInfo& info){
    Napi::Env env = info.Env();
    Napi::String eventString = info[0].As<Napi::String>();
    this->instance->subscribeToEvent(eventString.Utf8Value());
    return env.Null();
}

Napi::Value QPushButtonWrap::setText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::String napiText = info[0].As<Napi::String>();
  std::string text = napiText.Utf8Value();
  this->instance->setText(text.c_str()); 
  return env.Null();
}

 