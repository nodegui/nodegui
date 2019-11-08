
#include "core/FlexLayout/flexlayout_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference FlexLayoutWrap::constructor;

Napi::Object FlexLayoutWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "FlexLayout";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("addWidget", &FlexLayoutWrap::addWidget),
       InstanceMethod("insertChildBefore", &FlexLayoutWrap::insertChildBefore),
       InstanceMethod("removeWidget", &FlexLayoutWrap::removeWidget),
       InstanceMethod("setFlexNode", &FlexLayoutWrap::setFlexNode),
       QLAYOUT_WRAPPED_METHODS_EXPORT_DEFINE(FlexLayoutWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

FlexLayout* FlexLayoutWrap::getInternalInstance() { return this->instance; }

FlexLayoutWrap::~FlexLayoutWrap() { extrautils::safeDelete(this->instance); }

FlexLayoutWrap::FlexLayoutWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<FlexLayoutWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new FlexLayout(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new FlexLayout();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
}

Napi::Value FlexLayoutWrap::addWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object qwidgetObject = info[0].As<Napi::Object>();
  Napi::External<YGNode> childFlexNodeObject =
      info[1].As<Napi::External<YGNode>>();
  QWidgetWrap* widget = Napi::ObjectWrap<QWidgetWrap>::Unwrap(qwidgetObject);
  YGNodeRef childNodeRef = childFlexNodeObject.Data();
  this->instance->addWidget(widget->getInternalInstance(), childNodeRef);

  return env.Null();
}

Napi::Value FlexLayoutWrap::insertChildBefore(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object qwidgetObject = info[0].As<Napi::Object>();
  Napi::External<YGNode> beforeChildFlexNodeObject =
      info[1].As<Napi::External<YGNode>>();
  Napi::External<YGNode> childFlexNodeObject =
      info[2].As<Napi::External<YGNode>>();
  QWidgetWrap* widget = Napi::ObjectWrap<QWidgetWrap>::Unwrap(qwidgetObject);
  YGNodeRef childNodeRef = childFlexNodeObject.Data();
  YGNodeRef beforeChildNodeRef = beforeChildFlexNodeObject.Data();

  this->instance->insertChildBefore(widget->getInternalInstance(),
                                    beforeChildNodeRef, childNodeRef);

  return env.Null();
}

Napi::Value FlexLayoutWrap::removeWidget(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object qwidgetObject = info[0].As<Napi::Object>();
  Napi::External<YGNode> childFlexNodeObject =
      info[1].As<Napi::External<YGNode>>();
  QWidgetWrap* widget = Napi::ObjectWrap<QWidgetWrap>::Unwrap(qwidgetObject);
  YGNodeRef childNodeRef = childFlexNodeObject.Data();
  this->instance->removeWidget(widget->getInternalInstance(), childNodeRef);

  return env.Null();
}

Napi::Value FlexLayoutWrap::setFlexNode(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::External<YGNode> flexNodeObject = info[0].As<Napi::External<YGNode>>();
  YGNodeRef flexNodeRef = flexNodeObject.Data();

  this->instance->setFlexNode(flexNodeRef);

  return env.Null();
}
