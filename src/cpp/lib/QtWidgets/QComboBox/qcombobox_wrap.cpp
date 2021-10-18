
#include "QtWidgets/QComboBox/qcombobox_wrap.h"

#include <QWidget>

#include "Extras/Utils/nutils.h"
#include "QtCore/QModelIndex/qmodelindex_wrap.h"
#include "QtCore/QVariant/qvariant_wrap.h"
#include "QtGui/QIcon/qicon_wrap.h"
#include "QtWidgets/QLineEdit/qlineedit_wrap.h"
#include "QtWidgets/QStandardItemModel/qstandarditemmodel_wrap.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

Napi::FunctionReference QComboBoxWrap::constructor;

Napi::Object QComboBoxWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QComboBox";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {InstanceMethod("addItem", &QComboBoxWrap::addItem),
       InstanceMethod("insertItem", &QComboBoxWrap::insertItem),
       InstanceMethod("addItems", &QComboBoxWrap::addItems),
       InstanceMethod("insertItems", &QComboBoxWrap::insertItems),
       InstanceMethod("currentIndex", &QComboBoxWrap::currentIndex),
       InstanceMethod("currentText", &QComboBoxWrap::currentText),
       InstanceMethod("insertSeparator", &QComboBoxWrap::insertSeparator),
       InstanceMethod("itemText", &QComboBoxWrap::itemText),
       InstanceMethod("itemData", &QComboBoxWrap::itemData),
       InstanceMethod("removeItem", &QComboBoxWrap::removeItem),
       InstanceMethod("sizeAdjustPolicy", &QComboBoxWrap::sizeAdjustPolicy),
       InstanceMethod("setSizeAdjustPolicy",
                      &QComboBoxWrap::setSizeAdjustPolicy),
       InstanceMethod("maxVisibleItems", &QComboBoxWrap::maxVisibleItems),
       InstanceMethod("setMaxVisibleItems", &QComboBoxWrap::setMaxVisibleItems),
       InstanceMethod("isEditable", &QComboBoxWrap::isEditable),
       InstanceMethod("setEditable", &QComboBoxWrap::setEditable),
       InstanceMethod("clear", &QComboBoxWrap::clear),
       InstanceMethod("setModel", &QComboBoxWrap::setModel),
       InstanceMethod("setEditText", &QComboBoxWrap::setEditText),
       InstanceMethod("count", &QComboBoxWrap::count),
       InstanceMethod("duplicatesEnabled", &QComboBoxWrap::duplicatesEnabled),
       InstanceMethod("hasFrame", &QComboBoxWrap::hasFrame),
       InstanceMethod("hidePopup", &QComboBoxWrap::hidePopup),
       InstanceMethod("iconSize", &QComboBoxWrap::iconSize),
       InstanceMethod("maxCount", &QComboBoxWrap::maxCount),
       InstanceMethod("minimumContentsLength",
                      &QComboBoxWrap::minimumContentsLength),
       InstanceMethod("modelColumn", &QComboBoxWrap::modelColumn),
       InstanceMethod("rootModelIndex", &QComboBoxWrap::rootModelIndex),
       InstanceMethod("setDuplicatesEnabled",
                      &QComboBoxWrap::setDuplicatesEnabled),
       InstanceMethod("setMinimumContentsLength",
                      &QComboBoxWrap::setMinimumContentsLength),
       InstanceMethod("setModelColumn", &QComboBoxWrap::setModelColumn),
       InstanceMethod("setRootModelIndex", &QComboBoxWrap::setRootModelIndex),
       InstanceMethod("clearEditText", &QComboBoxWrap::clearEditText),
       InstanceMethod("setFrame", &QComboBoxWrap::setFrame),
       InstanceMethod("setItemText", &QComboBoxWrap::setItemText),
       InstanceMethod("setMaxCount", &QComboBoxWrap::setMaxCount),
       InstanceMethod("showPopup", &QComboBoxWrap::showPopup),
       InstanceMethod("insertPolicy", &QComboBoxWrap::insertPolicy),
       InstanceMethod("setInsertPolicy", &QComboBoxWrap::setInsertPolicy),
       InstanceMethod("sizeAdjustPolicy", &QComboBoxWrap::sizeAdjustPolicy),
       InstanceMethod("setIconSize", &QComboBoxWrap::setIconSize),
       QWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(QComboBoxWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  return exports;
}

NComboBox* QComboBoxWrap::getInternalInstance() { return this->instance; }
QComboBoxWrap::~QComboBoxWrap() { extrautils::safeDelete(this->instance); }

QComboBoxWrap::QComboBoxWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QComboBoxWrap>(info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  if (info.Length() == 1) {
    Napi::Object parentObject = info[0].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);

    this->instance = new NComboBox(parentWidgetWrap->getInternalInstance());
  } else if (info.Length() == 0) {
    this->instance = new NComboBox();
  } else {
    Napi::TypeError::New(env, "Wrong number of arguments")
        .ThrowAsJavaScriptException();
  }
  this->rawData = extrautils::configureQWidget(
      this->getInternalInstance(), this->getInternalInstance()->getFlexNode(),
      true);
}

