#include "QtWidgets/QTreeWidgetItem/qtreewidgetitem_wrap.h"

#include <QDebug>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QTreeWidget/qtreewidget_wrap.h"
#include "QtWidgets/QTreeWidgetItem/qtreewidgetitem_wrap.h"
#include "core/Component/component_wrap.h"

Napi::FunctionReference QTreeWidgetItemWrap::constructor;

Napi::Object QTreeWidgetItemWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QTreeWidgetItem";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("setText", &QTreeWidgetItemWrap::setText),
       InstanceMethod("parent", &QTreeWidgetItemWrap::parent),
       InstanceMethod("child", &QTreeWidgetItemWrap::child),
       InstanceMethod("text", &QTreeWidgetItemWrap::text),
       InstanceMethod("childCount", &QTreeWidgetItemWrap::childCount),
       InstanceMethod("setSelected", &QTreeWidgetItemWrap::setSelected),
       InstanceMethod("setExpanded", &QTreeWidgetItemWrap::setExpanded),
       InstanceMethod("addChild", &QTreeWidgetItemWrap::addChild),
       InstanceMethod("setFlags", &QTreeWidgetItemWrap::setFlags),
       InstanceMethod("setCheckState", &QTreeWidgetItemWrap::setCheckState),
       InstanceMethod("flags", &QTreeWidgetItemWrap::flags),
       InstanceMethod("setData", &QTreeWidgetItemWrap::setData),
       InstanceMethod("data", &QTreeWidgetItemWrap::data),
       COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QTreeWidgetItemWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QTreeWidgetItem *QTreeWidgetItemWrap::getInternalInstance() {
  return this->instance;
}

