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
  QOBJECT_REGISTER_WRAPPER(QTableView, QTableViewWrap);
  return exports;
}

QTableView* QTableViewWrap::getInternalInstance() { return this->instance; }

QTableViewWrap::~QTableViewWrap() { extrautils::safeDelete(this->instance); }

QTableViewWrap::QTableViewWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QTableViewWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NTableView();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QTableView>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NTableView(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env,
        "NodeGui: QTableViewWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), false);
}
