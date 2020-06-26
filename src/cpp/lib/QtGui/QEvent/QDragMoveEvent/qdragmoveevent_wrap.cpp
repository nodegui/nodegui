#include "QtGui/QEvent/QDragMoveEvent/qdragmoveevent_wrap.h"
#include "QtCore/QRect/qrect_wrap.h"

#include <QPoint>

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QDragMoveEventWrap::constructor;

Napi::Object QDragMoveEventWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QDragMoveEvent";
  Napi::Function func = DefineClass(
      env, CLASSNAME,

      {// Methods inherited from QDropEvent
       InstanceMethod("acceptProposedAction",
                      &QDragMoveEventWrap::acceptProposedAction),
       InstanceMethod("dropAction", &QDragMoveEventWrap::dropAction),
       InstanceMethod("keyboardModifiers",
                      &QDragMoveEventWrap::keyboardModifiers),
       //    InstanceMethod("mimeData", &QDragMoveEventWrap::mimeData),
       InstanceMethod("mouseButtons", &QDragMoveEventWrap::mouseButtons),
       InstanceMethod("pos", &QDragMoveEventWrap::pos),
       InstanceMethod("possibleActions", &QDragMoveEventWrap::possibleActions),
       InstanceMethod("proposedAction", &QDragMoveEventWrap::proposedAction),
       //    InstanceMethod("source", &QDragMoveEventWrap::source),

       // Methods inherited from QEvent
       InstanceMethod("accept", &QDragMoveEventWrap::accept),
       InstanceMethod("ignore", &QDragMoveEventWrap::ignore),
       InstanceMethod("isAccepted", &QDragMoveEventWrap::isAccepted),
       InstanceMethod("setAccepted", &QDragMoveEventWrap::setAccepted),
       InstanceMethod("spontaneous", &QDragMoveEventWrap::spontaneous),
       InstanceMethod(
           "_type",
           &QDragMoveEventWrap::_type),  // Rename to _type to prevent conflict

       // Methods of this class
       InstanceMethod("answerRect", &QDragMoveEventWrap::proposedAction),
       // accept and ignore are re-implementations of qevent ones
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QDragMoveEventWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QDragMoveEvent* QDragMoveEventWrap::getInternalInstance() {
  return this->instance;
}

QDragMoveEventWrap::QDragMoveEventWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QDragMoveEventWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 1) {
    Napi::External<QDragMoveEvent> eventObject =
        info[0].As<Napi::External<QDragMoveEvent>>();
    this->instance = static_cast<QDragMoveEvent*>(eventObject.Data());
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QDragMoveEventWrap::~QDragMoveEventWrap() {
  // Do not destroy instance here. It will be done by Qt Event loop.
}

Napi::Value QDragMoveEventWrap::acceptProposedAction(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->acceptProposedAction();
  return env.Null();
}

Napi::Value QDragMoveEventWrap::dropAction(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int action = static_cast<int>(this->instance->dropAction());
  return Napi::Number::From(env, action);
}

Napi::Value QDragMoveEventWrap::keyboardModifiers(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int modifierFlags = static_cast<int>(this->instance->keyboardModifiers());
  return Napi::Number::From(env, modifierFlags);
}

Napi::Value QDragMoveEventWrap::mouseButtons(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int m = static_cast<int>(this->instance->mouseButtons());
  return Napi::Number::From(env, m);
}

// TODO: Implement MimeData to do this...
// Napi::Value QDragMoveEventWrap::mimeData(const Napi::CallbackInfo& info) {
//   Napi::Env env = info.Env();
//   int modifierFlags = static_cast<int>(this->instance->keyboardModifiers());
//   return Napi::Number::From(env, modifierFlags);
// }

Napi::Value QDragMoveEventWrap::pos(const Napi::CallbackInfo& info) {
  // Uses QPoint
  Napi::Env env = info.Env();
  QPoint point = static_cast<QPoint>(this->instance->pos());
  int x = static_cast<int>(point.x());
  int y = static_cast<int>(point.y());
  Napi::Object obj = Napi::Object::New(env);
  obj.Set("x", Napi::Number::From(env, x));
  obj.Set("y", Napi::Number::From(env, y));
  return obj;
}

Napi::Value QDragMoveEventWrap::possibleActions(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int v = static_cast<int>(this->instance->possibleActions());
  return Napi::Number::From(env, v);
}

Napi::Value QDragMoveEventWrap::proposedAction(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int v = static_cast<int>(this->instance->possibleActions());
  return Napi::Number::From(env, v);
}

Napi::Value QDragMoveEventWrap::setDropAction(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int dropFlags;
  if (info.Length() < 1) {
    dropFlags = 1;  // Default to copy operation
    return env.Null();
  } else {
    Napi::Number num = info[0].ToNumber();
    dropFlags = static_cast<int>(num.Int32Value());
  }
  this->instance->setDropAction(static_cast<Qt::DropAction>(dropFlags));
  return env.Null();
}

// Needs QWidget references... should I ?
// Napi::Value QDragMoveEventWrap::source(const Napi::CallbackInfo& info) {
//   Napi::Env env = info.Env();
//   return env.Null();
// }
Napi::Value QDragMoveEventWrap::accept(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  if (info.Length() == 4) {
    int x = info[0].As<Napi::Number>().Int32Value();
    int y = info[1].As<Napi::Number>().Int32Value();
    int width = info[2].As<Napi::Number>().Int32Value();
    int height = info[3].As<Napi::Number>().Int32Value();
    this->instance->accept(QRect(x, y, width, height));
  } else if (info.Length() == 1) {
    Napi::Object wrap0_0 = info[0].As<Napi::Object>();
    QRectWrap* wrap0_1 = Napi::ObjectWrap<QRectWrap>::Unwrap(wrap0_0);
    QRect* input0 = wrap0_1->getInternalInstance();
    this->instance->accept(*input0);
  } else {
    this->instance->accept();
  }
  return env.Null();
}
Napi::Value QDragMoveEventWrap::answerRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QRect r = static_cast<QRect>(this->instance->answerRect());
  int x = static_cast<int>(r.x());
  int y = static_cast<int>(r.y());
  int w = static_cast<int>(r.width());
  int h = static_cast<int>(r.height());
  Napi::Object obj = Napi::Object::New(env);
  obj.Set("x", Napi::Number::From(env, x));
  obj.Set("y", Napi::Number::From(env, y));
  obj.Set("width", Napi::Number::From(env, w));
  obj.Set("height", Napi::Number::From(env, h));
  return obj;
}
Napi::Value QDragMoveEventWrap::ignore(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  if (info.Length() == 4) {
    int x = info[0].As<Napi::Number>().Int32Value();
    int y = info[1].As<Napi::Number>().Int32Value();
    int width = info[2].As<Napi::Number>().Int32Value();
    int height = info[3].As<Napi::Number>().Int32Value();
    this->instance->ignore(QRect(x, y, width, height));
  }else if (info.Length() == 1) {
    Napi::Object wrap0_0 = info[0].As<Napi::Object>();
    QRectWrap* wrap0_1 = Napi::ObjectWrap<QRectWrap>::Unwrap(wrap0_0);
    QRect* input0 = wrap0_1->getInternalInstance();
    this->instance->ignore(*input0);
  } else {
    this->instance->ignore();
  }
  return env.Null();
}

// Methods from QEvent --------------------------------------------

// accept and ignore are reimplemented above

Napi::Value QDragMoveEventWrap::isAccepted(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool v = this->instance->isAccepted();
  return Napi::Boolean::From(env, v);
}
Napi::Value QDragMoveEventWrap::setAccepted(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool v = info[0].As<Napi::Boolean>().Value();
  this->instance->setAccepted(v);
  return env.Null();
}
Napi::Value QDragMoveEventWrap::spontaneous(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool v = this->instance->spontaneous();
  return Napi::Boolean::From(env, v);
}
Napi::Value QDragMoveEventWrap::_type(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int v = static_cast<int>(this->instance->type());
  return Napi::Number::From(env, v);
}
