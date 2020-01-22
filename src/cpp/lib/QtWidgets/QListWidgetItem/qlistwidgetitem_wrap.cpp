#include "QtWidgets/QListWidgetItem/qlistwidgetitem_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QSize/qsize_wrap.h"
#include "QtCore/QVariant/qvariant_wrap.h"
#include "QtGui/QIcon/qicon_wrap.h"
#include "core/Component/component_wrap.h"

Napi::FunctionReference QListWidgetItemWrap::constructor;

Napi::Object QListWidgetItemWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QListWidgetItem";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setCheckState", &QListWidgetItemWrap::setCheckState),
       InstanceMethod("checkState", &QListWidgetItemWrap::checkState),
       InstanceMethod("data", &QListWidgetItemWrap::data),
       InstanceMethod("setFlags", &QListWidgetItemWrap::setFlags),
       InstanceMethod("flags", &QListWidgetItemWrap::flags),
       InstanceMethod("setIcon", &QListWidgetItemWrap::setIcon),
       InstanceMethod("icon", &QListWidgetItemWrap::icon),
       InstanceMethod("setHidden", &QListWidgetItemWrap::setHidden),
       InstanceMethod("isHidden", &QListWidgetItemWrap::isHidden),
       InstanceMethod("setSelected", &QListWidgetItemWrap::setSelected),
       InstanceMethod("isSelected", &QListWidgetItemWrap::isSelected),
       InstanceMethod("setSizeHint", &QListWidgetItemWrap::setSizeHint),
       InstanceMethod("sizeHint", &QListWidgetItemWrap::sizeHint),
       InstanceMethod("setStatusTip", &QListWidgetItemWrap::setStatusTip),
       InstanceMethod("statusTip", &QListWidgetItemWrap::statusTip),
       InstanceMethod("setText", &QListWidgetItemWrap::setText),
       InstanceMethod("text", &QListWidgetItemWrap::text),
       InstanceMethod("setTextAlignment",
                      &QListWidgetItemWrap::setTextAlignment),
       InstanceMethod("textAlignment", &QListWidgetItemWrap::textAlignment),
       InstanceMethod("setToolTip", &QListWidgetItemWrap::setToolTip),
       InstanceMethod("toolTip", &QListWidgetItemWrap::toolTip),
       InstanceMethod("setWhatsThis", &QListWidgetItemWrap::setWhatsThis),
       InstanceMethod("whatsThis", &QListWidgetItemWrap::whatsThis),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QListWidgetItemWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QListWidgetItem* QListWidgetItemWrap::getInternalInstance() {
  return this->instance;
}
QListWidgetItemWrap::~QListWidgetItemWrap() { delete this->instance; }

QListWidgetItemWrap::QListWidgetItemWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QListWidgetItemWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    QString text =
        QString::fromUtf8(info[0].As<Napi::String>().Utf8Value().c_str());
    this->instance = new QListWidgetItem(text);
  } else if (info.Length() == 0) {
    this->instance = new QListWidgetItem();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

Napi::Value QListWidgetItemWrap::setCheckState(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int state = info[0].As<Napi::Number>().Int32Value();
  this->instance->setCheckState(static_cast<Qt::CheckState>(state));
  return env.Null();
}

Napi::Value QListWidgetItemWrap::checkState(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int state = static_cast<int>(this->instance->checkState());
  return Napi::Value::From(env, state);
}

Napi::Value QListWidgetItemWrap::data(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int role = info[0].As<Napi::Number>().Int32Value();
  QVariant data = this->instance->data(role);
  auto instance = QVariantWrap::constructor.New(
      {Napi::External<QVariant>::New(env, new QVariant(data))});
  return instance;
}

Napi::Value QListWidgetItemWrap::setFlags(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int flags = info[0].As<Napi::Number>().Int32Value();
  this->instance->setFlags(static_cast<Qt::ItemFlags>(flags));
  return env.Null();
}

Napi::Value QListWidgetItemWrap::flags(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int flags = static_cast<int>(this->instance->flags());
  return Napi::Value::From(env, flags);
}

Napi::Value QListWidgetItemWrap::setIcon(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object iconObject = info[0].As<Napi::Object>();
  QIconWrap* iconWrap = Napi::ObjectWrap<QIconWrap>::Unwrap(iconObject);
  this->instance->setIcon(*iconWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QListWidgetItemWrap::icon(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QIcon icon = this->instance->icon();
  auto instance = QIconWrap::constructor.New(
      {Napi::External<QIcon>::New(env, new QIcon(icon))});
  return instance;
}

Napi::Value QListWidgetItemWrap::setHidden(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  bool hide = info[0].As<Napi::Boolean>().Value();
  this->instance->setHidden(hide);
  return env.Null();
}

Napi::Value QListWidgetItemWrap::isHidden(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Value::From(env, this->instance->isHidden());
}

Napi::Value QListWidgetItemWrap::setSelected(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  bool select = info[0].As<Napi::Boolean>().Value();
  this->instance->setSelected(select);
  return env.Null();
}

Napi::Value QListWidgetItemWrap::isSelected(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Value::From(env, this->instance->isSelected());
}

Napi::Value QListWidgetItemWrap::setSizeHint(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object sizeObject = info[0].As<Napi::Object>();
  QSizeWrap* sizeWrap = Napi::ObjectWrap<QSizeWrap>::Unwrap(sizeObject);
  this->instance->setSizeHint(*sizeWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QListWidgetItemWrap::sizeHint(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QSize size = this->instance->sizeHint();
  auto instance = QSizeWrap::constructor.New({Napi::External<QSize>::New(
      env, new QSize(size.width(), size.height()))});
  return instance;
}

Napi::Value QListWidgetItemWrap::setStatusTip(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string statusTip = info[0].As<Napi::String>().Utf8Value();
  this->instance->setStatusTip(QString::fromUtf8(statusTip.c_str()));
  return env.Null();
}

Napi::Value QListWidgetItemWrap::statusTip(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string statusTip = this->instance->text().toStdString();
  return Napi::String::New(env, statusTip);
}

Napi::Value QListWidgetItemWrap::setText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string text = info[0].As<Napi::String>().Utf8Value();
  this->instance->setText(QString::fromUtf8(text.c_str()));
  return env.Null();
}

Napi::Value QListWidgetItemWrap::text(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string text = this->instance->text().toStdString();
  return Napi::String::New(env, text);
}

Napi::Value QListWidgetItemWrap::setTextAlignment(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int alignment = info[0].As<Napi::Number>().Int32Value();
  this->instance->setTextAlignment(alignment);
  return env.Null();
}

Napi::Value QListWidgetItemWrap::textAlignment(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int alignment = this->instance->textAlignment();
  return Napi::Number::New(env, alignment);
}

Napi::Value QListWidgetItemWrap::setToolTip(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string toolTip = info[0].As<Napi::String>().Utf8Value();
  this->instance->setToolTip(QString::fromUtf8(toolTip.c_str()));
  return env.Null();
}

Napi::Value QListWidgetItemWrap::toolTip(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string toolTip = this->instance->toolTip().toStdString();
  return Napi::String::New(env, toolTip);
}

Napi::Value QListWidgetItemWrap::setWhatsThis(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string whatsThis = info[0].As<Napi::String>().Utf8Value();
  this->instance->setWhatsThis(QString::fromUtf8(whatsThis.c_str()));
  return env.Null();
}

Napi::Value QListWidgetItemWrap::whatsThis(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string whatsThis = this->instance->whatsThis().toStdString();
  return Napi::String::New(env, whatsThis);
}
