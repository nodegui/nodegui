#include "QtWidgets/QPainter/qpainter_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QPoint/qpoint_wrap.h"
#include "QtCore/QRect/qrect_wrap.h"
#include "QtGui/QColor/qcolor_wrap.h"
#include "QtGui/QFont/qfont_wrap.h"
#include "QtGui/QImage/qimage_wrap.h"
#include "QtGui/QPen/qpen_wrap.h"
#include "QtWidgets/QPainterPath/qpainterpath_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"
#include "core/Component/component_wrap.h"

Napi::FunctionReference QPainterWrap::constructor;

Napi::Object QPainterWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QPainter";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("drawArc", &QPainterWrap::drawArc),
       InstanceMethod("drawText", &QPainterWrap::drawText),
       InstanceMethod("drawPath", &QPainterWrap::drawPath),
       InstanceMethod("drawPie", &QPainterWrap::drawPie),
       InstanceMethod("drawEllipse", &QPainterWrap::drawEllipse),
       InstanceMethod("drawImage", &QPainterWrap::drawImage),
       InstanceMethod("strokePath", &QPainterWrap::strokePath),
       InstanceMethod("begin", &QPainterWrap::begin),
       InstanceMethod("end", &QPainterWrap::end),
       InstanceMethod("rotate", &QPainterWrap::rotate),
       InstanceMethod("setFont", &QPainterWrap::setFont),
       InstanceMethod("setPen", &QPainterWrap::setPen),
       InstanceMethod("setBrush", &QPainterWrap::setBrush),
       InstanceMethod("setTransform", &QPainterWrap::setTransform),
       InstanceMethod("drawLine", &QPainterWrap::drawLine),
       InstanceMethod("scale", &QPainterWrap::scale),
       InstanceMethod("translate", &QPainterWrap::translate),
       InstanceMethod("setRenderHint", &QPainterWrap::setRenderHint),
       InstanceMethod("drawConvexPolygon", &QPainterWrap::drawConvexPolygon),
       InstanceMethod("save", &QPainterWrap::save),
       InstanceMethod("restore", &QPainterWrap::restore),
       InstanceMethod("beginNativePainting",
                      &QPainterWrap::beginNativePainting),
       InstanceMethod("endNativePainting", &QPainterWrap::endNativePainting),
       InstanceMethod("fillRect", &QPainterWrap::fillRect),
       InstanceMethod("compositionMode", &QPainterWrap::compositionMode),
       InstanceMethod("setCompositionMode", &QPainterWrap::setCompositionMode),
       InstanceMethod("opacity", &QPainterWrap::opacity),
       InstanceMethod("setOpacity", &QPainterWrap::setOpacity),
       InstanceMethod("drawPoint", &QPainterWrap::drawPoint),
       InstanceMethod("drawRect", &QPainterWrap::drawRect),
       InstanceMethod("eraseRect", &QPainterWrap::eraseRect),
       InstanceMethod("boundingRect", &QPainterWrap::boundingRect),
       InstanceMethod("drawChord", &QPainterWrap::drawChord),
       InstanceMethod("drawPie", &QPainterWrap::drawPie),
       InstanceMethod("setBrushOrigin", &QPainterWrap::setBrushOrigin),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QPainterWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QPainter* QPainterWrap::getInternalInstance() { return this->instance; }
QPainterWrap::~QPainterWrap() { delete this->instance; }

QPainterWrap::QPainterWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QPainterWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object deviceObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* deviceWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(deviceObject);
    this->instance = new QPainter(deviceWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new QPainter();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}
