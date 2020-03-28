#include "QtWidgets/QListView/qlistview_wrap.h"

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QListViewWrap::constructor;

Napi::Object QListViewWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QListView";
  Napi::Function func = DefineClass(
      env, CLASSNAME, {QLISTVIEW_WRAPPED_METHODS_EXPORT_DEFINE(QListViewWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NListView* QListViewWrap::getInternalInstance() { return this->instance; }

QListViewWrap::~QListViewWrap() {
  if (!this->disableDeletion) {
    extrautils::safeDelete(this->instance);
  }
}

QListViewWrap::QListViewWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QListViewWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() > 0 && info[0].IsExternal()) {
    // --- if external ---
    this->instance = info[0].As<Napi::External<NListView>>().Data();
    if (info.Length() == 2) {
      this->disableDeletion = info[1].As<Napi::Boolean>().Value();
    }
  } else {
    // --- regular cases ---
    if (info.Length() == 1) {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NListView(parentWidgetWrap->getInternalInstance());
    } else if (info.Length() == 0) {
      this->instance = new NListView();
    } else {
      Napi::TypeError::New(env, "Wrong number of arguments")
          .ThrowAsJavaScriptException();
    }
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}
