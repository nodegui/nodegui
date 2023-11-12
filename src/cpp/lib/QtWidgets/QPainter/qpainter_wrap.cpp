#include "QtWidgets/QPainter/qpainter_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QPoint/qpoint_wrap.h"
#include "QtCore/QPointF/qpointf_wrap.h"
#include "QtCore/QRect/qrect_wrap.h"
#include "QtCore/QRectF/qrectf_wrap.h"
#include "QtGui/QBrush/qbrush_wrap.h"
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
      {InstanceMethod("begin", &QPainterWrap::begin),
       InstanceMethod("beginNativePainting",
                      &QPainterWrap::beginNativePainting),
       InstanceMethod("boundingRect", &QPainterWrap::boundingRect),
       InstanceMethod("boundingRectF", &QPainterWrap::boundingRectF),
       InstanceMethod("compositionMode", &QPainterWrap::compositionMode),
       InstanceMethod("drawArc", &QPainterWrap::drawArc),
       InstanceMethod("drawArcF", &QPainterWrap::drawArcF),
       InstanceMethod("drawChord", &QPainterWrap::drawChord),
       InstanceMethod("drawChordF", &QPainterWrap::drawChord),
       InstanceMethod("drawConvexPolygon", &QPainterWrap::drawConvexPolygon),
       InstanceMethod("drawConvexPolygonF", &QPainterWrap::drawConvexPolygonF),
       InstanceMethod("drawEllipse", &QPainterWrap::drawEllipse),
       InstanceMethod("drawEllipseF", &QPainterWrap::drawEllipseF),
       InstanceMethod("drawImage", &QPainterWrap::drawImage),
       InstanceMethod("drawImageF", &QPainterWrap::drawImageF),
       InstanceMethod("drawLine", &QPainterWrap::drawLine),
       InstanceMethod("drawLineF", &QPainterWrap::drawLineF),
       InstanceMethod("drawPath", &QPainterWrap::drawPath),
       InstanceMethod("drawPie", &QPainterWrap::drawPie),
       InstanceMethod("drawPieF", &QPainterWrap::drawPieF),
       InstanceMethod("drawPixmap", &QPainterWrap::drawPixmap),
       InstanceMethod("drawPoint", &QPainterWrap::drawPoint),
       InstanceMethod("drawPointF", &QPainterWrap::drawPointF),
       InstanceMethod("drawRect", &QPainterWrap::drawRect),
       InstanceMethod("drawRectF", &QPainterWrap::drawRectF),
       InstanceMethod("drawText", &QPainterWrap::drawText),
       InstanceMethod("drawTextF", &QPainterWrap::drawTextF),
       InstanceMethod("end", &QPainterWrap::end),
       InstanceMethod("endNativePainting", &QPainterWrap::endNativePainting),
       InstanceMethod("eraseRect", &QPainterWrap::eraseRect),
       InstanceMethod("eraseRectF", &QPainterWrap::eraseRectF),
       InstanceMethod("fillRect", &QPainterWrap::fillRect),
       InstanceMethod("fillRectF", &QPainterWrap::fillRectF),
       InstanceMethod("opacity", &QPainterWrap::opacity),
       InstanceMethod("restore", &QPainterWrap::restore),
       InstanceMethod("rotate", &QPainterWrap::rotate),
       InstanceMethod("save", &QPainterWrap::save),
       InstanceMethod("scale", &QPainterWrap::scale),
       InstanceMethod("setBrush", &QPainterWrap::setBrush),
       InstanceMethod("setBrushOrigin", &QPainterWrap::setBrushOrigin),
       InstanceMethod("setBrushOriginF", &QPainterWrap::setBrushOriginF),
       InstanceMethod("setCompositionMode", &QPainterWrap::setCompositionMode),
       InstanceMethod("setFont", &QPainterWrap::setFont),
       InstanceMethod("setOpacity", &QPainterWrap::setOpacity),
       InstanceMethod("setPen", &QPainterWrap::setPen),
       InstanceMethod("setRenderHint", &QPainterWrap::setRenderHint),
       InstanceMethod("setTransform", &QPainterWrap::setTransform),
       InstanceMethod("strokePath", &QPainterWrap::strokePath),
       InstanceMethod("translate", &QPainterWrap::translate),
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
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  int width = info[2].As<Napi::Number>().Int32Value();
  int height = info[3].As<Napi::Number>().Int32Value();
  int startAngle = info[4].As<Napi::Number>().Int32Value();
  int spanAngle = info[5].As<Napi::Number>().Int32Value();
  this->instance->drawArc(x, y, width, height, startAngle, spanAngle);
  return env.Null();
}
Napi::Value QPainterWrap::drawArcF(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal x = info[0].As<Napi::Number>().DoubleValue();
  qreal y = info[1].As<Napi::Number>().DoubleValue();
  qreal width = info[2].As<Napi::Number>().DoubleValue();
  qreal height = info[3].As<Napi::Number>().DoubleValue();
  int startAngle = info[4].As<Napi::Number>().Int32Value();
  int spanAngle = info[5].As<Napi::Number>().Int32Value();
  this->instance->drawArc(QRectF(x, y, width, height), startAngle, spanAngle);
  return env.Null();
}
Napi::Value QPainterWrap::drawText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  Napi::String napiText = info[2].As<Napi::String>();
  std::string text = napiText.Utf8Value();
  this->instance->drawText(x, y, QString::fromUtf8(text.c_str()));
  return env.Null();
}
Napi::Value QPainterWrap::drawTextF(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal x = info[0].As<Napi::Number>().DoubleValue();
  qreal y = info[1].As<Napi::Number>().DoubleValue();
  Napi::String napiText = info[2].As<Napi::String>();
  std::string text = napiText.Utf8Value();
  this->instance->drawText(QPointF(x, y), QString::fromUtf8(text.c_str()));
  return env.Null();
}
Napi::Value QPainterWrap::drawPath(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object pathObject = info[0].As<Napi::Object>();
  QPainterPathWrap* pathWrap =
      Napi::ObjectWrap<QPainterPathWrap>::Unwrap(pathObject);
  QPainterPath* path = pathWrap->getInternalInstance();
  this->instance->drawPath(*path);
  return env.Null();
}
Napi::Value QPainterWrap::strokePath(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
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
  bool ret = this->instance->end();
  return Napi::Value::From(env, ret);
}
Napi::Value QPainterWrap::rotate(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal angle = info[0].As<Napi::Number>().DoubleValue();
  this->instance->rotate(angle);
  return env.Null();
}
Napi::Value QPainterWrap::setFont(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object fontObject = info[0].As<Napi::Object>();
  QFontWrap* fontWrap = Napi::ObjectWrap<QFontWrap>::Unwrap(fontObject);
  QFont* font = fontWrap->getInternalInstance();
  this->instance->setFont(*font);
  return env.Null();
}
Napi::Value QPainterWrap::setPen(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
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
  if (info.Length() < 4) {
    Napi::TypeError::New(env, "Invalid number of arguments to drawEllipse")
        .ThrowAsJavaScriptException();
    return env.Null();
  }
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  int width = info[2].As<Napi::Number>().Int32Value();
  int height = info[3].As<Napi::Number>().Int32Value();
  this->instance->drawEllipse(x, y, width, height);

  return env.Null();
}

