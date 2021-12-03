#include "QtWidgets/QTabBar/qtabbar_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtCore/QPoint/qpoint_wrap.h"
#include "QtCore/QRect/qrect_wrap.h"
#include "QtGui/QColor/qcolor_wrap.h"
#include "QtGui/QIcon/qicon_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QTabBarWrap::constructor;

Napi::Object QTabBarWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QTabBar";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setAccessibleTabName",
                      &QTabBarWrap::setAccessibleTabName),
       InstanceMethod("accessibleTabName", &QTabBarWrap::accessibleTabName),
       InstanceMethod("addTab", &QTabBarWrap::addTab),
       InstanceMethod("insertTab", &QTabBarWrap::insertTab),
       InstanceMethod("setTabEnabled", &QTabBarWrap::setTabEnabled),
       InstanceMethod("isTabEnabled", &QTabBarWrap::isTabEnabled),
       InstanceMethod("moveTab", &QTabBarWrap::moveTab),
       InstanceMethod("removeTab", &QTabBarWrap::removeTab),
       InstanceMethod("setTabButton", &QTabBarWrap::setTabButton),
       InstanceMethod("setTabData", &QTabBarWrap::setTabData),
       InstanceMethod("tabData", &QTabBarWrap::tabData),
       InstanceMethod("setTabIcon", &QTabBarWrap::setTabIcon),
       InstanceMethod("tabIcon", &QTabBarWrap::tabIcon),
       InstanceMethod("setTabText", &QTabBarWrap::setTabText),
       InstanceMethod("tabText", &QTabBarWrap::tabText),
       InstanceMethod("setTabTextColor", &QTabBarWrap::setTabTextColor),
       InstanceMethod("tabTextColor", &QTabBarWrap::tabTextColor),
       InstanceMethod("setTabToolTip", &QTabBarWrap::setTabToolTip),
       InstanceMethod("tabToolTip", &QTabBarWrap::tabToolTip),
       InstanceMethod("setTabWhatsThis", &QTabBarWrap::setTabWhatsThis),
       InstanceMethod("tabWhatsThis", &QTabBarWrap::tabWhatsThis),
       InstanceMethod("tabAt", &QTabBarWrap::tabAt),
       InstanceMethod("tabRect", &QTabBarWrap::tabRect),
       QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QTabBarWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NTabBar* QTabBarWrap::getInternalInstance() { return this->instance; }

QTabBarWrap::~QTabBarWrap() {
  if (!this->disableDeletion) {
    extrautils::safeDelete(this->instance);
  }
}

