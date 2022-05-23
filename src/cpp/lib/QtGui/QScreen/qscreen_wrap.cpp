#include "QtGui/QScreen/qscreen_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QRect/qrect_wrap.h"
#include "QtCore/QSizeF/qsizef_wrap.h"
#include "QtGui/QPixmap/qpixmap_wrap.h"

Napi::FunctionReference QScreenWrap::constructor;

Napi::Object QScreenWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QScreen";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("grabWindow", &QScreenWrap::grabWindow),
                   QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QScreenWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QScreen, QScreenWrap);
  return exports;
}

QScreenWrap::QScreenWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QScreenWrap>(info) {
  Napi::Env env = info.Env();
  if (info[0].IsExternal()) {
    this->instance = info[0].As<Napi::External<QScreen>>().Data();
  } else {
    Napi::TypeError::New(env, "NodeGui: QScreenWrap: Incorrect initialization")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

QScreen* QScreenWrap::getInternalInstance() { return this->instance; }

void QScreenWrap::connectSignalsToEventEmitter() {
  QOBJECT_SIGNALS_ON_TARGET(this->instance.data());

  QObject::connect(
      this->instance.data(), &QScreen::availableGeometryChanged,
      [=](const QRect& geometry) {
        Napi::Env env = this->emitOnNode.Env();
        Napi::HandleScope scope(env);
        auto instance = QRectWrap::constructor.New({Napi::External<QRect>::New(
            env, new QRect(geometry.x(), geometry.y(), geometry.width(),
                           geometry.height()))});
        this->emitOnNode.Call(
            {Napi::String::New(env, "availableGeometryChanged"), instance});
      });

  QObject::connect(
      this->instance.data(), &QScreen::geometryChanged,
      [=](const QRect& geometry) {
        Napi::Env env = this->emitOnNode.Env();
        Napi::HandleScope scope(env);
        auto instance = QRectWrap::constructor.New({Napi::External<QRect>::New(
            env, new QRect(geometry.x(), geometry.y(), geometry.width(),
                           geometry.height()))});
        this->emitOnNode.Call(
            {Napi::String::New(env, "geometryChanged"), instance});
      });

  QObject::connect(this->instance.data(), &QScreen::logicalDotsPerInchChanged,
                   [=](qreal dpi) {
                     Napi::Env env = this->emitOnNode.Env();
                     Napi::HandleScope scope(env);
                     this->emitOnNode.Call(
                         {Napi::String::New(env, "logicalDotsPerInchChanged"),
                          Napi::Value::From(env, dpi)});
                   });

  QObject::connect(
      this->instance.data(), &QScreen::orientationChanged,
      [=](Qt::ScreenOrientation orientation) {
        Napi::Env env = this->emitOnNode.Env();
        Napi::HandleScope scope(env);
        this->emitOnNode.Call(
            {Napi::String::New(env, "orientationChanged"),
             Napi::Value::From(env, static_cast<int>(orientation))});
      });

  QObject::connect(this->instance.data(), &QScreen::physicalDotsPerInchChanged,
                   [=](qreal dpi) {
                     Napi::Env env = this->emitOnNode.Env();
                     Napi::HandleScope scope(env);
                     this->emitOnNode.Call(
                         {Napi::String::New(env, "physicalDotsPerInchChanged"),
                          Napi::Value::From(env, dpi)});
                   });

  QObject::connect(
      this->instance.data(), &QScreen::physicalSizeChanged,
      [=](const QSizeF& size) {
        Napi::Env env = this->emitOnNode.Env();
        Napi::HandleScope scope(env);
        auto instance = QSizeFWrap::constructor.New(
            {Napi::External<QSizeF>::New(env, new QSizeF(size))});
        this->emitOnNode.Call(
            {Napi::String::New(env, "physicalSizeChanged"), instance});
      });

  QObject::connect(
      this->instance.data(), &QScreen::primaryOrientationChanged,
      [=](Qt::ScreenOrientation orientation) {
        Napi::Env env = this->emitOnNode.Env();
        Napi::HandleScope scope(env);
        this->emitOnNode.Call(
            {Napi::String::New(env, "primaryOrientationChanged"),
             Napi::Value::From(env, static_cast<int>(orientation))});
      });

  QObject::connect(
      this->instance.data(), &QScreen::refreshRateChanged,
      [=](qreal refreshRate) {
        Napi::Env env = this->emitOnNode.Env();
        Napi::HandleScope scope(env);
        this->emitOnNode.Call({Napi::String::New(env, "refreshRateChanged"),
                               Napi::Value::From(env, refreshRate)});
      });

  QObject::connect(
      this->instance.data(), &QScreen::virtualGeometryChanged,
      [=](const QRect& rect) {
        Napi::Env env = this->emitOnNode.Env();
        Napi::HandleScope scope(env);
        auto instance = QRectWrap::constructor.New({Napi::External<QRect>::New(
            env, new QRect(rect.x(), rect.y(), rect.width(), rect.height()))});
        this->emitOnNode.Call(
            {Napi::String::New(env, "virtualGeometryChanged"), instance});
      });
}

Napi::Value QScreenWrap::grabWindow(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool lossless = false;
  WId winId =
      static_cast<WId>(info[0].As<Napi::BigInt>().Uint64Value(&lossless));
  int x = info[1].As<Napi::Number>().Int32Value();
  int y = info[2].As<Napi::Number>().Int32Value();
  int width = info[3].As<Napi::Number>().Int32Value();
  int height = info[4].As<Napi::Number>().Int32Value();
  QPixmap pixmap = this->instance->grabWindow(winId, x, y, width, height);
  auto instance = QPixmapWrap::constructor.New(
      {Napi::External<QPixmap>::New(env, new QPixmap(pixmap))});
  return instance;
}
