#include "QtWidgets/QFileDialog/qfiledialog_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QFileDialogWrap::constructor;

Napi::Object QFileDialogWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QFileDialog";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("supportedSchemes", &QFileDialogWrap::supportedSchemes),
       InstanceMethod("setSupportedSchemes",
                      &QFileDialogWrap::setSupportedSchemes),
       InstanceMethod("labelText", &QFileDialogWrap::labelText),
       InstanceMethod("setLabelText", &QFileDialogWrap::setLabelText),
       InstanceMethod("setOption", &QFileDialogWrap::setOption),
       InstanceMethod("setNameFilter", &QFileDialogWrap::setNameFilter),
       InstanceMethod("selectedFiles", &QFileDialogWrap::selectedFiles),

       QDIALOG_WRAPPED_METHODS_EXPORT_DEFINE(QFileDialogWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NFileDialog* QFileDialogWrap::getInternalInstance() { return this->instance; }
QFileDialogWrap::~QFileDialogWrap() { extrautils::safeDelete(this->instance); }

QFileDialogWrap::QFileDialogWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QFileDialogWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 4) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    QWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<QWidgetWrap>::Unwrap(parentObject);
    QWidget* parent = parentWidgetWrap->getInternalInstance();
    QString caption =
        QString::fromUtf8(info[1].As<Napi::String>().Utf8Value().c_str());
    QString directory =
        QString::fromUtf8(info[2].As<Napi::String>().Utf8Value().c_str());
    QString filter =
        QString::fromUtf8(info[3].As<Napi::String>().Utf8Value().c_str());
    this->instance = new NFileDialog(parent, caption, directory, filter);
  } else if (info.Length() == 0) {
    this->instance = new NFileDialog();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      false);
}

Napi::Value QFileDialogWrap::supportedSchemes(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QStringList schemes = this->instance->supportedSchemes();
  Napi::Array schemesNapi = Napi::Array::New(env, schemes.size());
  for (int i = 0; i < schemes.size(); i++) {
    schemesNapi[i] = Napi::String::New(env, schemes[i].toStdString());
  }

  return schemesNapi;
}

Napi::Value QFileDialogWrap::setSupportedSchemes(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Array schemesNapi = info[0].As<Napi::Array>();
  QList<QString> list;
  for (int i = 0; i < schemesNapi.Length(); i++) {
    Napi::Value schemeNapi = schemesNapi[i];
    list.append(schemeNapi.As<Napi::String>().Utf8Value().c_str());
  }
  QStringList schemes = QStringList(list);

  this->instance->setSupportedSchemes(schemes);
  return env.Null();
}

Napi::Value QFileDialogWrap::labelText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int labelInt = info[0].As<Napi::Number>().Int32Value();
  QFileDialog::DialogLabel label =
      static_cast<QFileDialog::DialogLabel>(labelInt);
  QString labelString = this->instance->labelText(label);

  return Napi::String::New(env, labelString.toStdString());
}

Napi::Value QFileDialogWrap::setLabelText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int labelInt = info[0].As<Napi::Number>().Int32Value();
  QFileDialog::DialogLabel label =
      static_cast<QFileDialog::DialogLabel>(labelInt);
  std::string textString = info[1].As<Napi::String>().Utf8Value();
  QString text = QString::fromUtf8(textString.c_str());

  this->instance->setLabelText(label, text);
  return env.Null();
}

Napi::Value QFileDialogWrap::setOption(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int optionInt = info[0].As<Napi::Number>().Int32Value();
  QFileDialog::Option option = static_cast<QFileDialog::Option>(optionInt);
  bool on = info[1].As<Napi::Boolean>().Value();

  this->instance->setOption(option, on);
  return env.Null();
}

Napi::Value QFileDialogWrap::setNameFilter(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  std::string filter = info[0].As<Napi::String>().Utf8Value();

  this->instance->setNameFilter(QString::fromStdString(filter));
  return env.Null();
}

Napi::Value QFileDialogWrap::selectedFiles(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  QStringList files = this->instance->selectedFiles();
  Napi::Array fileList = Napi::Array::New(env, files.size());
  for (int i = 0; i < files.size(); i++) {
    fileList[i] = Napi::String::New(env, files[i].toStdString());
  }
  return fileList;
}
