#include "flexlayout_wrap.h"
#include "flexnode_wrap.h"
#include "src/cpp/QtGui/QWidget/qwidget_wrap.h"
#include "src/cpp/Extras/Utils/utils.h"
#include <QDebug>

Napi::FunctionReference FlexLayoutWrap::constructor;

Napi::Object FlexLayoutWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "FlexLayout";
  Napi::Function func = DefineClass(env, CLASSNAME, {
    InstanceMethod("addWidget", &FlexLayoutWrap::addWidget),
    // InstanceMethod("setFlexNode", &FlexLayoutWrap::setFlexNode)
  });
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

FlexLayout* FlexLayoutWrap::getInternalInstance() {
  return this->instance;
}

FlexLayoutWrap::FlexLayoutWrap(const Napi::CallbackInfo& info): Napi::ObjectWrap<FlexLayoutWrap>(info)  {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if(info.Length() == 2) {
    Napi::Object object_parent = info[0].As<Napi::Object>();
    QWidgetWrap* w_parent = Napi::ObjectWrap<QWidgetWrap>::Unwrap(object_parent);
    this->instance = new FlexLayout(w_parent->getInternalInstance());
  } else if(info.Length() == 1) {
    Napi::Object object_parent = info[0].As<Napi::Object>();
    QWidgetWrap* w_parent = Napi::ObjectWrap<QWidgetWrap>::Unwrap(object_parent);
    this->instance = new FlexLayout(w_parent->getInternalInstance()); //this sets the parent to current widget
  }else if (info.Length() == 0){
    this->instance = new FlexLayout();
  }else {
    extrautils::throwTypeError(env, "Wrong number of arguments");
  }
}

FlexLayoutWrap::~FlexLayoutWrap() {
  delete this->instance;
}

Napi::Value FlexLayoutWrap::addWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object qwidgetObject = info[0].As<Napi::Object>();
  Napi::Object childFlexNodeObject = info[1].As<Napi::Object>();
  QWidgetWrap* widget = Napi::ObjectWrap<QWidgetWrap>::Unwrap(qwidgetObject);
  FlexNodeWrap* childFlexNodeWrap = Napi::ObjectWrap<FlexNodeWrap>::Unwrap(childFlexNodeObject);
  this->instance->addWidget(widget->getInternalInstance(),childFlexNodeWrap->getInternalInstance());
  
  return env.Null();
}