QTabBarWrap::QTabBarWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QTabBarWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() > 0 && info[0].IsExternal()) {
    // --- if external ---
    this->instance = info[0].As<Napi::External<NTabBar>>().Data();
    if (info.Length() == 2) {
      this->disableDeletion = info[1].As<Napi::Boolean>().Value();
    }
  } else {
    // --- regular cases ---
    if (info.Length() == 1) {
      Napi::Object parentObject = info[0].As<Napi::Object>();
      NodeWidgetWrap* parentWidgetWrap =
          Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
      this->instance = new NTabBar(parentWidgetWrap->getInternalInstance());
    } else if (info.Length() == 0) {
      this->instance = new NTabBar();
    } else {
      Napi::TypeError::New(env, "Wrong number of arguments")
          .ThrowAsJavaScriptException();
    }
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

Napi::Value QTabBarWrap::setAccessibleTabName(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  std::string napiName = info[1].As<Napi::String>().Utf8Value();
  QString name = QString::fromUtf8(napiName.c_str());
  this->instance->setAccessibleTabName(index, name);
  return env.Null();
}

Napi::Value QTabBarWrap::accessibleTabName(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  QString tabName = this->instance->accessibleTabName(index);
  return Napi::String::New(env, tabName.toStdString());
}

Napi::Value QTabBarWrap::addTab(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = 0;
  if (info.Length() == 2) {
    Napi::Object iconObject = info[0].As<Napi::Object>();
    QIconWrap* iconWrap = Napi::ObjectWrap<QIconWrap>::Unwrap(iconObject);
    std::string napiText = info[1].As<Napi::String>().Utf8Value();
    QString text = QString::fromUtf8(napiText.c_str());
    index = this->instance->addTab(*iconWrap->getInternalInstance(), text);
  } else {
    std::string napiText = info[0].As<Napi::String>().Utf8Value();
    QString text = QString::fromUtf8(napiText.c_str());
    index = this->instance->addTab(text);
  }
  return Napi::Number::New(env, index);
}

Napi::Value QTabBarWrap::insertTab(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int result = 0;
  if (info.Length() == 3) {
    int index = info[0].As<Napi::Number>().Int32Value();
    Napi::Object iconObject = info[1].As<Napi::Object>();
    QIconWrap* iconWrap = Napi::ObjectWrap<QIconWrap>::Unwrap(iconObject);
    std::string napiText = info[2].As<Napi::String>().Utf8Value();
    QString text = QString::fromUtf8(napiText.c_str());
    result = this->instance->insertTab(index, *iconWrap->getInternalInstance(),
                                       text);
  } else {
    int index = info[0].As<Napi::Number>().Int32Value();
    std::string napiText = info[1].As<Napi::String>().Utf8Value();
    QString text = QString::fromUtf8(napiText.c_str());
    result = this->instance->insertTab(index, text);
  }
  return Napi::Number::New(env, result);
}

Napi::Value QTabBarWrap::setTabEnabled(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  bool enabled = info[1].As<Napi::Boolean>().Value();
  this->instance->setTabEnabled(index, enabled);
  return env.Null();
}

Napi::Value QTabBarWrap::isTabEnabled(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  bool enabled = this->instance->isTabEnabled(index);
  return Napi::Boolean::New(env, enabled);
}

Napi::Value QTabBarWrap::moveTab(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int from = info[0].As<Napi::Number>().Int32Value();
  int to = info[1].As<Napi::Number>().Int32Value();
  this->instance->moveTab(from, to);
  return env.Null();
}

Napi::Value QTabBarWrap::removeTab(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  this->instance->removeTab(index);
  return env.Null();
}

Napi::Value QTabBarWrap::setTabButton(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  int position = info[1].As<Napi::Number>().Int32Value();
  Napi::Object widgetObject = info[2].As<Napi::Object>();
  NodeWidgetWrap* widgetWrap =
      Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(widgetObject);
  this->instance->setTabButton(index,
                               static_cast<QTabBar::ButtonPosition>(position),
                               widgetWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QTabBarWrap::setTabData(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  Napi::Object variantObject = info[1].As<Napi::Object>();
  QVariantWrap* variantWrap =
      Napi::ObjectWrap<QVariantWrap>::Unwrap(variantObject);
  this->instance->setTabData(index, *variantWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QTabBarWrap::tabData(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  QVariant variant = this->instance->tabData(index);
  auto instance = QVariantWrap::constructor.New(
      {Napi::External<QVariant>::New(env, new QVariant(variant))});
  return instance;
}

Napi::Value QTabBarWrap::setTabIcon(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  Napi::Object iconObject = info[1].As<Napi::Object>();
  QIconWrap* iconWrap = Napi::ObjectWrap<QIconWrap>::Unwrap(iconObject);
  this->instance->setTabIcon(index, *iconWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QTabBarWrap::tabIcon(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  QIcon icon = this->instance->tabIcon(index);
  auto instance = QIconWrap::constructor.New(
      {Napi::External<QIcon>::New(env, new QIcon(icon))});
  return instance;
}

Napi::Value QTabBarWrap::setTabText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  std::string napiText = info[1].As<Napi::String>().Utf8Value();
  QString text = QString::fromUtf8(napiText.c_str());
  this->instance->setTabText(index, text);
  return env.Null();
}

Napi::Value QTabBarWrap::tabText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  QString text = this->instance->tabText(index);
  return Napi::String::New(env, text.toStdString());
}

Napi::Value QTabBarWrap::setTabTextColor(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  Napi::Object colorObject = info[1].As<Napi::Object>();
  QColorWrap* colorWrap = Napi::ObjectWrap<QColorWrap>::Unwrap(colorObject);
  this->instance->setTabTextColor(index, *colorWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QTabBarWrap::tabTextColor(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  QColor color = this->instance->tabTextColor(index);
  auto instance = QColorWrap::constructor.New(
      {Napi::External<QColor>::New(env, new QColor(color))});
  return instance;
}

Napi::Value QTabBarWrap::setTabToolTip(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  std::string napiTip = info[1].As<Napi::String>().Utf8Value();
  QString tip = QString::fromUtf8(napiTip.c_str());
  this->instance->setTabToolTip(index, tip);
  return env.Null();
}

Napi::Value QTabBarWrap::tabToolTip(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  QString tip = this->instance->tabToolTip(index);
  return Napi::String::New(env, tip.toStdString());
}

Napi::Value QTabBarWrap::setTabWhatsThis(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  std::string napiText = info[1].As<Napi::String>().Utf8Value();
  QString text = QString::fromUtf8(napiText.c_str());
  this->instance->setTabWhatsThis(index, text);
  return env.Null();
}

Napi::Value QTabBarWrap::tabWhatsThis(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  QString text = this->instance->tabWhatsThis(index);
  return Napi::String::New(env, text.toStdString());
}

Napi::Value QTabBarWrap::tabAt(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object pointObject = info[0].As<Napi::Object>();
  QPointWrap* pointWrap = Napi::ObjectWrap<QPointWrap>::Unwrap(pointObject);
  int index = this->instance->tabAt(*pointWrap->getInternalInstance());
  return Napi::Number::New(env, index);
}

Napi::Value QTabBarWrap::tabRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int index = info[0].As<Napi::Number>().Int32Value();
  QRect rect = this->instance->tabRect(index);
  auto instance = QRectWrap::constructor.New({Napi::External<QRect>::New(
      env, new QRect(rect.x(), rect.y(), rect.width(), rect.height()))});
  return instance;
}