Napi::Value QComboBoxWrap::addItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  if (info.Length() == 3) {
    Napi::Object iconWrap = info[0].As<Napi::Object>();
    QIconWrap* iconWrapValue = Napi::ObjectWrap<QIconWrap>::Unwrap(iconWrap);
    QIcon* icon = iconWrapValue->getInternalInstance();
    std::string text = info[1].As<Napi::String>().Utf8Value();
    Napi::Object variantWrap = info[2].As<Napi::Object>();
    QVariantWrap* variantWrapValue =
        Napi::ObjectWrap<QVariantWrap>::Unwrap(variantWrap);
    QVariant* variant = variantWrapValue->getInternalInstance();
    this->instance->addItem(*icon, text.c_str(), *variant);
  } else {
    std::string text = info[0].As<Napi::String>().Utf8Value();
    Napi::Object variantWrap = info[1].As<Napi::Object>();
    QVariantWrap* variantWrapValue =
        Napi::ObjectWrap<QVariantWrap>::Unwrap(variantWrap);
    QVariant* variant = variantWrapValue->getInternalInstance();
    this->instance->addItem(text.c_str(), *variant);
  }

  return env.Null();
}

Napi::Value QComboBoxWrap::insertItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int index = info[0].As<Napi::Number>().Int32Value();
  std::string text = info[1].As<Napi::String>().Utf8Value();

  this->instance->insertItem(index, text.c_str());
  return env.Null();
}

Napi::Value QComboBoxWrap::addItems(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Array textsNapi = info[0].As<Napi::Array>();
  QList<QString> list;
  for (int i = 0; i < textsNapi.Length(); i++) {
    Napi::Value textNapi = textsNapi[i];
    list.append(textNapi.As<Napi::String>().Utf8Value().c_str());
  }
  QStringList texts = QStringList(list);

  this->instance->addItems(texts);
  return env.Null();
}

Napi::Value QComboBoxWrap::insertItems(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int index = info[0].As<Napi::Number>().Int32Value();
  Napi::Array textsNapi = info[1].As<Napi::Array>();
  QList<QString> list;
  for (int i = 0; i < textsNapi.Length(); i++) {
    Napi::Value textNapi = textsNapi[i];
    list.append(textNapi.As<Napi::String>().Utf8Value().c_str());
  }
  QStringList texts = QStringList(list);

  this->instance->insertItems(index, texts);
  return env.Null();
}

Napi::Value QComboBoxWrap::currentIndex(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, this->instance->currentIndex());
}

Napi::Value QComboBoxWrap::currentText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::String::New(env, this->instance->currentText().toStdString());
}

Napi::Value QComboBoxWrap::insertSeparator(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int index = info[0].As<Napi::Number>().Int32Value();

  this->instance->insertSeparator(index);
  return env.Null();
}

Napi::Value QComboBoxWrap::itemText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int index = info[0].As<Napi::Number>().Int32Value();

  return Napi::String::New(env, this->instance->itemText(index).toStdString());
}

Napi::Value QComboBoxWrap::itemData(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int index = info[0].As<Napi::Number>().Int32Value();
  QVariant* variant = new QVariant(this->instance->itemData(index));
  auto variantWrap = QVariantWrap::constructor.New(
      {Napi::External<QVariant>::New(env, variant)});
  return variantWrap;
}

Napi::Value QComboBoxWrap::removeItem(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int index = info[0].As<Napi::Number>().Int32Value();

  this->instance->removeItem(index);
  return env.Null();
}

Napi::Value QComboBoxWrap::sizeAdjustPolicy(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, this->instance->sizeAdjustPolicy());
}
Napi::Value QComboBoxWrap::setSizeAdjustPolicy(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QComboBox::SizeAdjustPolicy policy = static_cast<QComboBox::SizeAdjustPolicy>(
      info[0].As<Napi::Number>().Int32Value());
  this->instance->setSizeAdjustPolicy(policy);
  return env.Null();
}

Napi::Value QComboBoxWrap::maxVisibleItems(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Number::New(env, this->instance->maxVisibleItems());
}

Napi::Value QComboBoxWrap::setMaxVisibleItems(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  int maxItems = info[0].As<Napi::Number>().Int32Value();

  this->instance->setMaxVisibleItems(maxItems);
  return env.Null();
}

Napi::Value QComboBoxWrap::isEditable(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  return Napi::Boolean::New(env, this->instance->isEditable());
}

Napi::Value QComboBoxWrap::setEditable(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  bool editable = info[0].As<Napi::Boolean>().Value();

  this->instance->setEditable(editable);
  return env.Null();
}

