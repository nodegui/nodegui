#include "QtWidgets/QShortcut/qshortcut_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtGui/QKeySequence/qkeysequence_wrap.h"
#include "QtWidgets/QMenu/qmenu_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QShortcutWrap::constructor;

Napi::Object QShortcutWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QShortcut";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setEnabled", &QShortcutWrap::setEnabled),
       InstanceMethod("setAutoRepeat", &QShortcutWrap::setAutoRepeat),
       InstanceMethod("setKey", &QShortcutWrap::setKey),
       InstanceMethod("setContext", &QShortcutWrap::setContext),
       QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QShortcutWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QShortcut, QShortcutWrap);
  return exports;
}

QShortcut* QShortcutWrap::getInternalInstance() { return this->instance; }

QShortcutWrap::QShortcutWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QShortcutWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();

  // Note: QShortcut object always need a parent or instance to wrap

  if (argCount == 1) {
    if (info[0].IsExternal()) {
      // --- Wrap a given C++ instance
      this->instance = info[0].As<Napi::External<QShortcut>>().Data();
    } else {
      // --- Construct a new instance and pass a parent
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NShortcut(parentWidgetWrap->getInternalInstance());
    }
  } else {
    Napi::TypeError::New(
        env, "NodeGui: QShortcutWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQObject(this->getInternalInstance());
}

QShortcutWrap::~QShortcutWrap() { extrautils::safeDelete(this->instance); }

Napi::Value QShortcutWrap::setEnabled(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Boolean enabled = info[0].As<Napi::Boolean>();
  this->instance->setEnabled(enabled.Value());
  return env.Null();
}

Napi::Value QShortcutWrap::setAutoRepeat(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Boolean enabled = info[0].As<Napi::Boolean>();
  this->instance->setAutoRepeat(enabled.Value());
  return env.Null();
}

Napi::Value QShortcutWrap::setKey(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object shortcutSequence = info[0].As<Napi::Object>();
  QKeySequenceWrap* keysequence =
      Napi::ObjectWrap<QKeySequenceWrap>::Unwrap(shortcutSequence);
  this->instance->setKey(*keysequence->getInternalInstance());
  return env.Null();
}

Napi::Value QShortcutWrap::setContext(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Number shortcutContextEnum = info[0].As<Napi::Number>();
  int shortCutContext = shortcutContextEnum.Int32Value();
  this->instance->setContext(static_cast<Qt::ShortcutContext>(shortCutContext));
  return env.Null();
}