Napi::Value QPainterWrap::drawArc(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  int width = info[2].As<Napi::Number>().Int32Value();
  int height = info[3].As<Napi::Number>().Int32Value();
  int startAngle = info[4].As<Napi::Number>().Int32Value();
  int spanAngle = info[5].As<Napi::Number>().Int32Value();
  this->instance->drawArc(x, y, width, height, startAngle, spanAngle);
  return env.Null();
}
Napi::Value QPainterWrap::drawText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  Napi::String napiText = info[2].As<Napi::String>();
  std::string text = napiText.Utf8Value();
  this->instance->drawText(x, y, QString::fromUtf8(text.c_str()));
  return env.Null();
}
Napi::Value QPainterWrap::drawPath(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object pathObject = info[0].As<Napi::Object>();
  QPainterPathWrap* pathWrap =
      Napi::ObjectWrap<QPainterPathWrap>::Unwrap(pathObject);
  QPainterPath* path = pathWrap->getInternalInstance();
  this->instance->drawPath(*path);
  return env.Null();
}
Napi::Value QPainterWrap::strokePath(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object pathObject = info[0].As<Napi::Object>();
  QPainterPathWrap* pathWrap =
      Napi::ObjectWrap<QPainterPathWrap>::Unwrap(pathObject);
  QPainterPath* path = pathWrap->getInternalInstance();
  Napi::Object penObject = info[1].As<Napi::Object>();
  QPenWrap* penWrap = Napi::ObjectWrap<QPenWrap>::Unwrap(penObject);
  QPen* pen = penWrap->getInternalInstance();
  this->instance->strokePath(*path, *pen);
  return env.Null();
}
Napi::Value QPainterWrap::begin(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::String napiType = info[1].As<Napi::String>();
  std::string type = napiType.Utf8Value();

  bool ret;
  if (type == "widget") {
    Napi::Object deviceObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* deviceWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(deviceObject);
    QPaintDevice* device = deviceWrap->getInternalInstance();
    ret = this->instance->begin(device);
  } else if (type == "image") {
    Napi::Object deviceObject = info[0].As<Napi::Object>();
    QImageWrap* deviceWrap = Napi::ObjectWrap<QImageWrap>::Unwrap(deviceObject);
    QPaintDevice* device = deviceWrap->getInternalInstance();
    ret = this->instance->begin(device);
  }

  return Napi::Value::From(env, ret);
}
Napi::Value QPainterWrap::end(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  bool ret = this->instance->end();
  return Napi::Value::From(env, ret);
}
Napi::Value QPainterWrap::rotate(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int angle = info[0].As<Napi::Number>().Int32Value();
  this->instance->rotate(angle);
  return env.Null();
}
Napi::Value QPainterWrap::setFont(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object fontObject = info[0].As<Napi::Object>();
  QFontWrap* fontWrap = Napi::ObjectWrap<QFontWrap>::Unwrap(fontObject);
  QFont* font = fontWrap->getInternalInstance();
  this->instance->setFont(*font);
  return env.Null();
}
Napi::Value QPainterWrap::setPen(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::String napiType = info[1].As<Napi::String>();
  std::string type = napiType.Utf8Value();

  if (type == "color") {
    Napi::Object colorObject = info[0].As<Napi::Object>();
    QColorWrap* colorWrap = Napi::ObjectWrap<QColorWrap>::Unwrap(colorObject);
    QColor* color = colorWrap->getInternalInstance();
    this->instance->setPen(*color);
  } else if (type == "style") {
    Qt::PenStyle style = (Qt::PenStyle)info[0].As<Napi::Number>().Int32Value();
    this->instance->setPen(style);
  } else if (type == "pen") {
    Napi::Object penObject = info[0].As<Napi::Object>();
    QPenWrap* penWrap = Napi::ObjectWrap<QPenWrap>::Unwrap(penObject);
    QPen* pen = penWrap->getInternalInstance();
    this->instance->setPen(*pen);
  }
  return env.Null();
}
Napi::Value QPainterWrap::drawEllipse(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() < 4) {
    Napi::TypeError::New(env, "Invalid number of arguments to drawEllipse")
        .ThrowAsJavaScriptException();
    return env.Null();
  }
  qreal x = info[0].As<Napi::Number>().DoubleValue();
  qreal y = info[1].As<Napi::Number>().DoubleValue();
  qreal width = info[2].As<Napi::Number>().DoubleValue();
  qreal height = info[3].As<Napi::Number>().DoubleValue();
  this->instance->drawEllipse(x, y, width, height);

  return env.Null();
}

