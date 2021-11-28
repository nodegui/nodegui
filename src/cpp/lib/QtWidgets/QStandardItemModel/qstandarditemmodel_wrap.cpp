#include "QtWidgets/QStandardItemModel/qstandarditemmodel_wrap.h"

#include <QDebug>
#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtCore/QObject/qobject_wrap.h"
#include "QtGui/QIcon/qicon_wrap.h"
#include "QtWidgets/QMenu/qmenu_wrap.h"
#include "QtWidgets/QStandardItem/qstandarditem_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QStandardItemModelWrap::constructor;

Napi::Object QStandardItemModelWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QStandardItemModel";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("item", &QStandardItemModelWrap::item),

       QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QStandardItemModelWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NStandardItemModel* QStandardItemModelWrap::getInternalInstance() {
  return this->instance;
}

QStandardItemModelWrap::QStandardItemModelWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QStandardItemModelWrap>(info) {
  Napi::Env env = info.Env();
  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new NStandardItemModel(
        parentWidgetWrap
            ->getInternalInstance());  // this sets the parent to current widget
  } else if (info.Length() == 0) {
    this->instance = new NStandardItemModel();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQObject(this->getInternalInstance());
}

QStandardItemModelWrap::~QStandardItemModelWrap() {}

Napi::Value QStandardItemModelWrap::item(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int row = info[0].As<Napi::Number>().Int32Value();
  int column = info[1].As<Napi::Number>().Int32Value();

  QStandardItem* item = this->instance->item(row, column);
  if (item != nullptr) {
    Napi::Object itemWrap = QStandardItemWrap::constructor.New(
        {Napi::External<QStandardItem>::New(env, item),
         Napi::Boolean::New(env, true)});
    return itemWrap;
  } else {
    return env.Null();
  }
}
