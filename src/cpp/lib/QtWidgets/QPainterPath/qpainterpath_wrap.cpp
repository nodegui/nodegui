#include "QtWidgets/QPainterPath/qpainterpath_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QPoint/qpoint_wrap.h"
#include "QtGui/QFont/qfont_wrap.h"

Napi::FunctionReference QPainterPathWrap::constructor;

Napi::Object QPainterPathWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QPainterPath";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("moveTo", &QPainterPathWrap::moveTo),
       InstanceMethod("addRect", &QPainterPathWrap::addRect),
       InstanceMethod("lineTo", &QPainterPathWrap::lineTo),
       InstanceMethod("cubicTo", &QPainterPathWrap::cubicTo),
       InstanceMethod("quadTo", &QPainterPathWrap::quadTo),
       InstanceMethod("closeSubpath", &QPainterPathWrap::closeSubpath),
       InstanceMethod("addEllipse", &QPainterPathWrap::addEllipse),
       InstanceMethod("addPath", &QPainterPathWrap::addPath),
       InstanceMethod("addRect", &QPainterPathWrap::addRect),
       InstanceMethod("addRoundedRect", &QPainterPathWrap::addRoundedRect),
       InstanceMethod("addText", &QPainterPathWrap::addText),
       InstanceMethod("angleAtPercent", &QPainterPathWrap::angleAtPercent),
       InstanceMethod("arcMoveTo", &QPainterPathWrap::arcMoveTo),
       InstanceMethod("arcTo", &QPainterPathWrap::arcTo),
       InstanceMethod("boundingRect", &QPainterPathWrap::boundingRect),
       InstanceMethod("capacity", &QPainterPathWrap::capacity),
       InstanceMethod("clear", &QPainterPathWrap::clear),
       InstanceMethod("connectPath", &QPainterPathWrap::connectPath),
       InstanceMethod("controlPointRect", &QPainterPathWrap::controlPointRect),
       InstanceMethod("currentPosition", &QPainterPathWrap::currentPosition),
       InstanceMethod("elementCount", &QPainterPathWrap::elementCount),
       InstanceMethod("fillRule", &QPainterPathWrap::fillRule),
       InstanceMethod("isEmpty", &QPainterPathWrap::isEmpty),
       InstanceMethod("length", &QPainterPathWrap::length),
       InstanceMethod("percentAtLength", &QPainterPathWrap::percentAtLength),
       InstanceMethod("pointAtPercent", &QPainterPathWrap::pointAtPercent),
       InstanceMethod("reserve", &QPainterPathWrap::reserve),
       InstanceMethod("setElementPositionAt",
                      &QPainterPathWrap::setElementPositionAt),
       InstanceMethod("setFillRule", &QPainterPathWrap::setFillRule),
       InstanceMethod("slopeAtPercent", &QPainterPathWrap::slopeAtPercent),
       InstanceMethod("swap", &QPainterPathWrap::swap),
       InstanceMethod("translate", &QPainterPathWrap::translate),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QPainterPathWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QPainterPath* QPainterPathWrap::getInternalInstance() {
  return this->instance.get();
}
QPainterPathWrap::~QPainterPathWrap() { this->instance.reset(); }

QPainterPathWrap::QPainterPathWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QPainterPathWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 0) {
    this->instance = std::make_unique<QPainterPath>();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}
