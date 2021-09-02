#include "QtWidgets/QTableWidgetItem/qtablewidgetitem_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QSize/qsize_wrap.h"
#include "QtCore/QVariant/qvariant_wrap.h"
#include "QtGui/QBrush/qbrush_wrap.h"
#include "QtGui/QFont/qfont_wrap.h"
#include "QtGui/QIcon/qicon_wrap.h"
#include "core/Component/component_wrap.h"

Napi::FunctionReference QTableWidgetItemWrap::constructor;

Napi::Object QTableWidgetItemWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QTableWidgetItem";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("row", &QTableWidgetItemWrap::row),
       InstanceMethod("column", &QTableWidgetItemWrap::column),
       InstanceMethod("setBackground", &QTableWidgetItemWrap::setBackground),
       InstanceMethod("background", &QTableWidgetItemWrap::background),
       InstanceMethod("setCheckState", &QTableWidgetItemWrap::setCheckState),
       InstanceMethod("checkState", &QTableWidgetItemWrap::checkState),
       InstanceMethod("setData", &QTableWidgetItemWrap::setData),
       InstanceMethod("data", &QTableWidgetItemWrap::data),
       InstanceMethod("setFlags", &QTableWidgetItemWrap::setFlags),
       InstanceMethod("flags", &QTableWidgetItemWrap::flags),
       InstanceMethod("setFont", &QTableWidgetItemWrap::setFont),
       InstanceMethod("font", &QTableWidgetItemWrap::font),
       InstanceMethod("setForeground", &QTableWidgetItemWrap::setForeground),
       InstanceMethod("foreground", &QTableWidgetItemWrap::foreground),
       InstanceMethod("setIcon", &QTableWidgetItemWrap::setIcon),
       InstanceMethod("icon", &QTableWidgetItemWrap::icon),
       InstanceMethod("setSelected", &QTableWidgetItemWrap::setSelected),
       InstanceMethod("isSelected", &QTableWidgetItemWrap::isSelected),
       InstanceMethod("setSizeHint", &QTableWidgetItemWrap::setSizeHint),
       InstanceMethod("sizeHint", &QTableWidgetItemWrap::sizeHint),
       InstanceMethod("setStatusTip", &QTableWidgetItemWrap::setStatusTip),
       InstanceMethod("statusTip", &QTableWidgetItemWrap::statusTip),
       InstanceMethod("setText", &QTableWidgetItemWrap::setText),
       InstanceMethod("text", &QTableWidgetItemWrap::text),
       InstanceMethod("setTextAlignment",
                      &QTableWidgetItemWrap::setTextAlignment),
       InstanceMethod("textAlignment", &QTableWidgetItemWrap::textAlignment),
       InstanceMethod("setToolTip", &QTableWidgetItemWrap::setToolTip),
       InstanceMethod("toolTip", &QTableWidgetItemWrap::toolTip),
       InstanceMethod("setWhatsThis", &QTableWidgetItemWrap::setWhatsThis),
       InstanceMethod("whatsThis", &QTableWidgetItemWrap::whatsThis),
       InstanceMethod("type$", &QTableWidgetItemWrap::type),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QTableWidgetItemWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QTableWidgetItem* QTableWidgetItemWrap::getInternalInstance() {
  return this->instance;
}
QTableWidgetItemWrap::~QTableWidgetItemWrap() {
  if (!this->disableDeletion) {
    delete this->instance;
  }
}

