#pragma once

#include <napi.h>

#include <QPointer>
#include <QVariant>

#include "core/FlexLayout/flexlayout.hpp"
#include "core/FlexLayout/flexutils.h"
namespace extrautils {

QVariant* convertToQVariant(Napi::Env& env, Napi::Value& value);
bool isNapiValueInt(Napi::Env& env, Napi::Value& num);
std::string getNapiObjectClassName(Napi::Object& object);
void* configureQWidget(QWidget* widget, YGNodeRef node,
                       bool isLeafNode = false);
void* configureQObject(QObject* object);
void* configureComponent(void* component);

template <typename T>
void safeDelete(QPointer<T>& component) {
  if (!component.isNull()) {
    delete component;
  }
}
void initAppSettings();
}  // namespace extrautils