Napi::Value QComboBoxWrap::clear(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  this->instance->clear();
  return env.Null();
}

Napi::Value QComboBoxWrap::setModel(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::Object itemObject = info[0].As<Napi::Object>();
  QStandardItemModelWrap* modelWrap =
      Napi::ObjectWrap<QStandardItemModelWrap>::Unwrap(itemObject);
  QStandardItemModel* model = modelWrap->getInternalInstance();

  this->instance->setModel(model);
  return env.Null();
}
Napi::Value QComboBoxWrap::setEditText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);

  Napi::String text = info[0].As<Napi::String>();
  this->instance->setEditText(text.Utf8Value().c_str());

  return env.Null();
}
Napi::Value QComboBoxWrap::count(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int result = this->instance->count();
  return Napi::Number::New(env, result);
}
Napi::Value QComboBoxWrap::duplicatesEnabled(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  bool result = this->instance->duplicatesEnabled();
  return Napi::Boolean::New(env, result);
}
Napi::Value QComboBoxWrap::hasFrame(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  bool result = this->instance->hasFrame();
  return Napi::Boolean::New(env, result);
}

Napi::Value QComboBoxWrap::hidePopup(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->hidePopup();
  return env.Null();
}

Napi::Value QComboBoxWrap::iconSize(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QSize result = this->instance->iconSize();
  auto resultInstance = QSizeWrap::constructor.New(
      {Napi::External<QSize>::New(env, new QSize(result))});
  return resultInstance;
}
Napi::Value QComboBoxWrap::maxCount(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int result = this->instance->maxCount();
  return Napi::Number::New(env, result);
}
Napi::Value QComboBoxWrap::minimumContentsLength(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int result = this->instance->minimumContentsLength();
  return Napi::Number::New(env, result);
}
Napi::Value QComboBoxWrap::modelColumn(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int result = this->instance->modelColumn();
  return Napi::Number::New(env, result);
}
Napi::Value QComboBoxWrap::rootModelIndex(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QModelIndex result = this->instance->rootModelIndex();
  auto resultInstance = QModelIndexWrap::constructor.New(
      {Napi::External<QModelIndex>::New(env, new QModelIndex(result))});
  return resultInstance;
}
Napi::Value QComboBoxWrap::setDuplicatesEnabled(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  bool enable = info[0].As<Napi::Boolean>().Value();
  this->instance->setDuplicatesEnabled(enable);
  return env.Null();
}
Napi::Value QComboBoxWrap::setMinimumContentsLength(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int characters = info[0].As<Napi::Number>().Int32Value();
  this->instance->setMinimumContentsLength(characters);
  return env.Null();
}
Napi::Value QComboBoxWrap::setModelColumn(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int visibleColumn = info[0].As<Napi::Number>().Int32Value();
  this->instance->setModelColumn(visibleColumn);
  return env.Null();
}
Napi::Value QComboBoxWrap::setRootModelIndex(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QModelIndexWrap* indexWrap =
      Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>());
  QModelIndex* index = indexWrap->getInternalInstance();
  this->instance->setRootModelIndex(*index);
  return env.Null();
}
Napi::Value QComboBoxWrap::clearEditText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->clearEditText();
  return env.Null();
}
Napi::Value QComboBoxWrap::setFrame(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  bool f = info[0].As<Napi::Boolean>().Value();
  this->instance->setFrame(f);
  return env.Null();
}
Napi::Value QComboBoxWrap::setItemText(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int index = info[0].As<Napi::Number>().Int32Value();
  std::string textNapiText = info[1].As<Napi::String>().Utf8Value();
  QString text = QString::fromUtf8(textNapiText.c_str());
  this->instance->setItemText(index, text);
  return env.Null();
}
Napi::Value QComboBoxWrap::setMaxCount(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  int max = info[0].As<Napi::Number>().Int32Value();
  this->instance->setMaxCount(max);
  return env.Null();
}
Napi::Value QComboBoxWrap::showPopup(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  this->instance->showPopup();
  return env.Null();
}
Napi::Value QComboBoxWrap::insertPolicy(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QComboBox::InsertPolicy result = this->instance->insertPolicy();
  return Napi::Number::New(env, static_cast<uint>(result));
}
Napi::Value QComboBoxWrap::setInsertPolicy(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QComboBox::InsertPolicy policy = static_cast<QComboBox::InsertPolicy>(
      info[0].As<Napi::Number>().Int32Value());
  this->instance->setInsertPolicy(policy);
  return env.Null();
}
Napi::Value QComboBoxWrap::setIconSize(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::HandleScope scope(env);
  QSizeWrap* sizeWrap =
      Napi::ObjectWrap<QSizeWrap>::Unwrap(info[0].As<Napi::Object>());
  QSize* size = sizeWrap->getInternalInstance();
  this->instance->setIconSize(*size);
  return env.Null();
}