QTableWidgetItemWrap::QTableWidgetItemWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QTableWidgetItemWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() > 0 && info[0].IsExternal()) {
    // --- if external ---
    this->instance = info[0].As<Napi::External<QTableWidgetItem>>().Data();
    if (info.Length() == 2) {
      this->disableDeletion = info[1].As<Napi::Boolean>().Value();
    }
  } else {
    if (info.Length() == 1) {
      QString text =
          QString::fromUtf8(info[0].As<Napi::String>().Utf8Value().c_str());
      this->instance = new QTableWidgetItem(text);
    } else if (info.Length() == 0) {
      this->instance = new QTableWidgetItem();
    } else {
      Napi::TypeError::New(env,
                           "QTableWidgetItemWrap: Wrong number of arguments")
          .ThrowAsJavaScriptException();
    }
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

Napi::Value QTableWidgetItemWrap::row(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int state = static_cast<int>(this->instance->row());
  return Napi::Number::New(env, state);
}

Napi::Value QTableWidgetItemWrap::column(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int state = static_cast<int>(this->instance->column());
  return Napi::Number::New(env, state);
}

Napi::Value QTableWidgetItemWrap::setBackground(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object brushObject = info[0].As<Napi::Object>();
  QBrushWrap* brushWrap = Napi::ObjectWrap<QBrushWrap>::Unwrap(brushObject);
  this->instance->setBackground(*brushWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QTableWidgetItemWrap::background(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QBrush brush = this->instance->background();
  auto instance = QBrushWrap::constructor.New(
      {Napi::External<QBrush>::New(env, new QBrush(brush))});
  return instance;
}

Napi::Value QTableWidgetItemWrap::setCheckState(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int state = info[0].As<Napi::Number>().Int32Value();
  this->instance->setCheckState(static_cast<Qt::CheckState>(state));
  return env.Null();
}

Napi::Value QTableWidgetItemWrap::checkState(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int state = static_cast<int>(this->instance->checkState());
  return Napi::Number::New(env, state);
}

Napi::Value QTableWidgetItemWrap::setData(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int role = info[0].As<Napi::Number>().Int32Value();
  Napi::Object variantObject = info[1].As<Napi::Object>();
  QVariantWrap* variantWrap =
      Napi::ObjectWrap<QVariantWrap>::Unwrap(variantObject);
  this->instance->setData(role, *variantWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QTableWidgetItemWrap::data(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int role = info[0].As<Napi::Number>().Int32Value();
  QVariant data = this->instance->data(role);
  auto instance = QVariantWrap::constructor.New(
      {Napi::External<QVariant>::New(env, new QVariant(data))});
  return instance;
}

Napi::Value QTableWidgetItemWrap::setFlags(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int flags = info[0].As<Napi::Number>().Int32Value();
  this->instance->setFlags(static_cast<Qt::ItemFlags>(flags));
  return env.Null();
}

Napi::Value QTableWidgetItemWrap::flags(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int flags = static_cast<int>(this->instance->flags());
  return Napi::Number::New(env, flags);
}

Napi::Value QTableWidgetItemWrap::setFont(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object fontObject = info[0].As<Napi::Object>();
  QFontWrap* fontWrap = Napi::ObjectWrap<QFontWrap>::Unwrap(fontObject);
  this->instance->setFont(*fontWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QTableWidgetItemWrap::font(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QFont font = this->instance->font();
  auto instance = QFontWrap::constructor.New(
      {Napi::External<QFont>::New(env, new QFont(font))});
  return instance;
}

Napi::Value QTableWidgetItemWrap::setForeground(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object brushObject = info[0].As<Napi::Object>();
  QBrushWrap* brushWrap = Napi::ObjectWrap<QBrushWrap>::Unwrap(brushObject);
  this->instance->setForeground(*brushWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QTableWidgetItemWrap::foreground(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QBrush brush = this->instance->foreground();
  auto instance = QBrushWrap::constructor.New(
      {Napi::External<QBrush>::New(env, new QBrush(brush))});
  return instance;
}

Napi::Value QTableWidgetItemWrap::setIcon(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object iconObject = info[0].As<Napi::Object>();
  QIconWrap* iconWrap = Napi::ObjectWrap<QIconWrap>::Unwrap(iconObject);
  this->instance->setIcon(*iconWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QTableWidgetItemWrap::icon(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QIcon icon = this->instance->icon();
  auto instance = QIconWrap::constructor.New(
      {Napi::External<QIcon>::New(env, new QIcon(icon))});
  return instance;
}

Napi::Value QTableWidgetItemWrap::setSelected(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  bool select = info[0].As<Napi::Boolean>().Value();
  this->instance->setSelected(select);
  return env.Null();
}

Napi::Value QTableWidgetItemWrap::isSelected(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Boolean::New(env, this->instance->isSelected());
}

Napi::Value QTableWidgetItemWrap::setSizeHint(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object sizeObject = info[0].As<Napi::Object>();
  QSizeWrap* sizeWrap = Napi::ObjectWrap<QSizeWrap>::Unwrap(sizeObject);
  this->instance->setSizeHint(*sizeWrap->getInternalInstance());
  return env.Null();
}

Napi::Value QTableWidgetItemWrap::sizeHint(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QSize size = this->instance->sizeHint();
  auto instance = QSizeWrap::constructor.New({Napi::External<QSize>::New(
      env, new QSize(size.width(), size.height()))});
  return instance;
}

Napi::Value QTableWidgetItemWrap::setStatusTip(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string statusTip = info[0].As<Napi::String>().Utf8Value();
  this->instance->setStatusTip(QString::fromUtf8(statusTip.c_str()));
  return env.Null();
}

Napi::Value QTableWidgetItemWrap::statusTip(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string statusTip = this->instance->text().toStdString();
  return Napi::String::New(env, statusTip);
}

Napi::Value QTableWidgetItemWrap::setText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string text = info[0].As<Napi::String>().Utf8Value();
  this->instance->setText(QString::fromUtf8(text.c_str()));
  return env.Null();
}

Napi::Value QTableWidgetItemWrap::text(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string text = this->instance->text().toStdString();
  return Napi::String::New(env, text);
}

Napi::Value QTableWidgetItemWrap::setTextAlignment(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int alignment = info[0].As<Napi::Number>().Int32Value();
  this->instance->setTextAlignment(alignment);
  return env.Null();
}

Napi::Value QTableWidgetItemWrap::textAlignment(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int alignment = this->instance->textAlignment();
  return Napi::Number::New(env, alignment);
}

Napi::Value QTableWidgetItemWrap::setToolTip(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string toolTip = info[0].As<Napi::String>().Utf8Value();
  this->instance->setToolTip(QString::fromUtf8(toolTip.c_str()));
  return env.Null();
}

Napi::Value QTableWidgetItemWrap::toolTip(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string toolTip = this->instance->toolTip().toStdString();
  return Napi::String::New(env, toolTip);
}

Napi::Value QTableWidgetItemWrap::setWhatsThis(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string whatsThis = info[0].As<Napi::String>().Utf8Value();
  this->instance->setWhatsThis(QString::fromUtf8(whatsThis.c_str()));
  return env.Null();
}

Napi::Value QTableWidgetItemWrap::whatsThis(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string whatsThis = this->instance->whatsThis().toStdString();
  return Napi::String::New(env, whatsThis);
}

Napi::Value QTableWidgetItemWrap::type(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, this->instance->type());
}
