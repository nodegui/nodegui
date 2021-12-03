#include "QtWidgets/QFontDialog/qfontdialog_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QFontDialogWrap::constructor;

Napi::Object QFontDialogWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QFontDialog";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("selectedFont", &QFontDialogWrap::selectedFont),
       InstanceMethod("setOption", &QFontDialogWrap::setOption),
       InstanceMethod("testOption", &QFontDialogWrap::testOption),
       QDIALOG_WRAPPED_METHODS_EXPORT_DEFINE(QFontDialogWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NFontDialog* QFontDialogWrap::getInternalInstance() { return this->instance; }

QFontDialogWrap::~QFontDialogWrap() { extrautils::safeDelete(this->instance); }

QFontDialogWrap::QFontDialogWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QFontDialogWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    QWidget* parent = parentWidgetWrap->getInternalInstance();
    this->instance = new NFontDialog(parent);
  } else if (info.Length() == 0) {
    this->instance = new NFontDialog();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      false);
}

Napi::Value QFontDialogWrap::selectedFont(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QFont font = this->instance->selectedFont();
  auto instance = QFontWrap::constructor.New(
      {Napi::External<QFont>::New(env, new QFont(font))});
  return instance;
}

Napi::Value QFontDialogWrap::setOption(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int option = info[0].As<Napi::Number>().Int32Value();
  bool on = info[1].As<Napi::Boolean>().Value();
  this->instance->setOption(static_cast<QFontDialog::FontDialogOption>(option),
                            on);
  return env.Null();
}

Napi::Value QFontDialogWrap::testOption(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int option = info[0].As<Napi::Number>().Int32Value();
  bool on = this->instance->testOption(
      static_cast<QFontDialog::FontDialogOption>(option));
  return Napi::Boolean::New(env, on);
}