Napi::Value QPainterWrap::drawEllipseF(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  if (info.Length() < 4) {
    Napi::TypeError::New(env, "Invalid number of arguments to drawEllipseF")
        .ThrowAsJavaScriptException();
    return env.Null();
  }
  qreal x = info[0].As<Napi::Number>().DoubleValue();
  qreal y = info[1].As<Napi::Number>().DoubleValue();
  qreal width = info[2].As<Napi::Number>().DoubleValue();
  qreal height = info[3].As<Napi::Number>().DoubleValue();
  this->instance->drawEllipse(QRectF(x, y, width, height));

  return env.Null();
}

Napi::Value QPainterWrap::drawImage(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

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

Napi::Value QPainterWrap::drawImageF(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  qreal x = info[0].As<Napi::Number>().DoubleValue();
  qreal y = info[1].As<Napi::Number>().DoubleValue();

  Napi::Object imageObject = info[2].As<Napi::Object>();
  QImageWrap* imageWrap = Napi::ObjectWrap<QImageWrap>::Unwrap(imageObject);
  QImage* image = imageWrap->getInternalInstance();

  qreal sx = info[3].As<Napi::Number>().DoubleValue();
  qreal sy = info[4].As<Napi::Number>().DoubleValue();
  qreal sw = info[5].As<Napi::Number>().DoubleValue();
  qreal sh = info[6].As<Napi::Number>().DoubleValue();
  this->instance->drawImage(QPointF(x, y), *image, QRectF(sx, sy, sw, sh));

  return env.Null();
}

Napi::Value QPainterWrap::drawPie(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  if (info.Length() < 6) {
    Napi::TypeError::New(env, "Invalid number of arguments to drawPie")
        .ThrowAsJavaScriptException();
    return env.Null();
  }
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  int width = info[2].As<Napi::Number>().Int32Value();
  int height = info[3].As<Napi::Number>().Int32Value();
  int startAngle = info[4].As<Napi::Number>().Int32Value();
  int sweepLength = info[5].As<Napi::Number>().Int32Value();
  this->instance->drawPie(x, y, width, height, startAngle, sweepLength);

  return env.Null();
}

Napi::Value QPainterWrap::drawPieF(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  if (info.Length() < 6) {
    Napi::TypeError::New(env, "Invalid number of arguments to drawPie")
        .ThrowAsJavaScriptException();
    return env.Null();
  }
  qreal x = info[0].As<Napi::Number>().DoubleValue();
  qreal y = info[1].As<Napi::Number>().DoubleValue();
  qreal width = info[2].As<Napi::Number>().DoubleValue();
  qreal height = info[3].As<Napi::Number>().DoubleValue();
  int startAngle = info[4].As<Napi::Number>().Int32Value();
  int sweepLength = info[5].As<Napi::Number>().Int32Value();
  this->instance->drawPie(QRectF(x, y, width, height), startAngle, sweepLength);

  return env.Null();
}

Napi::Value QPainterWrap::drawPixmap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();

  Napi::Object pixmapObject = info[2].As<Napi::Object>();
  QPixmapWrap* pixmapWrap = Napi::ObjectWrap<QPixmapWrap>::Unwrap(pixmapObject);
  QPixmap* pixmap = pixmapWrap->getInternalInstance();

  int sx = info[3].As<Napi::Number>().Int32Value();
  int sy = info[4].As<Napi::Number>().Int32Value();
  int sw = info[5].As<Napi::Number>().Int32Value();
  int sh = info[6].As<Napi::Number>().Int32Value();
  this->instance->drawPixmap(x, y, *pixmap, sx, sy, sw, sh);

  return env.Null();
}