Napi::Value QPainterPathWrap::moveTo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  this->instance->moveTo(x, y);
  return env.Null();
}
Napi::Value QPainterPathWrap::addRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  int width = info[2].As<Napi::Number>().Int32Value();
  int height = info[3].As<Napi::Number>().Int32Value();
  this->instance->addRect(x, y, width, height);
  return env.Null();
}
Napi::Value QPainterPathWrap::lineTo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  this->instance->lineTo(x, y);
  return env.Null();
}
Napi::Value QPainterPathWrap::cubicTo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int c1X = info[0].As<Napi::Number>().Int32Value();
  int c1Y = info[1].As<Napi::Number>().Int32Value();
  int c2X = info[2].As<Napi::Number>().Int32Value();
  int c2Y = info[3].As<Napi::Number>().Int32Value();
  int endPointX = info[4].As<Napi::Number>().Int32Value();
  int endPointY = info[5].As<Napi::Number>().Int32Value();
  this->instance->cubicTo(c1X, c1Y, c2X, c2Y, endPointX, endPointY);
  return env.Null();
}
Napi::Value QPainterPathWrap::quadTo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int cx = info[0].As<Napi::Number>().Int32Value();
  int cy = info[1].As<Napi::Number>().Int32Value();
  int endPointX = info[2].As<Napi::Number>().Int32Value();
  int endPointY = info[3].As<Napi::Number>().Int32Value();
  this->instance->quadTo(cx, cy, endPointX, endPointY);
  return env.Null();
}
Napi::Value QPainterPathWrap::closeSubpath(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->closeSubpath();
  return env.Null();
}

Napi::Value QPainterPathWrap::addEllipse(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  int width = info[2].As<Napi::Number>().Int32Value();
  int height = info[3].As<Napi::Number>().Int32Value();
  this->instance->addEllipse(x, y, width, height);
  return env.Null();
}

Napi::Value QPainterPathWrap::addPath(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() < 1) {
    Napi::TypeError::New(env, "No Path Specified to addPath")
        .ThrowAsJavaScriptException();
  }
  Napi::Object pathObject = info[0].As<Napi::Object>();
  QPainterPathWrap* pathWrap =
      Napi::ObjectWrap<QPainterPathWrap>::Unwrap(pathObject);
  QPainterPath* pathToAdd = pathWrap->getInternalInstance();
  this->instance->addPath(*pathToAdd);
  return env.Null();
}

// Napi::Value addPolygon(const Napi::CallbackInfo& info) {

// }

Napi::Value QPainterPathWrap::addRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  /*if(info.Length() == 1) {
      Napi::Object rectObj = info[0].As<Napi::Object>();
      Napi::ObjectWrap<QRectF>::Unwrap(rectObj);
  QPainterPath* myPath = pathWrap->getInternalInstance();
  myPath->addRect(*rectWrap);
  return env.Null();
  }
  else */
  if (info.Length() == 4) {
    qreal x = info[0].As<Napi::Number>().DoubleValue();
    qreal y = info[1].As<Napi::Number>().DoubleValue();
    qreal width = info[2].As<Napi::Number>().DoubleValue();
    qreal height = info[3].As<Napi::Number>().DoubleValue();
    this->instance->addRect(x, y, width, height);
  } else {
    Napi::TypeError::New(env, "Invalid number of arguments to addRect")
        .ThrowAsJavaScriptException();
  }
  return env.Null();
}

Napi::Value QPainterPathWrap::addRoundedRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() >= 6) {
    qreal x = info[0].As<Napi::Number>().DoubleValue();
    qreal y = info[1].As<Napi::Number>().DoubleValue();
    qreal width = info[2].As<Napi::Number>().DoubleValue();
    qreal height = info[3].As<Napi::Number>().DoubleValue();
    qreal xRadius = info[4].As<Napi::Number>().DoubleValue();
    qreal yRadius = info[5].As<Napi::Number>().DoubleValue();
    if (info.Length() >= 7) {
      Qt::SizeMode mode =
          static_cast<Qt::SizeMode>(info[6].As<Napi::Number>().Int32Value());
      this->instance->addRoundedRect(x, y, width, height, xRadius, yRadius,
                                     mode);
    } else {
      this->instance->addRoundedRect(x, y, width, height, xRadius, yRadius);
    }
    this->instance->addRect(x, y, width, height);
  } else {
    Napi::TypeError::New(env, "Invalid number of arguments to addRoundedRect")
        .ThrowAsJavaScriptException();
  }
  return env.Null();
}