QTreeWidgetItemWrap::~QTreeWidgetItemWrap() {
  if (!this->disableDeletion) {
    delete this->instance;
  }
}
QTreeWidgetItemWrap::QTreeWidgetItemWrap(const Napi::CallbackInfo &info)
    : Napi::ObjectWrap<QTreeWidgetItemWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() > 0 && info[0].IsExternal()) {
    // --- if external ---
    this->instance = info[0].As<Napi::External<QTreeWidgetItem>>().Data();
    if (info.Length() == 2) {
      this->disableDeletion = info[1].As<Napi::Boolean>().Value();
    }
  } else {
    // --- regular cases ---
    if (info.Length() == 3) {
      Napi::Array stringsNapi = info[1].As<Napi::Array>();
      QList<QString> list;
      for (int i = 0; i < stringsNapi.Length(); i++) {
        Napi::Value stringNapi = stringsNapi[i];
        list.append(stringNapi.As<Napi::String>().Utf8Value().c_str());
      }
      QStringList strings = QStringList(list);

      std::string parentType = info[2].As<Napi::String>().Utf8Value();
      if (parentType == "tree") {
        Napi::Object parentObject = info[0].As<Napi::Object>();
        QTreeWidgetWrap *parentWidgetWrap =
            Napi::ObjectWrap<QTreeWidgetWrap>::Unwrap(parentObject);
        QTreeWidget *parent = parentWidgetWrap->getInternalInstance();
        this->instance = new QTreeWidgetItem(parent, strings);
      } else if (parentType == "item") {
        Napi::Object itemObject = info[0].As<Napi::Object>();
        QTreeWidgetItemWrap *itemWidgetWrap =
            Napi::ObjectWrap<QTreeWidgetItemWrap>::Unwrap(itemObject);
        QTreeWidgetItem *item = itemWidgetWrap->getInternalInstance();
        this->instance = new QTreeWidgetItem(item, strings);
      } else {
        Napi::TypeError::New(env, "Invalid parent type")
            .ThrowAsJavaScriptException();
      }
    } else if (info.Length() == 2) {
      std::string parentType = info[1].As<Napi::String>().Utf8Value();
      if (parentType == "tree") {
        Napi::Object parentObject = info[0].As<Napi::Object>();
        QTreeWidgetWrap *parentWidgetWrap =
            Napi::ObjectWrap<QTreeWidgetWrap>::Unwrap(parentObject);
        QTreeWidget *parent = parentWidgetWrap->getInternalInstance();
        this->instance = new QTreeWidgetItem(parent);
      } else if (parentType == "item") {
        Napi::Object itemObject = info[0].As<Napi::Object>();
        QTreeWidgetItemWrap *itemWidgetWrap =
            Napi::ObjectWrap<QTreeWidgetItemWrap>::Unwrap(itemObject);
        QTreeWidgetItem *item = itemWidgetWrap->getInternalInstance();
        this->instance = new QTreeWidgetItem(item);
      } else {
        Napi::TypeError::New(env, "Invalid parent type")
            .ThrowAsJavaScriptException();
      }
    } else if (info.Length() == 1) {
      Napi::Array stringsNapi = info[0].As<Napi::Array>();
      QList<QString> list;
      for (int i = 0; i < stringsNapi.Length(); i++) {
        Napi::Value stringNapi = stringsNapi[i];
        list.append(stringNapi.As<Napi::String>().Utf8Value().c_str());
      }
      QStringList strings = QStringList(list);
      this->instance = new QTreeWidgetItem(strings);
    } else if (info.Length() == 0) {
      this->instance = new QTreeWidgetItem();
    } else {
      Napi::TypeError::New(env, "Wrong number of arguments")
          .ThrowAsJavaScriptException();
    }
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

Napi::Value QTreeWidgetItemWrap::setText(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int column = info[0].As<Napi::Number>().Int32Value();
  Napi::String napiText = info[1].As<Napi::String>();
  std::string text = napiText.Utf8Value();
  this->instance->setText(column, QString::fromUtf8(text.c_str()));
  return env.Null();
}
Napi::Value QTreeWidgetItemWrap::parent(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (this->instance->parent() == nullptr) {
    return env.Null();
  } else {
    QTreeWidgetItem *item = this->instance->parent();
    // disable deletion of the native instance for these by passing true
    Napi::Object val = QTreeWidgetItemWrap::constructor.New(
        {Napi::External<QTreeWidgetItem>::New(env, item),
         Napi::Boolean::New(env, true)});
    return val;
  }
}
Napi::Value QTreeWidgetItemWrap::childCount(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int value = static_cast<int>(this->instance->childCount());
  return Napi::Number::From(env, value);
}

Napi::Value QTreeWidgetItemWrap::child(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Number index = info[0].As<Napi::Number>();

  if (this->instance->child(index) == nullptr) {
    return env.Null();
  } else {
    QTreeWidgetItem *item = this->instance->child(index);
    // disable deletion of the native instance for these by passing true
    Napi::Object val = QTreeWidgetItemWrap::constructor.New(
        {Napi::External<QTreeWidgetItem>::New(env, item),
         Napi::Boolean::New(env, true)});
    return val;
  }
}
Napi::Value QTreeWidgetItemWrap::text(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Number column = info[0].As<Napi::Number>();

  if (this->instance->text(column) == nullptr) {
    return env.Null();
  } else {
    return Napi::Value::From(env, this->instance->text(column).toStdString());
  }
}
Napi::Value QTreeWidgetItemWrap::setSelected(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Boolean selected = info[0].As<Napi::Boolean>();
  this->instance->setSelected(selected.Value());
  return env.Null();
}
Napi::Value QTreeWidgetItemWrap::setExpanded(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  Napi::Boolean expanded = info[0].As<Napi::Boolean>();
  this->instance->setExpanded(expanded.Value());
  return env.Null();
}

Napi::Value QTreeWidgetItemWrap::addChild(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object itemObject = info[0].As<Napi::Object>();
  QTreeWidgetItemWrap *itemWidgetWrap =
      Napi::ObjectWrap<QTreeWidgetItemWrap>::Unwrap(itemObject);

  QTreeWidgetItem *item = itemWidgetWrap->getInternalInstance();
  this->instance->addChild(item);

  return env.Null();
}

Napi::Value QTreeWidgetItemWrap::setFlags(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int flags = info[0].As<Napi::Number>().Int32Value();
  this->instance->setFlags(static_cast<Qt::ItemFlags>(flags));

  return env.Null();
}

Napi::Value QTreeWidgetItemWrap::setCheckState(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int column = info[0].As<Napi::Number>().Int32Value();
  int checkState = info[1].As<Napi::Number>().Int32Value();

  this->instance->setCheckState(column,
                                static_cast<Qt::CheckState>(checkState));

  return env.Null();
}

Napi::Value QTreeWidgetItemWrap::flags(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Qt::ItemFlags flags = this->instance->flags();

  return Napi::Value::From(env, static_cast<int>(flags));
}

Napi::Value QTreeWidgetItemWrap::setData(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int column = info[0].As<Napi::Number>().Int32Value();
  int role = info[1].As<Napi::Number>().Int32Value();

  Napi::Object variantObject = info[2].As<Napi::Object>();
  QVariantWrap *variantWrap =
      Napi::ObjectWrap<QVariantWrap>::Unwrap(variantObject);
  QVariant *variant = variantWrap->getInternalInstance();

  this->instance->setData(column, role, *variant);

  return env.Null();
}

Napi::Value QTreeWidgetItemWrap::data(const Napi::CallbackInfo &info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int column = info[0].As<Napi::Number>().Int32Value();
  int role = info[1].As<Napi::Number>().Int32Value();

  QVariant variant = this->instance->data(column, role);
  auto instance = QVariantWrap::constructor.New(
      {Napi::External<QVariant>::New(env, new QVariant(variant))});

  return instance;
}