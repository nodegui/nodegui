#include "QtWidgets/QHeaderView/qheaderview_wrap.h"

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QHeaderViewWrap::constructor;

Napi::Object QHeaderViewWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QHeaderView";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {QABSTRACTITEMVIEW_WRAPPED_METHODS_EXPORT_DEFINE(QHeaderViewWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QHeaderView* QHeaderViewWrap::getInternalInstance() { return this->instance; }

QHeaderViewWrap::~QHeaderViewWrap() {
  if (!this->disableDeletion) {
    extrautils::safeDelete(this->instance);
  }
}

QHeaderViewWrap::QHeaderViewWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QHeaderViewWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int len = info.Length();

  this->disableDeletion = false;
  if (len == 1) {
    if (info[0].IsExternal()) {
      this->instance = info[0].As<Napi::External<QHeaderView>>().Data();
      this->disableDeletion = true;
    } else {
      int orientation = info[0].As<Napi::Number>().Int32Value();
      this->instance =
          new NHeaderView(static_cast<Qt::Orientation>(orientation));
    }
  } else {
    // len ==2
    int orientation = info[0].As<Napi::Number>().Int32Value();
    Napi::Object parentObject = info[1].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new NHeaderView(static_cast<Qt::Orientation>(orientation),
                                     parentWidgetWrap->getInternalInstance());
  }

  // this->instance can be either a `QHeaderView` or `NHeaderView`. Only
  // `NHeaderView` has the flex support available.
  this->rawData = nullptr;
  FlexItem* item = dynamic_cast<FlexItem*>(this->getInternalInstance());
  if (item) {
    this->rawData = extrautils::configureQWidget(this->getInternalInstance(),
                                                 item->getFlexNode(), false);
  }
}
