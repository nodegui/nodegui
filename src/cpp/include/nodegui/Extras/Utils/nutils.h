#pragma once

#include <napi.h>

#include <QPointer>
#include <QVariant>

#include "core/FlexLayout/flexlayout.hpp"
#include "core/FlexLayout/flexutils.h"

#ifdef _WINDLL
#define WIN_EXPORT __declspec(dllexport)
#else
#define WIN_EXPORT
#endif

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

class WIN_EXPORT NUtilsWrap : public Napi::ObjectWrap<NUtilsWrap> {
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  NUtilsWrap(const Napi::CallbackInfo& info);
  static Napi::FunctionReference constructor;
};

namespace StaticNUtilsWrapMethods {
Napi::Value isNapiExternal(const Napi::CallbackInfo& info);
}  // namespace StaticNUtilsWrapMethods