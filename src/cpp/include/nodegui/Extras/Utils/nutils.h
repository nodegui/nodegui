#pragma once

#include <napi.h>

#include <QPointer>
#include <QVariant>

#include "core/FlexLayout/flexlayout.hpp"
#include "core/FlexLayout/flexutils.h"

#ifdef WIN_EXPORT_DLL
#define WIN_EXPORT __declspec(dllexport)
#else
#define WIN_EXPORT __declspec(dllimport)
#endif

namespace extrautils {
WIN_EXPORT QVariant* convertToQVariant(Napi::Env& env, Napi::Value& value);
WIN_EXPORT bool isNapiValueInt(Napi::Env& env, Napi::Value& num);
WIN_EXPORT std::string getNapiObjectClassName(Napi::Object& object);
WIN_EXPORT void* configureQWidget(QWidget* widget, YGNodeRef node,
                                  bool isLeafNode = false);
WIN_EXPORT void* configureQObject(QObject* object);
WIN_EXPORT void* configureComponent(void* component);

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
WIN_EXPORT Napi::Value isNapiExternal(const Napi::CallbackInfo& info);
}  // namespace StaticNUtilsWrapMethods