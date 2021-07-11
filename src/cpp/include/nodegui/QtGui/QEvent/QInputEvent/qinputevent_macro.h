#ifndef QINPUTEVENT_WRAPPED_METHODS_DECLARATION
#define QINPUTEVENT_WRAPPED_METHODS_DECLARATION              \
  Napi::Value modifiers(const Napi::CallbackInfo& info) {    \
    Napi::Env env = info.Env();                              \
    uint v = static_cast<uint>(this->instance->modifiers()); \
    return Napi::Number::From(env, v);                       \
  }                                                          \
  Napi::Value timestamp(const Napi::CallbackInfo& info) {    \
    Napi::Env env = info.Env();                              \
    ulong timestamp = this->instance->timestamp();           \
    return Napi::Number::From(env, timestamp);               \
  }
#endif

#ifndef QINPUTEVENT_WRAPPED_METHODS_EXPORT_DEFINE
#define QINPUTEVENT_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName) \
  InstanceMethod("modifiers", &WidgetWrapName::modifiers),        \
      InstanceMethod("timestamp", &WidgetWrapName::timestamp),
#endif
