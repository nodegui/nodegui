#ifndef QEVENT_WRAPPED_METHODS_DECLARATION
#define QEVENT_WRAPPED_METHODS_DECLARATION                           \
Napi::Value accept(const Napi::CallbackInfo& info) {                 \
  Napi::Env env = info.Env();                                        \
  this->instance->accept();                                          \
  return env.Null();                                                 \
}                                                                    \
Napi::Value ignore(const Napi::CallbackInfo& info) {                 \
  Napi::Env env = info.Env();                                        \
  this->instance->ignore();                                          \
  return env.Null();                                                 \
}                                                                    \
Napi::Value isAccepted(const Napi::CallbackInfo& info) {             \
  Napi::Env env = info.Env();                                        \
  bool v = this->instance->isAccepted();                             \
  return Napi::Boolean::From(env, v);                                \
}                                                                    \
Napi::Value setAccepted(const Napi::CallbackInfo& info) {            \
  Napi::Env env = info.Env();                                        \
  bool v = info[0].As<Napi::Boolean>().Value();                      \
  this->instance->setAccepted(v);                                    \
  return env.Null();                                                 \
}                                                                    \
Napi::Value spontaneous(const Napi::CallbackInfo& info) {            \
  Napi::Env env = info.Env();                                        \
  bool v = this->instance->spontaneous();                            \
  return Napi::Boolean::From(env, v);                                \
}                                                                    \
Napi::Value _type(const Napi::CallbackInfo& info) {                  \
  Napi::Env env = info.Env();                                        \
  int v = static_cast<int>(this->instance->type());                  \
  return Napi::Number::From(env, v);                                 \
}                                                                   
#endif


#ifndef QEVENT_WRAPPED_METHODS_EXPORT_DEFINE
#define QEVENT_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)                \
       InstanceMethod("accept", &WidgetWrapName::accept),                   \
       InstanceMethod("ignore", &WidgetWrapName::ignore),                   \
       InstanceMethod("isAccepted", &WidgetWrapName::isAccepted),           \
       InstanceMethod("setAccepted", &WidgetWrapName::setAccepted),         \
       InstanceMethod("spontaneous", &WidgetWrapName::spontaneous),         \
       InstanceMethod("_type", &WidgetWrapName::_type),  // Rename to _type to prevent conflict
#endif