Napi::Value QPainterWrap::drawLine(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int x1 = info[0].As<Napi::Number>().Int32Value();
  int y1 = info[1].As<Napi::Number>().Int32Value();
  int x2 = info[2].As<Napi::Number>().Int32Value();
  int y2 = info[3].As<Napi::Number>().Int32Value();
  this->instance->drawLine(x1, y1, x2, y2);
  return env.Null();
}
Napi::Value QPainterWrap::drawLineF(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal x1 = info[0].As<Napi::Number>().DoubleValue();
  qreal y1 = info[1].As<Napi::Number>().DoubleValue();
  qreal x2 = info[2].As<Napi::Number>().DoubleValue();
  qreal y2 = info[3].As<Napi::Number>().DoubleValue();
  this->instance->drawLine(QLineF(x1, y1, x2, y2));
  return env.Null();
}
Napi::Value QPainterWrap::scale(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal sx = info[0].As<Napi::Number>().DoubleValue();
  qreal sy = info[1].As<Napi::Number>().DoubleValue();
  this->instance->scale(sx, sy);
  return env.Null();
}
Napi::Value QPainterWrap::translate(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal dx = info[0].As<Napi::Number>().DoubleValue();
  qreal dy = info[1].As<Napi::Number>().DoubleValue();
  this->instance->translate(dx, dy);
  return env.Null();
}
Napi::Value QPainterWrap::drawConvexPolygon(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
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
Napi::Value QPainterWrap::drawConvexPolygonF(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Array pointsNapi = info[0].As<Napi::Array>();
  QPolygonF polygon;
  for (int i = 0; i < pointsNapi.Length(); i++) {
    Napi::Object pointObject = pointsNapi.Get(i).As<Napi::Object>();
    QPointFWrap* pointWrap = Napi::ObjectWrap<QPointFWrap>::Unwrap(pointObject);
    QPointF* point = pointWrap->getInternalInstance();
    polygon << *point;
  }
  this->instance->drawConvexPolygon(polygon);
  return env.Null();
}
Napi::Value QPainterWrap::save(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->save();
  return env.Null();
}
Napi::Value QPainterWrap::restore(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->restore();
  return env.Null();
}
Napi::Value QPainterWrap::setBrush(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();

  Napi::String napiType = info[1].As<Napi::String>();
  std::string type = napiType.Utf8Value();

  if (type == "brush") {
    Napi::Object brushObject = info[0].As<Napi::Object>();
    QBrushWrap* brushWrap = Napi::ObjectWrap<QBrushWrap>::Unwrap(brushObject);
    QBrush* brush = brushWrap->getInternalInstance();
    this->instance->setBrush(*brush);
  } else if (type == "color") {
    Napi::Object colorObject = info[0].As<Napi::Object>();
    QColorWrap* colorWrap = Napi::ObjectWrap<QColorWrap>::Unwrap(colorObject);
    QColor* color = colorWrap->getInternalInstance();
    QBrush* brush = new QBrush(*color);
    this->instance->setBrush(*brush);
  }
  return env.Null();
}
Napi::Value QPainterWrap::setRenderHint(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QPainter::RenderHint hint =
      (QPainter::RenderHint)info[0].As<Napi::Number>().Int32Value();

  this->instance->setRenderHint(hint, true);
  return env.Null();
}

Napi::Value QPainterWrap::setTransform(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
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
  this->instance->beginNativePainting();
  return env.Null();
}
Napi::Value QPainterWrap::endNativePainting(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->endNativePainting();
  return env.Null();
}
Napi::Value QPainterWrap::fillRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
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
Napi::Value QPainterWrap::fillRectF(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal x = info[0].As<Napi::Number>().DoubleValue();
  qreal y = info[1].As<Napi::Number>().DoubleValue();
  qreal width = info[2].As<Napi::Number>().DoubleValue();
  qreal height = info[3].As<Napi::Number>().DoubleValue();
  Napi::Object colorObject = info[4].As<Napi::Object>();
  QColorWrap* colorWrap = Napi::ObjectWrap<QColorWrap>::Unwrap(colorObject);
  QColor* color = colorWrap->getInternalInstance();
  this->instance->fillRect(QRectF(x, y, width, height), *color);
  return env.Null();
}
Napi::Value QPainterWrap::compositionMode(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  uint mode = static_cast<uint>(this->instance->compositionMode());
  return Napi::Value::From(env, mode);
}
Napi::Value QPainterWrap::setCompositionMode(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QPainter::CompositionMode mode =
      (QPainter::CompositionMode)info[0].As<Napi::Number>().Uint32Value();
  this->instance->setCompositionMode(mode);
  return env.Null();
}
Napi::Value QPainterWrap::opacity(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal opacity = this->instance->opacity();
  return Napi::Value::From(env, opacity);
}
Napi::Value QPainterWrap::setOpacity(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal opacity = info[0].As<Napi::Number>().DoubleValue();
  this->instance->setOpacity(opacity);
  return env.Null();
}
Napi::Value QPainterWrap::drawPoint(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  this->instance->drawPoint(x, y);
  return env.Null();
}
Napi::Value QPainterWrap::drawPointF(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal x = info[0].As<Napi::Number>().DoubleValue();
  qreal y = info[1].As<Napi::Number>().DoubleValue();
  this->instance->drawPoint(QPointF(x, y));
  return env.Null();
}
Napi::Value QPainterWrap::drawRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  int width = info[2].As<Napi::Number>().Int32Value();
  int height = info[3].As<Napi::Number>().Int32Value();
  this->instance->drawRect(x, y, width, height);
  return env.Null();
}
Napi::Value QPainterWrap::drawRectF(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal x = info[0].As<Napi::Number>().DoubleValue();
  qreal y = info[1].As<Napi::Number>().DoubleValue();
  qreal width = info[2].As<Napi::Number>().DoubleValue();
  qreal height = info[3].As<Napi::Number>().DoubleValue();
  this->instance->drawRect(QRectF(x, y, width, height));
  return env.Null();
}
Napi::Value QPainterWrap::eraseRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  int width = info[2].As<Napi::Number>().Int32Value();
  int height = info[3].As<Napi::Number>().Int32Value();
  this->instance->eraseRect(x, y, width, height);
  return env.Null();
}
Napi::Value QPainterWrap::eraseRectF(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal x = info[0].As<Napi::Number>().DoubleValue();
  qreal y = info[1].As<Napi::Number>().DoubleValue();
  qreal width = info[2].As<Napi::Number>().DoubleValue();
  qreal height = info[3].As<Napi::Number>().DoubleValue();
  this->instance->eraseRect(QRectF(x, y, width, height));
  return env.Null();
}
Napi::Value QPainterWrap::boundingRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
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
Napi::Value QPainterWrap::boundingRectF(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal x = info[0].As<Napi::Number>().DoubleValue();
  qreal y = info[1].As<Napi::Number>().DoubleValue();
  qreal w = info[2].As<Napi::Number>().DoubleValue();
  qreal h = info[3].As<Napi::Number>().DoubleValue();
  int flags = info[4].As<Napi::Number>().Int32Value();
  std::string textNapiText = info[5].As<Napi::String>().Utf8Value();
  QString text = QString::fromUtf8(textNapiText.c_str());
  QRectF result = this->instance->boundingRect(QRectF(x, y, w, h), flags, text);
  auto resultInstance = QRectFWrap::constructor.New(
      {Napi::External<QRectF>::New(env, new QRectF(result))});
  return resultInstance;
}
Napi::Value QPainterWrap::drawChord(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  int width = info[2].As<Napi::Number>().Int32Value();
  int height = info[3].As<Napi::Number>().Int32Value();
  int startAngle = info[4].As<Napi::Number>().Int32Value();
  int spanAngle = info[5].As<Napi::Number>().Int32Value();
  this->instance->drawChord(x, y, width, height, startAngle, spanAngle);
  return env.Null();
}
Napi::Value QPainterWrap::drawChordF(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal x = info[0].As<Napi::Number>().DoubleValue();
  qreal y = info[1].As<Napi::Number>().DoubleValue();
  qreal width = info[2].As<Napi::Number>().DoubleValue();
  qreal height = info[3].As<Napi::Number>().DoubleValue();
  int startAngle = info[4].As<Napi::Number>().Int32Value();
  int spanAngle = info[5].As<Napi::Number>().Int32Value();
  this->instance->drawChord(QRectF(x, y, width, height), startAngle, spanAngle);
  return env.Null();
}
Napi::Value QPainterWrap::setBrushOrigin(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  this->instance->setBrushOrigin(x, y);
  return env.Null();
}
Napi::Value QPainterWrap::setBrushOriginF(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal x = info[0].As<Napi::Number>().DoubleValue();
  qreal y = info[1].As<Napi::Number>().DoubleValue();
  this->instance->setBrushOrigin(QPointF(x, y));
  return env.Null();
}
