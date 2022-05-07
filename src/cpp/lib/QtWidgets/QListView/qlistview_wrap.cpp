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
  QOBJECT_REGISTER_WRAPPER(QListView, QListViewWrap);
  return exports;
}

QListView* QListViewWrap::getInternalInstance() { return this->instance; }

QListViewWrap::~QListViewWrap() { extrautils::safeDelete(this->instance); }

QListViewWrap::QListViewWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QListViewWrap>(info) {
  Napi::Env env = info.Env();

  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NListView();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QListView>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NListView(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env, "NodeGui: QListViewWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), true);
}