Napi::Value QPainterWrap::drawImage(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();

  Napi::Object imageObject = info[2].As<Napi::Object>();
  QImageWrap* imageWrap = Napi::ObjectWrap<QImageWrap>::Unwrap(imageObject);
  QImage* image = imageWrap->getInternalInstance();

  int sx = info[3].As<Napi::Number>().Int32Value();
  int sy = info[4].As<Napi::Number>().Int32Value();
  int sw = info[5].As<Napi::Number>().Int32Value();
  int sh = info[6].As<Napi::Number>().Int32Value();
  this->instance->drawImage(x, y, *image, sx, sy, sw, sh);

  return env.Null();
}

Napi::Value QPainterWrap::drawPie(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() < 6) {
    Napi::TypeError::New(env, "Invalid number of arguments to drawPie")
        .ThrowAsJavaScriptException();
    return env.Null();
  }
  qreal x = info[0].As<Napi::Number>().DoubleValue();
  qreal y = info[1].As<Napi::Number>().DoubleValue();
  qreal width = info[2].As<Napi::Number>().DoubleValue();
  qreal height = info[3].As<Napi::Number>().DoubleValue();
  qreal startAngle = info[4].As<Napi::Number>().DoubleValue();
  qreal sweepLength = info[5].As<Napi::Number>().DoubleValue();
  this->instance->drawPie(x, y, width, height, startAngle, sweepLength);

  return env.Null();
}
Napi::Value QPainterWrap::drawLine(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int x1 = info[0].As<Napi::Number>().Int32Value();
  int y1 = info[1].As<Napi::Number>().Int32Value();
  int x2 = info[2].As<Napi::Number>().Int32Value();
  int y2 = info[3].As<Napi::Number>().Int32Value();
  this->instance->drawLine(x1, y1, x2, y2);
  return env.Null();
}
Napi::Value QPainterWrap::scale(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int sx = info[0].As<Napi::Number>().Int32Value();
  int sy = info[1].As<Napi::Number>().Int32Value();
  this->instance->scale(sx, sy);
  return env.Null();
}
Napi::Value QPainterWrap::translate(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int dx = info[0].As<Napi::Number>().Int32Value();
  int dy = info[1].As<Napi::Number>().Int32Value();
  this->instance->translate(dx, dy);
  return env.Null();
}
Napi::Value QPainterWrap::drawConvexPolygon(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Array pointsNapi = info[0].As<Napi::Array>();
  QPolygon polygon;
  for (int i = 0; i < pointsNapi.Length(); i++) {
    Napi::Object pointObject = pointsNapi.Get(i).As<Napi::Object>();
    QPointWrap* pointWrap = Napi::ObjectWrap<QPointWrap>::Unwrap(pointObject);
    QPoint* point = pointWrap->getInternalInstance();
    polygon << *point;
  }
  this->instance->drawConvexPolygon(polygon);
  return env.Null();
}
Napi::Value QPainterWrap::save(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->save();
  return env.Null();
}
Napi::Value QPainterWrap::restore(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->restore();
  return env.Null();
}
Napi::Value QPainterWrap::setBrush(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object colorObject = info[0].As<Napi::Object>();
  QColorWrap* colorWrap = Napi::ObjectWrap<QColorWrap>::Unwrap(colorObject);
  QColor* color = colorWrap->getInternalInstance();
  QBrush* brush = new QBrush(*color);
  this->instance->setBrush(*brush);
  return env.Null();
}
Napi::Value QPainterWrap::setRenderHint(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QPainter::RenderHint hint =
      (QPainter::RenderHint)info[0].As<Napi::Number>().Int32Value();

  this->instance->setRenderHint(hint, true);
  return env.Null();
}

