#include "QtWidgets/QColorDialog/qcolordialog_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtGui/QColor/qcolor_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QColorDialogWrap::constructor;

Napi::Object QColorDialogWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QColorDialog";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("selectedColor", &QColorDialogWrap::selectedColor),
       InstanceMethod("setOption", &QColorDialogWrap::setOption),
       InstanceMethod("testOption", &QColorDialogWrap::testOption),
       StaticMethod("customColor", &StaticQColorDialogWrapMethods::customColor),
       StaticMethod("customCount", &StaticQColorDialogWrapMethods::customCount),
       StaticMethod("setCustomColor",
                    &StaticQColorDialogWrapMethods::setCustomColor),
       StaticMethod("setStandardColor",
                    &StaticQColorDialogWrapMethods::setStandardColor),
       StaticMethod("standardColor",
                    &StaticQColorDialogWrapMethods::standardColor),
       QDIALOG_WRAPPED_METHODS_EXPORT_DEFINE(QColorDialogWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QColorDialog, QColorDialogWrap);
  return exports;
}

QColorDialog* QColorDialogWrap::getInternalInstance() { return this->instance; }

QColorDialogWrap::~QColorDialogWrap() {
  extrautils::safeDelete(this->instance);
}

QColorDialogWrap::QColorDialogWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QColorDialogWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new NColorDialog();
  } else if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QColorDialog>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance =
          new NColorDialog(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env,
        "NodeGui: QColorDialogWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData =
      extrautils::configureQWidget(this->getInternalInstance(), false);
}

Napi::Value QColorDialogWrap::selectedColor(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QColor color = this->instance->selectedColor();
  auto instance = QColorWrap::constructor.New(
      {Napi::External<QColor>::New(env, new QColor(color))});
  return instance;
}

Napi::Value QColorDialogWrap::setOption(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int option = info[0].As<Napi::Number>().Int32Value();
  bool on = info[1].As<Napi::Boolean>().Value();
  this->instance->setOption(
      static_cast<QColorDialog::ColorDialogOption>(option), on);
  return env.Null();
}

Napi::Value QColorDialogWrap::testOption(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int option = info[0].As<Napi::Number>().Int32Value();
  bool on = this->instance->testOption(
      static_cast<QColorDialog::ColorDialogOption>(option));
  return Napi::Boolean::New(env, on);
}

Napi::Value QColorDialogWrap::accept(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->accept();
  return env.Null();
}

Napi::Value QColorDialogWrap::done(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::TypeError::New(
      env, "NodeGui: QColorDialog: done() is protected and can't be called.")
      .ThrowAsJavaScriptException();
  return env.Null();
}

Napi::Value StaticQColorDialogWrapMethods::customColor(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  QColor color = QColorDialog::customColor(index);
  auto instance = QColorWrap::constructor.New(
      {Napi::External<QColor>::New(env, new QColor(color))});
  return instance;
}

Napi::Value StaticQColorDialogWrapMethods::customCount(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int count = QColorDialog::customCount();
  return Napi::Number::New(env, count);
}

Napi::Value StaticQColorDialogWrapMethods::setCustomColor(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  Napi::Object colorObject = info[1].As<Napi::Object>();
  QColorWrap* colorWrap = Napi::ObjectWrap<QColorWrap>::Unwrap(colorObject);
  QColorDialog::setCustomColor(index, *colorWrap->getInternalInstance());
  return env.Null();
}

Napi::Value StaticQColorDialogWrapMethods::setStandardColor(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  Napi::Object colorObject = info[1].As<Napi::Object>();
  QColorWrap* colorWrap = Napi::ObjectWrap<QColorWrap>::Unwrap(colorObject);
  QColorDialog::setStandardColor(index, *colorWrap->getInternalInstance());
  return env.Null();
}

Napi::Value StaticQColorDialogWrapMethods::standardColor(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  QColor color = QColorDialog::standardColor(index);
  auto instance = QColorWrap::constructor.New(
      {Napi::External<QColor>::New(env, new QColor(color))});
  return instance;
}
