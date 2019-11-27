#include "Extras/Utils/nutils.h"

#include <QApplication>
#include <QFont>
#include <QMetaType>
#include <QWidget>
#include <string>

#include "core/Component/component_wrap.h"
#include "core/FlexLayout/flexutils.h"

bool extrautils::isNapiValueInt(Napi::Env& env, Napi::Value& num) {
  return env.Global()
      .Get("Number")
      .ToObject()
      .Get("isInteger")
      .As<Napi::Function>()
      .Call({num})
      .ToBoolean()
      .Value();
}

std::string extrautils::getNapiObjectClassName(Napi::Object& object) {
  return object.Get("constructor")
      .As<Napi::Object>()
      .Get("name")
      .As<Napi::String>()
      .Utf8Value();
}

QVariant* extrautils::convertToQVariant(Napi::Env& env, Napi::Value& value) {
  // Warning: Make sure you delete the QVariant fron this function upon use.
  if (value.IsBoolean()) {
    return new QVariant(value.As<Napi::Boolean>().Value());
  } else if (value.IsNumber()) {
    if (isNapiValueInt(env, value)) {
      return new QVariant(value.As<Napi::Number>().Int32Value());
    } else {
      return new QVariant(value.As<Napi::Number>().DoubleValue());
    }
  } else if (value.IsString()) {
    std::string stringValue = value.As<Napi::String>().Utf8Value();
    return new QVariant(stringValue.c_str());
  } else if (value.IsSymbol()) {
    return new QVariant();
  } else if (value.IsArray()) {
    // TODO: fix this
    return new QVariant();
  } else if (value.IsArrayBuffer()) {
    // TODO: fix this
    return new QVariant();
  } else if (value.IsTypedArray()) {
    // TODO: fix this
    return new QVariant();
  } else if (value.IsObject()) {
    Napi::Object object = value.As<Napi::Object>();
    std::string className = getNapiObjectClassName(object);
    int typeId = QMetaType::type(className.c_str());
    ComponentWrap* componentWrap =
        Napi::ObjectWrap<ComponentWrap>::Unwrap(object);
    return new QVariant(typeId, componentWrap->rawData);
  } else if (value.IsFunction()) {
    return new QVariant();
  } else if (value.IsPromise()) {
    return new QVariant();
  } else if (value.IsUndefined()) {
    return new QVariant();
  } else if (value.IsNull()) {
    return new QVariant();
  } else if (value.IsBuffer()) {
    // TODO: fix this
    return new QVariant();
  } else if (value.IsExternal()) {
    QVariant* variant = value.As<Napi::External<QVariant>>().Data();
    return variant;
  } else {
    return new QVariant();
  }
}

void* extrautils::configureComponent(void* component) { return component; }
void* extrautils::configureQObject(QObject* object) {
  return configureComponent(object);
}
void* extrautils::configureQWidget(QWidget* widget, YGNodeRef node,
                                   bool isLeafNode) {
  flexutils::configureFlexNode(widget, node, isLeafNode);
  return configureQObject(widget);
}

void extrautils::initAppSettings() {
  QFont f = QApplication::font();
  if (f.defaultFamily().isEmpty()) {
    f.setFamily("Sans-Serif");
    QApplication::setFont(f);
  }
}