Napi::Value QPainterPathWrap::addText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() < 4) {
    Napi::TypeError::New(env, "Invalid number of arguments to addText")
        .ThrowAsJavaScriptException();
  }
  qreal x = info[0].As<Napi::Number>().DoubleValue();
  qreal y = info[1].As<Napi::Number>().DoubleValue();
  Napi::Object fontObject = info[2].As<Napi::Object>();
  QFontWrap* fontWrap = Napi::ObjectWrap<QFontWrap>::Unwrap(fontObject);
  QFont* qfont = fontWrap->getInternalInstance();
  Napi::String text = info[3].As<Napi::String>();
  this->instance->addText(x, y, *qfont,
                          QString::fromStdString(text.Utf8Value()));
  return env.Null();
}

Napi::Value QPainterPathWrap::angleAtPercent(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  if (info.Length() < 1) {
    Napi::TypeError::New(env, "Invalid number of arguments to angleAtPercent")
        .ThrowAsJavaScriptException();
  }
  qreal t = info[0].As<Napi::Number>().DoubleValue();
  qreal v = static_cast<qreal>(this->instance->angleAtPercent(t));
  return Napi::Number::From(env, v);
}

Napi::Value QPainterPathWrap::arcMoveTo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() < 5) {
    Napi::TypeError::New(env, "Invalid number of arguments to arcMoveTo")
        .ThrowAsJavaScriptException();
  }
  qreal x = info[0].As<Napi::Number>().DoubleValue();
  qreal y = info[1].As<Napi::Number>().DoubleValue();
  qreal width = info[2].As<Napi::Number>().DoubleValue();
  qreal height = info[3].As<Napi::Number>().DoubleValue();
  qreal angle = info[4].As<Napi::Number>().DoubleValue();
  this->instance->arcMoveTo(x, y, width, height, angle);

  return env.Null();
}

Napi::Value QPainterPathWrap::arcTo(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() < 6) {
    Napi::TypeError::New(env, "Invalid number of arguments to arcTo")
        .ThrowAsJavaScriptException();
  }
  qreal x = info[0].As<Napi::Number>().DoubleValue();
  qreal y = info[1].As<Napi::Number>().DoubleValue();
  qreal width = info[2].As<Napi::Number>().DoubleValue();
  qreal height = info[3].As<Napi::Number>().DoubleValue();
  qreal startAngle = info[4].As<Napi::Number>().DoubleValue();
  qreal sweepLength = info[4].As<Napi::Number>().DoubleValue();
  this->instance->arcTo(x, y, width, height, startAngle, sweepLength);

  return env.Null();
}

Napi::Value QPainterPathWrap::boundingRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QRectF rect = static_cast<QRectF>(this->instance->boundingRect());
  qreal x = static_cast<qreal>(rect.x());
  qreal y = static_cast<qreal>(rect.y());
  qreal width = static_cast<qreal>(rect.width());
  qreal height = static_cast<qreal>(rect.height());
  Napi::Object obj = Napi::Object::New(env);
  obj.Set("x", Napi::Number::From(env, x));
  obj.Set("y", Napi::Number::From(env, y));
  obj.Set("width", Napi::Number::From(env, width));
  obj.Set("height", Napi::Number::From(env, height));
  return obj;
}

Napi::Value QPainterPathWrap::capacity(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int v = static_cast<int>(this->instance->capacity());
  return Napi::Number::From(env, v);
}

Napi::Value QPainterPathWrap::clear(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->clear();
  return env.Null();
}

Napi::Value QPainterPathWrap::connectPath(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() < 1) {
    Napi::TypeError::New(env, "No Path Specified to connectPath")
        .ThrowAsJavaScriptException();
  }
  Napi::Object pathObject = info[0].As<Napi::Object>();
  QPainterPathWrap* pathWrap =
      Napi::ObjectWrap<QPainterPathWrap>::Unwrap(pathObject);
  QPainterPath* pathToAdd = pathWrap->getInternalInstance();
  this->instance->connectPath(*pathToAdd);
  return env.Null();
}