Napi::Value QPainterWrap::setTransform(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::String napiType = info[0].As<Napi::String>();
  std::string type = napiType.Utf8Value();
  if (type == "matrix2x3") {
    bool combine = info[1].As<Napi::Boolean>().Value();
    qreal m11 = info[2].As<Napi::Number>().DoubleValue();
    qreal m12 = info[3].As<Napi::Number>().DoubleValue();
    qreal m21 = info[4].As<Napi::Number>().DoubleValue();
    qreal m22 = info[5].As<Napi::Number>().DoubleValue();
    qreal m31 = info[6].As<Napi::Number>().DoubleValue();
    qreal m32 = info[7].As<Napi::Number>().DoubleValue();
    QTransform xform(m11, m12, m21, m22, m31, m32);
    this->instance->setTransform(xform, combine);
  }

  return env.Null();
}

Napi::Value QPainterWrap::beginNativePainting(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->beginNativePainting();
  return env.Null();
}
Napi::Value QPainterWrap::endNativePainting(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->endNativePainting();
  return env.Null();
}
Napi::Value QPainterWrap::fillRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  int width = info[2].As<Napi::Number>().Int32Value();
  int height = info[3].As<Napi::Number>().Int32Value();
  Napi::Object colorObject = info[4].As<Napi::Object>();
  QColorWrap* colorWrap = Napi::ObjectWrap<QColorWrap>::Unwrap(colorObject);
  QColor* color = colorWrap->getInternalInstance();
  this->instance->fillRect(x, y, width, height, *color);
  return env.Null();
}
Napi::Value QPainterWrap::compositionMode(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  uint mode = static_cast<uint>(this->instance->compositionMode());
  return Napi::Value::From(env, mode);
}
Napi::Value QPainterWrap::setCompositionMode(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QPainter::CompositionMode mode =
      (QPainter::CompositionMode)info[0].As<Napi::Number>().Uint32Value();
  this->instance->setCompositionMode(mode);
  return env.Null();
}
Napi::Value QPainterWrap::opacity(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  qreal opacity = this->instance->opacity();
  return Napi::Value::From(env, opacity);
}
Napi::Value QPainterWrap::setOpacity(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  qreal opacity = info[0].As<Napi::Number>().DoubleValue();
  this->instance->setOpacity(opacity);
  return env.Null();
}
Napi::Value QPainterWrap::drawPoint(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  this->instance->drawPoint(x, y);
  return env.Null();
}
Napi::Value QPainterWrap::drawRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  int width = info[2].As<Napi::Number>().Int32Value();
  int height = info[3].As<Napi::Number>().Int32Value();
  this->instance->drawRect(x, y, width, height);
  return env.Null();
}
Napi::Value QPainterWrap::eraseRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  int width = info[2].As<Napi::Number>().Int32Value();
  int height = info[3].As<Napi::Number>().Int32Value();
  this->instance->eraseRect(x, y, width, height);
  return env.Null();
}
Napi::Value QPainterWrap::boundingRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  int w = info[2].As<Napi::Number>().Int32Value();
  int h = info[3].As<Napi::Number>().Int32Value();
  int flags = info[4].As<Napi::Number>().Int32Value();
  std::string textNapiText = info[5].As<Napi::String>().Utf8Value();
  QString text = QString::fromUtf8(textNapiText.c_str());
  QRect result = this->instance->boundingRect(x, y, w, h, flags, text);
  auto resultInstance = QRectWrap::constructor.New(
      {Napi::External<QRect>::New(env, new QRect(result))});
  return resultInstance;
}
Napi::Value QPainterWrap::drawChord(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  int width = info[2].As<Napi::Number>().Int32Value();
  int height = info[3].As<Napi::Number>().Int32Value();
  int startAngle = info[4].As<Napi::Number>().Int32Value();
  int spanAngle = info[5].As<Napi::Number>().Int32Value();
  this->instance->drawChord(x, y, width, height, startAngle, spanAngle);
  return env.Null();
}
Napi::Value QPainterWrap::setBrushOrigin(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  this->instance->setBrushOrigin(x, y);
  return env.Null();
}
