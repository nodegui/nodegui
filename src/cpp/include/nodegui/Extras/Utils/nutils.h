#pragma once

#include <napi.h>

#include <QPointer>
#include <QVariant>

#include "Extras/Export/export.h"
#include "core/FlexLayout/flexutils.h"
#include "deps/yoga/YGNode.h"

namespace extrautils {
DLL_EXPORT QVariant* convertToQVariant(Napi::Env& env, Napi::Value& value);
DLL_EXPORT bool isNapiValueInt(Napi::Env& env, Napi::Value& num);
DLL_EXPORT std::string getNapiObjectClassName(Napi::Object& object);
DLL_EXPORT void* configureQWidget(QWidget* widget, YGNodeRef node,
                                  bool isLeafNode = false);
DLL_EXPORT void* configureQObject(QObject* object);
DLL_EXPORT void* configureComponent(void* component);

template <typename T>
void safeDelete(QPointer<T>& component) {
  if (!component.isNull()) {
    delete component;
  }
}
}  // namespace extrautils

class DLL_EXPORT NUtilsWrap : public Napi::ObjectWrap<NUtilsWrap> {
 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  NUtilsWrap(const Napi::CallbackInfo& info);
  static Napi::FunctionReference constructor;
};

namespace StaticNUtilsWrapMethods {
DLL_EXPORT Napi::Value isNapiExternal(const Napi::CallbackInfo& info);
}  // namespace StaticNUtilsWrapMethods