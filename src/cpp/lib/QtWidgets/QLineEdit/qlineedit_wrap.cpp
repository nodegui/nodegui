
#include "QtWidgets/QLineEdit/qlineedit_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QLineEditWrap::constructor;

Napi::Object QLineEditWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QLineEdit";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("backspace", &QLineEditWrap::backspace),
       InstanceMethod("cursorBackward", &QLineEditWrap::cursorBackward),
       InstanceMethod("cursorForward", &QLineEditWrap::cursorForward),
       InstanceMethod("cursorPositionAt", &QLineEditWrap::cursorPositionAt),
       InstanceMethod("cursorWordBackward", &QLineEditWrap::cursorWordBackward),
       InstanceMethod("cursorWordForward", &QLineEditWrap::cursorWordForward),
       InstanceMethod("del", &QLineEditWrap::del),
       InstanceMethod("deselect", &QLineEditWrap::deselect),
       InstanceMethod("end", &QLineEditWrap::end),
       InstanceMethod("home", &QLineEditWrap::home),
       InstanceMethod("insert", &QLineEditWrap::insert),
       InstanceMethod("selectionEnd", &QLineEditWrap::selectionEnd),
       InstanceMethod("selectionLength", &QLineEditWrap::selectionLength),
       InstanceMethod("selectionStart", &QLineEditWrap::selectionStart),
       InstanceMethod("setSelection", &QLineEditWrap::setSelection),
       InstanceMethod("setTextMargins", &QLineEditWrap::setTextMargins),
       InstanceMethod("clear", &QLineEditWrap::clear),
       InstanceMethod("copy", &QLineEditWrap::copy),
       InstanceMethod("cut", &QLineEditWrap::cut),
       InstanceMethod("paste", &QLineEditWrap::paste),
       InstanceMethod("redo", &QLineEditWrap::redo),
       InstanceMethod("selectAll", &QLineEditWrap::selectAll),
       InstanceMethod("undo", &QLineEditWrap::undo),

       QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QLineEditWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NLineEdit* QLineEditWrap::getInternalInstance() { return this->instance; }

QLineEditWrap::QLineEditWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QLineEditWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new NLineEdit(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NLineEdit();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

QLineEditWrap::~QLineEditWrap() { extrautils::safeDelete(this->instance); }

Napi::Value QLineEditWrap::backspace(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->backspace();
  return env.Null();
}

Napi::Value QLineEditWrap::cursorBackward(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool mark = info[0].As<Napi::Boolean>().Value();
  int steps = info[1].As<Napi::Number>().Int32Value();
  this->instance->cursorBackward(mark, steps);
  return env.Null();
}

Napi::Value QLineEditWrap::cursorForward(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool mark = info[0].As<Napi::Boolean>().Value();
  int steps = info[1].As<Napi::Number>().Int32Value();
  this->instance->cursorForward(mark, steps);
  return env.Null();
}

Napi::Value QLineEditWrap::cursorPositionAt(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QPointWrap* posWrap =
      Napi::ObjectWrap<QPointWrap>::Unwrap(info[0].As<Napi::Object>());
  QPoint* pos = posWrap->getInternalInstance();
  int result = this->instance->cursorPositionAt(*pos);
  return Napi::Number::New(env, result);
}

Napi::Value QLineEditWrap::cursorWordBackward(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool mark = info[0].As<Napi::Boolean>().Value();
  this->instance->cursorWordBackward(mark);
  return env.Null();
}

Napi::Value QLineEditWrap::cursorWordForward(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool mark = info[0].As<Napi::Boolean>().Value();
  this->instance->cursorWordForward(mark);
  return env.Null();
}

Napi::Value QLineEditWrap::del(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->del();
  return env.Null();
}

Napi::Value QLineEditWrap::deselect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->deselect();
  return env.Null();
}
Napi::Value QLineEditWrap::end(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool mark = info[0].As<Napi::Boolean>().Value();
  this->instance->end(mark);
  return env.Null();
}
Napi::Value QLineEditWrap::home(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool mark = info[0].As<Napi::Boolean>().Value();
  this->instance->home(mark);
  return env.Null();
}

Napi::Value QLineEditWrap::insert(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  std::string newTextNapiText = info[0].As<Napi::String>().Utf8Value();
  QString newText = QString::fromUtf8(newTextNapiText.c_str());
  this->instance->insert(newText);
  return env.Null();
}
Napi::Value QLineEditWrap::selectionEnd(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int result = this->instance->selectionEnd();
  return Napi::Number::New(env, result);
}

Napi::Value QLineEditWrap::selectionLength(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int result = this->instance->selectionLength();
  return Napi::Number::New(env, result);
}

Napi::Value QLineEditWrap::selectionStart(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int result = this->instance->selectionStart();
  return Napi::Number::New(env, result);
}
Napi::Value QLineEditWrap::setSelection(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int start = info[0].As<Napi::Number>().Int32Value();
  int length = info[1].As<Napi::Number>().Int32Value();
  this->instance->setSelection(start, length);
  return env.Null();
}

Napi::Value QLineEditWrap::setTextMargins(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int left = info[0].As<Napi::Number>().Int32Value();
  int top = info[1].As<Napi::Number>().Int32Value();
  int right = info[2].As<Napi::Number>().Int32Value();
  int bottom = info[3].As<Napi::Number>().Int32Value();
  this->instance->setTextMargins(left, top, right, bottom);
  return env.Null();
}
Napi::Value QLineEditWrap::clear(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->clear();
  return env.Null();
}

Napi::Value QLineEditWrap::copy(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->copy();
  return env.Null();
}

Napi::Value QLineEditWrap::cut(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->cut();
  return env.Null();
}

Napi::Value QLineEditWrap::paste(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->paste();
  return env.Null();
}

Napi::Value QLineEditWrap::redo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->redo();
  return env.Null();
}

Napi::Value QLineEditWrap::selectAll(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->selectAll();
  return env.Null();
}
Napi::Value QLineEditWrap::undo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->undo();
  return env.Null();
}
