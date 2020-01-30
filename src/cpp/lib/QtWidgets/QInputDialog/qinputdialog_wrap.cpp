#include "QtWidgets/QInputDialog/qinputdialog_wrap.h"

#include <QDebug>
#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtCore/QObject/qobject_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QInputDialogWrap::constructor;

Napi::Object QInputDialogWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QInputDialog";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {QDIALOG_WRAPPED_METHODS_EXPORT_DEFINE(QInputDialogWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NInputDialog* QInputDialogWrap::getInternalInstance() { return this->instance; }
QInputDialogWrap::~QInputDialogWrap() {
  extrautils::safeDelete(this->instance);
}

QInputDialogWrap::QInputDialogWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QInputDialogWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    this->instance = new NInputDialog(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NInputDialog();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      false);
}
