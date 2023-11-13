#ifndef QDROPMOVEEVENT_WRAPPED_METHODS_DECLARATION
#define QDROPMOVEEVENT_WRAPPED_METHODS_DECLARATION              \
  Napi::Value accept_qrect(const Napi::CallbackInfo& info) {    \
    Napi::Env env = info.Env();                                 \
    int x = info[0].As<Napi::Number>().Int32Value();            \
    int y = info[1].As<Napi::Number>().Int32Value();            \
    int width = info[2].As<Napi::Number>().Int32Value();        \
    int height = info[3].As<Napi::Number>().Int32Value();       \
    this->instance->accept(QRect(x, y, width, height));         \
    return env.Null();                                          \
  }                                                             \
  Napi::Value answerRect(const Napi::CallbackInfo& info) {      \
    Napi::Env env = info.Env();                                 \
    QRect r = static_cast<QRect>(this->instance->answerRect()); \
    int x = static_cast<int>(r.x());                            \
    int y = static_cast<int>(r.y());                            \
    int w = static_cast<int>(r.width());                        \
    int h = static_cast<int>(r.height());                       \
    Napi::Object obj = Napi::Object::New(env);                  \
    obj.Set("x", Napi::Number::From(env, x));                   \
    obj.Set("y", Napi::Number::From(env, y));                   \
    obj.Set("width", Napi::Number::From(env, w));               \
    obj.Set("height", Napi::Number::From(env, h));              \
    return obj;                                                 \
  }                                                             \
  Napi::Value ignore_qrect(const Napi::CallbackInfo& info) {    \
    Napi::Env env = info.Env();                                 \
    int x = info[0].As<Napi::Number>().Int32Value();            \
    int y = info[1].As<Napi::Number>().Int32Value();            \
    int width = info[2].As<Napi::Number>().Int32Value();        \
    int height = info[3].As<Napi::Number>().Int32Value();       \
    this->instance->ignore(QRect(x, y, width, height));         \
    return env.Null();                                          \
  }
#endif

#ifndef QDROPMOVEEVENT_WRAPPED_METHODS_EXPORT_DEFINE
#define QDROPMOVEEVENT_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)     \
  InstanceMethod("answerRect", &QDragMoveEventWrap::proposedAction),     \
      InstanceMethod("accept_qrect", &QDragMoveEventWrap::accept_qrect), \
      InstanceMethod("ignore_qrect", &QDragMoveEventWrap::ignore_qrect),
#endif
