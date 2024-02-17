#include "QtCore/QMimeData/qmimedata_wrap.h"

#include "Extras/Utils/nutils.h"
#include "QtCore/QUrl/qurl_wrap.h"

Napi::FunctionReference QMimeDataWrap::constructor;

Napi::Object QMimeDataWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QMimeData";
  Napi::Function func =
      DefineClass(env, CLASSNAME,
                  {InstanceMethod("clear", &QMimeDataWrap::clear),
                   InstanceMethod("hasColor", &QMimeDataWrap::hasColor),
                   InstanceMethod("hasHtml", &QMimeDataWrap::hasHtml),
                   InstanceMethod("hasImage", &QMimeDataWrap::hasImage),
                   InstanceMethod("hasText", &QMimeDataWrap::hasText),
                   InstanceMethod("hasUrls", &QMimeDataWrap::hasUrls),
                   InstanceMethod("html", &QMimeDataWrap::html),
                   InstanceMethod("removeFormat", &QMimeDataWrap::removeFormat),
                   //  InstanceMethod("setData",&QMimeDataWrap::setData),
                   InstanceMethod("setHtml", &QMimeDataWrap::setHtml),
                   InstanceMethod("setText", &QMimeDataWrap::setText),
                   InstanceMethod("setUrls", &QMimeDataWrap::setUrls),
                   InstanceMethod("text", &QMimeDataWrap::text),
                   InstanceMethod("urls", &QMimeDataWrap::urls),
                   InstanceMethod("data", &QMimeDataWrap::data),
                   InstanceMethod("setData", &QMimeDataWrap::setData),
                   QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QMimeDataWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QMimeData, QMimeDataWrap);
  return exports;
}

QMimeData* QMimeDataWrap::getInternalInstance() { return this->instance; }

QMimeDataWrap::~QMimeDataWrap() { extrautils::safeDelete(this->instance); }

QMimeDataWrap::QMimeDataWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QMimeDataWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 0) {
    // --- Construct a new instance
    this->instance = new QMimeData();
  } else if (argCount == 1 && info[0].IsExternal()) {
    // --- Wrap a given C++ instance
    this->instance = info[0].As<Napi::External<QMimeData>>().Data();
  } else {
    Napi::TypeError::New(
        env, "NodeGui: QMimeDataWrap: Wrong number of arguments to constructor")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureComponent(this->getInternalInstance());
}

void QMimeDataWrap::cloneFromMimeDataToData(QMimeData* fromData,
                                            QMimeData* toData) {
  foreach (QString format, fromData->formats()) {
    // Retrieving data
    QByteArray data = fromData->data(format);
    // Checking for custom MIME types
    if (format.startsWith("application/x-qt")) {
      // Retrieving true format name
      int indexBegin = format.indexOf('"') + 1;
      int indexEnd = format.indexOf('"', indexBegin);
      format = format.mid(indexBegin, indexEnd - indexBegin);
    }
    toData->setData(format, data);
  }
}

void QMimeDataWrap::cloneFromMimeData(QMimeData* mimeReference) {
  foreach (QString format, mimeReference->formats()) {
    // Retrieving data
    QByteArray data = mimeReference->data(format);
    // Checking for custom MIME types
    if (format.startsWith("application/x-qt")) {
      // Retrieving true format name
      int indexBegin = format.indexOf('"') + 1;
      int indexEnd = format.indexOf('"', indexBegin);
      format = format.mid(indexBegin, indexEnd - indexBegin);
    }
    this->instance->setData(format, data);
  }
}

// Instance Methods Here

Napi::Value QMimeDataWrap::clear(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->clear();
  return env.Null();
}

Napi::Value QMimeDataWrap::hasColor(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Boolean::New(env, this->instance->hasColor());
}

Napi::Value QMimeDataWrap::hasHtml(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Boolean::New(env, this->instance->hasHtml());
}

Napi::Value QMimeDataWrap::hasImage(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  return Napi::Boolean::New(env, this->instance->hasImage());
}

Napi::Value QMimeDataWrap::hasText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Boolean::New(env, this->instance->hasText());
}

Napi::Value QMimeDataWrap::hasUrls(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Boolean::New(env, this->instance->hasUrls());
}

Napi::Value QMimeDataWrap::html(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::String::New(env, this->instance->html().toStdString());
}

Napi::Value QMimeDataWrap::removeFormat(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QString input0 =
      QString::fromStdString(info[0].As<Napi::String>().Utf8Value());
  this->instance->removeFormat(input0);
  return env.Null();
}

// TODO: Maybe implement a Buffer or UInt8Array
// Napi::Value QMimeDataWrap::setData(const Napi::CallbackInfo& info) {
//   Napi::Env env = info.Env();
// //   QString input0 =
//   QString::fromStdString(info[0].As<Napi::String>().Utf8Value());
//   Napi::Object wrap1_0 = info[1].As<Napi::Object>();
//   constWrap* wrap1_1 = Napi::ObjectWrap<constWrap>::Unwrap(wrap1_0);
//   const* input1 = wrap1_1->getInternalInstance();
//   this->instance->setData(input0, *input1);
//   return env.Null();
// }

Napi::Value QMimeDataWrap::setHtml(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QString input0 =
      QString::fromStdString(info[0].As<Napi::String>().Utf8Value());
  this->instance->setHtml(input0);
  return env.Null();
}

Napi::Value QMimeDataWrap::setText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QString input0 =
      QString::fromStdString(info[0].As<Napi::String>().Utf8Value());
  this->instance->setText(input0);
  return env.Null();
}

Napi::Value QMimeDataWrap::setUrls(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Array urls = info[0].As<Napi::Array>();
  QList<QUrl> list;
  for (int i = 0; i < urls.Length(); i++) {
    Napi::Object urlObj = static_cast<Napi::Value>(urls[i]).As<Napi::Object>();
    QUrlWrap* urlWrap = Napi::ObjectWrap<QUrlWrap>::Unwrap(urlObj);
    QUrl* url = urlWrap->getInternalInstance();
    list.append(*url);
  }
  this->instance->setUrls(list);
  return env.Null();
}

Napi::Value QMimeDataWrap::text(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::String::New(env, this->instance->text().toStdString());
}

Napi::Value QMimeDataWrap::urls(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QList<QUrl> urls = this->instance->urls();
  int length = urls.length();
  Napi::Array retval = Napi::Array::New(env, length);
  for (int i = 0; i < length; i++) {
    QUrl url = urls[i];
    auto instance = QUrlWrap::constructor.New(
        {Napi::External<QUrl>::New(env, new QUrl(url))});
    retval[i] = instance;
  }
  return retval;
}

Napi::Value QMimeDataWrap::data(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::String mimeType = info[0].As<Napi::String>();
  QByteArray data =
      this->instance->data(QString::fromStdString(mimeType.Utf8Value()));
  if (data.isNull()) {
    return env.Null();
  }
  return Napi::Buffer<const char>::Copy(env, data.constData(), data.size());
}

Napi::Value QMimeDataWrap::setData(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::String mimeType = info[0].As<Napi::String>();
  Napi::Buffer<const char> buffer = info[1].As<Napi::Buffer<const char>>();
  QByteArray byteArray = QByteArray(buffer.Data(), buffer.Length());
  this->instance->setData(QString::fromStdString(mimeType.Utf8Value()),
                          byteArray);
  return env.Null();
}

// Static Methods here
