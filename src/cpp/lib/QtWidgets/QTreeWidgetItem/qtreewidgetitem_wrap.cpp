#include "QtWidgets/qtreewidgetitem/qtreewidgetitem_wrap.h"

#include <iostream>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QTreeWidget/qtreewidget_wrap.h"
#include "QtWidgets/QTreeWidgetItem/qtreewidgetitem_wrap.h"
#include "core/Component/component_wrap.h"

Napi::FunctionReference QTreeWidgetItemWrap::constructor;

Napi::Object QTreeWidgetItemWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QTreeWidgetItem";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("setText", &QTreeWidgetItemWrap::setText),
                   COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

QTreeWidgetItem *QTreeWidgetItemWrap::getInternalInstance() {
  return this->instance;
}

QTreeWidgetItemWrap::~QTreeWidgetItemWrap() { delete this->instance; }

QTreeWidgetItemWrap::QTreeWidgetItemWrap(const Napi::CallbackInfo &info)
    : Napi::ObjectWrap<QTreeWidgetItemWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

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