Napi::Value QPainterPathWrap::controlPointRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QRectF rect = static_cast<QRectF>(this->instance->controlPointRect());
  qreal x = static_cast<qreal>(rect.x());
  qreal y = static_cast<qreal>(rect.y());
  qreal width = static_cast<qreal>(rect.width());
  qreal height = static_cast<qreal>(rect.height());
  Napi::Object obj = Napi::Object::New(env);
  obj.Set("x", Napi::Number::From(env, x));
  obj.Set("y", Napi::Number::From(env, y));
  obj.Set("width", Napi::Number::From(env, width));
  obj.Set("height", Napi::Number::From(env, height));
  return obj;
}

Napi::Value QPainterPathWrap::currentPosition(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QPointF point = static_cast<QPointF>(this->instance->currentPosition());
  qreal x = static_cast<qreal>(point.x());
  qreal y = static_cast<qreal>(point.y());
  Napi::Object obj = Napi::Object::New(env);
  obj.Set("x", Napi::Number::From(env, x));
  obj.Set("y", Napi::Number::From(env, y));
  return obj;
}

Napi::Value QPainterPathWrap::elementCount(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int v = static_cast<int>(this->instance->elementCount());
  return Napi::Number::From(env, v);
}
Napi::Value QPainterPathWrap::fillRule(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int v = static_cast<int>(this->instance->fillRule());
  return Napi::Number::From(env, v);
}

Napi::Value QPainterPathWrap::isEmpty(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool v = static_cast<bool>(this->instance->isEmpty());
  return Napi::Number::From(env, v);
}
Napi::Value QPainterPathWrap::length(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal v = static_cast<qreal>(this->instance->length());
  return Napi::Number::From(env, v);
}
Napi::Value QPainterPathWrap::percentAtLength(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  qreal v = static_cast<qreal>(this->instance->percentAtLength());
  return Napi::Number::From(env, v);
}
Napi::Value QPainterPathWrap::pointAtPercent(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QPointF point = static_cast<QPointF>(this->instance->pointAtPercent());
  qreal x = static_cast<qreal>(point.x());
  qreal y = static_cast<qreal>(point.y());
  Napi::Object obj = Napi::Object::New(env);
  obj.Set("x", Napi::Number::From(env, x));
  obj.Set("y", Napi::Number::From(env, y));
  return obj;
}
Napi::Value QPainterPathWrap::reserve(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->reserve();
  return env.Null();
}
Napi::Value QPainterPathWrap::setElementPositionAt(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int index = info[0].As<Napi::Number>().Int32Value();
  qreal x = info[1].As<Napi::Number>().DoubleValue();
  qreal y = info[2].As<Napi::Number>().DoubleValue();
  this->instance->setElementPositionAt(index, x, y);
  return env.Null();
}
Napi::Value QPainterPathWrap::setFillRule(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int v = info[0].As<Napi::Number>().Int32Value();
  this->instance->setFillRule(v);
  return env.Null();
}

Napi::Value QPainterPathWrap::slopeAtPercent(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  qreal v = info[0].As<Napi::Number>().DoubleValue();
  qreal slope = static_cast<qreal>(this->instance->slopeAtPercent(v));
  return Napi::Number::From(env, slope);
}
// Napi::Value subtracted(const Napi::CallbackInfo& info);
Napi::Value QPainterPathWrap::swap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Object pathObject = info[0].As<Napi::Object>();
  QPainterPathWrap* pathWrap =
      Napi::ObjectWrap<QPainterPathWrap>::Unwrap(pathObject);
  QPainterPath* pathToAdd = pathWrap->getInternalInstance();
  this->instance->swap(*pathToAdd);
  return env.Null();
}
// Napi::Value toFillPolygon(const Napi::CallbackInfo& info);
// Napi::Value toReversed(const Napi::CallbackInfo& info);
// Napi::Value toSubpathPolygons(const Napi::CallbackInfo& info);
Napi::Value QPainterPathWrap::translate(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  qreal x = info[0].As<Napi::Number>().DoubleValue();
  qreal y = info[1].As<Napi::Number>().DoubleValue();
  this->instance->translate(x, y);
  return env.Null();
}
// Napi::Value translated(const Napi::CallbackInfo& info);
// Napi::Value united(const Napi::CallbackInfo& info);
