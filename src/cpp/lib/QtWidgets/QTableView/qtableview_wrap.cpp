#include "QtWidgets/QTableView/qtableview_wrap.h"

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QTableViewWrap::constructor;

Napi::Object QTableViewWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QTableView";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {QTABLEVIEW_WRAPPED_METHODS_EXPORT_DEFINE(QTableViewWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NTableView* QTableViewWrap::getInternalInstance() { return this->instance; }

QTableViewWrap::~QTableViewWrap() {
  if (!this->disableDeletion) {
    extrautils::safeDelete(this->instance);
  }
}

QTableViewWrap::QTableViewWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QTableViewWrap>(info) {
  Napi::Env env = info.Env();
  this->disableDeletion = false;
  if (info.Length() > 0 && info[0].IsExternal()) {
    // --- if external ---
    this->instance = info[0].As<Napi::External<NTableView>>().Data();
    if (info.Length() == 2) {
      this->disableDeletion = info[1].As<Napi::Boolean>().Value();
    }
  } else {
    // --- regular cases ---
    if (info.Length() == 1) {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NTableView(parentWidgetWrap->getInternalInstance());
    } else if (info.Length() == 0) {
      this->instance = new NTableView();
    } else {
      Napi::TypeError::New(env, "Wrong number of arguments")
          .ThrowAsJavaScriptException();
    }
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      false);
}
