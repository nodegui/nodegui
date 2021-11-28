#include "QtGui/QDrag/qdrag_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QMimeData/qmimedata_wrap.h"
#include "QtCore/QObject/qobject_wrap.h"
#include "QtCore/QPoint/qpoint_wrap.h"
#include "QtGui/QPixmap/qpixmap_wrap.h"

Napi::FunctionReference QDragWrap::constructor;

Napi::Object QDragWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QDrag";
  Napi::Function func = DefineClass(
      env, CLASSNAME,

      {InstanceMethod("defaultAction", &QDragWrap::defaultAction),
       InstanceMethod("dragCursor", &QDragWrap::dragCursor),
       InstanceMethod("exec", &QDragWrap::exec),
       InstanceMethod("hotSpot", &QDragWrap::hotSpot),
       InstanceMethod("pixmap", &QDragWrap::pixmap),
       InstanceMethod("setDragCursor", &QDragWrap::setDragCursor),
       InstanceMethod("setHotSpot", &QDragWrap::setHotSpot),
       InstanceMethod("setPixmap", &QDragWrap::setPixmap),
       InstanceMethod("supportedActions", &QDragWrap::supportedActions),
       InstanceMethod("mimeData", &QDragWrap::mimeData),
       InstanceMethod("setMimeData", &QDragWrap::setMimeData),
       InstanceMethod("source", &QDragWrap::source),
       InstanceMethod("target", &QDragWrap::target),
       StaticMethod("cancel", &StaticQDragWrapMethods::cancel),

       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QDragWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NDrag* QDragWrap::getInternalInstance() { return this->instance; }

QDragWrap::QDragWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QDragWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    Napi::Object wrap0_0 = info[0].As<Napi::Object>();
    QObjectWrap* wrap0_1 = Napi::ObjectWrap<QObjectWrap>::Unwrap(wrap0_0);
    QObject* dragSource = wrap0_1->getInternalInstance();
    this->instance = new NDrag(dragSource);
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QDragWrap::~QDragWrap() {
  // Do not destroy instance here. It will be done by Qt Event loop.
  extrautils::safeDelete(this->instance);
}

// Instance Methods Here

Napi::Value QDragWrap::defaultAction(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Number::New(env, this->instance->defaultAction());
}

Napi::Value QDragWrap::dragCursor(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Qt::DropAction input0 =
      (Qt::DropAction)info[0].As<Napi::Number>().Int32Value();

  QPixmap ret = this->instance->dragCursor(input0);
  auto instance = QPixmapWrap::constructor.New(
      {Napi::External<QPixmap>::New(env, new QPixmap(ret))});
  return instance;
}

Napi::Value QDragWrap::exec(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  if (info.Length() < 2) {
    Qt::DropActions input0 =
        (Qt::DropActions)info[0].As<Napi::Number>().Int32Value();
    return Napi::Number::New(env, this->instance->exec(input0));
  }
  Qt::DropActions input0 =
      (Qt::DropActions)info[0].As<Napi::Number>().Int32Value();
  Qt::DropAction input1 =
      (Qt::DropAction)info[1].As<Napi::Number>().Int32Value();
  return Napi::Number::New(env, this->instance->exec(input0, input1));
}

Napi::Value QDragWrap::hotSpot(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QPoint ret = this->instance->hotSpot();
  auto instance = QPointWrap::constructor.New(
      {Napi::External<QPoint>::New(env, new QPoint(ret))});
  return instance;
}

Napi::Value QDragWrap::pixmap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QPixmap ret = this->instance->pixmap();
  auto instance = QPixmapWrap::constructor.New(
      {Napi::External<QPixmap>::New(env, new QPixmap(ret))});
  return instance;
}

Napi::Value QDragWrap::setDragCursor(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QPixmapWrap* wrap0_1 = Napi::ObjectWrap<QPixmapWrap>::Unwrap(wrap0_0);
  QPixmap* input0 = wrap0_1->getInternalInstance();
  Qt::DropAction input1 =
      (Qt::DropAction)info[1].As<Napi::Number>().Int32Value();
  this->instance->setDragCursor(*input0, input1);
  return env.Null();
}

Napi::Value QDragWrap::setHotSpot(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QPointWrap* wrap0_1 = Napi::ObjectWrap<QPointWrap>::Unwrap(wrap0_0);
  QPoint* input0 = wrap0_1->getInternalInstance();
  this->instance->setHotSpot(*input0);
  return env.Null();
}

Napi::Value QDragWrap::setPixmap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QPixmapWrap* wrap0_1 = Napi::ObjectWrap<QPixmapWrap>::Unwrap(wrap0_0);
  QPixmap* input0 = wrap0_1->getInternalInstance();
  this->instance->setPixmap(*input0);
  return env.Null();
}

Napi::Value QDragWrap::supportedActions(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Number::New(env, this->instance->supportedActions());
}

// Static Methods here
Napi::Value StaticQDragWrapMethods::cancel(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QDrag::cancel();
  return env.Null();
}

Napi::Value QDragWrap::mimeData(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  const QMimeData* ret = this->instance->mimeData();

  QMimeData* clone = new QMimeData();
  // QMimeData has no copy constructor so I do this
  QMimeDataWrap::cloneFromMimeDataToData((QMimeData*)ret, clone);
  auto instance = QMimeDataWrap::constructor.New(
      {Napi::External<QMimeData>::New(env, clone)});
  return instance;
}

Napi::Value QDragWrap::setMimeData(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object wrap0_0 = info[0].As<Napi::Object>();
  QMimeDataWrap* wrap0_1 = Napi::ObjectWrap<QMimeDataWrap>::Unwrap(wrap0_0);
  QMimeData* input0 = wrap0_1->getInternalInstance();

  QMimeData* clone = new QMimeData();
  // QMimeData has no copy constructor so I do this
  QMimeDataWrap::cloneFromMimeDataToData((QMimeData*)input0, clone);
  // Ownership of the data (the clone) is transferred to the QDrag object
  // While our original QMimeData should be garbage collected.. I guessss?
  this->instance->setMimeData(clone);
  return env.Null();
}

// This function crashes the application
Napi::Value QDragWrap::source(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QObject* source = this->instance->source();
  // We can likely call a wrap directly since QObjectWrap is smart and uses
  // QPointer?
  auto instance =
      QObjectWrap::constructor.New({Napi::External<QObject>::New(env, source)});
  return instance;
}

// This function crashes the application
Napi::Value QDragWrap::target(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QObject* target = this->instance->target();
  // We can likely call a wrap directly since QObjectWrap is smart and uses
  // QPointer?
  auto instance =
      QObjectWrap::constructor.New({Napi::External<QObject>::New(env, target)});
  return instance;
}