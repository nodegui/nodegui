#ifndef QDROPEVENT_WRAPPED_METHODS_DECLARATION
#define QDROPEVENT_WRAPPED_METHODS_DECLARATION                                 \
  Napi::Value acceptProposedAction(const Napi::CallbackInfo& info) {           \
    Napi::Env env = info.Env();                                                \
    this->instance->acceptProposedAction();                                    \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value dropAction(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                                \
    int action = static_cast<int>(this->instance->dropAction());               \
    return Napi::Number::From(env, action);                                    \
  }                                                                            \
  Napi::Value keyboardModifiers(const Napi::CallbackInfo& info) {              \
    Napi::Env env = info.Env();                                                \
    int modifierFlags = static_cast<int>(this->instance->keyboardModifiers()); \
    return Napi::Number::From(env, modifierFlags);                             \
  }                                                                            \
  Napi::Value mouseButtons(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                                \
    int m = static_cast<int>(this->instance->mouseButtons());                  \
    return Napi::Number::From(env, m);                                         \
  }                                                                            \
  Napi::Value mimeData(const Napi::CallbackInfo& info) {                       \
    Napi::Env env = info.Env();                                                \
    const QMimeData* ret = this->instance->mimeData();                         \
                                                                               \
    QMimeData* clone = new QMimeData();                                        \
    /* QMimeData has no copy constructor so I do this */                       \
    QMimeDataWrap::cloneFromMimeDataToData((QMimeData*)ret, clone);            \
    auto instance = QMimeDataWrap::constructor.New(                            \
        {Napi::External<QMimeData>::New(env, clone)});                         \
    return instance;                                                           \
  }                                                                            \
  Napi::Value pos(const Napi::CallbackInfo& info) {                            \
    Napi::Env env = info.Env();                                                \
    QPoint point = static_cast<QPoint>(this->instance->pos());                 \
    int x = static_cast<int>(point.x());                                       \
    int y = static_cast<int>(point.y());                                       \
    Napi::Object obj = Napi::Object::New(env);                                 \
    obj.Set("x", Napi::Number::From(env, x));                                  \
    obj.Set("y", Napi::Number::From(env, y));                                  \
    return obj;                                                                \
  }                                                                            \
  Napi::Value possibleActions(const Napi::CallbackInfo& info) {                \
    Napi::Env env = info.Env();                                                \
    int v = static_cast<int>(this->instance->possibleActions());               \
    return Napi::Number::From(env, v);                                         \
  }                                                                            \
  Napi::Value proposedAction(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                                \
    int v = static_cast<int>(this->instance->possibleActions());               \
    return Napi::Number::From(env, v);                                         \
  }                                                                            \
  Napi::Value setDropAction(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                                \
    int dropFlags;                                                             \
    if (info.Length() < 1) {                                                   \
      dropFlags = 1;                                                           \
      return env.Null();                                                       \
    } else {                                                                   \
      Napi::Number num = info[0].ToNumber();                                   \
      dropFlags = static_cast<int>(num.Int32Value());                          \
    }                                                                          \
    this->instance->setDropAction(static_cast<Qt::DropAction>(dropFlags));     \
    return env.Null();                                                         \
  }
#endif

#ifndef QDROPEVENT_WRAPPED_METHODS_EXPORT_DEFINE
#define QDROPEVENT_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)               \
  InstanceMethod("acceptProposedAction",                                       \
                 &WidgetWrapName::acceptProposedAction),                       \
      InstanceMethod("dropAction", &WidgetWrapName::dropAction),               \
      InstanceMethod("keyboardModifiers", &WidgetWrapName::keyboardModifiers), \
      InstanceMethod("mimeData", &WidgetWrapName::mimeData),                   \
      InstanceMethod("mouseButtons", &WidgetWrapName::mouseButtons),           \
      InstanceMethod("pos", &WidgetWrapName::pos),                             \
      InstanceMethod("possibleActions", &WidgetWrapName::possibleActions),     \
      InstanceMethod("proposedAction", &WidgetWrapName::proposedAction),

#endif
