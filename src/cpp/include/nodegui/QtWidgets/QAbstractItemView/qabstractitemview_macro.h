#pragma once

#include "QtCore/QAbstractItemModel/qabstractitemmodel_wrap.h"
#include "QtCore/QItemSelectionModel/qitemselectionmodel_wrap.h"
#include "QtCore/QModelIndex/qmodelindex_wrap.h"
#include "QtWidgets/QAbstractScrollArea/qabstractscrollarea_macro.h"
#include "QtWidgets/QWidget/qwidget_wrap.h"

/*

    This macro adds common QAbstractItemView exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef QABSTRACTITEMVIEW_WRAPPED_METHODS_DECLARATION

// This silly *WITHOUT_INDEXAT nonsense is for the benefit of QHeaderView and
// its redefinition of `indexAt()` as protected(!) instead of plain public.
// *sigh*
#define QABSTRACTITEMVIEW_WRAPPED_METHODS_DECLARATION_NO_QHEADERVIEW_PROTECTED \
  QABSTRACTSCROLLAREA_WRAPPED_METHODS_DECLARATION                              \
  Napi::Value setCurrentIndex(const Napi::CallbackInfo& info) {                \
    Napi::Env env = info.Env();                                                \
    Napi::Object indexObject = info[0].As<Napi::Object>();                     \
    QModelIndexWrap* indexWrap =                                               \
        Napi::ObjectWrap<QModelIndexWrap>::Unwrap(indexObject);                \
    this->instance->setCurrentIndex(*indexWrap->getInternalInstance());        \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value currentIndex(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                                \
    QModelIndex current = this->instance->currentIndex();                      \
    auto instance = QModelIndexWrap::constructor.New(                          \
        {Napi::External<QModelIndex>::New(env, new QModelIndex(current))});    \
    return instance;                                                           \
  }                                                                            \
  Napi::Value setIndexWidget(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                                \
    Napi::Object indexObject = info[0].As<Napi::Object>();                     \
    Napi::Object widgetObject = info[1].As<Napi::Object>();                    \
    QModelIndexWrap* indexWrap =                                               \
        Napi::ObjectWrap<QModelIndexWrap>::Unwrap(indexObject);                \
    NodeWidgetWrap* widgetWrap =                                               \
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(widgetObject);                \
    this->instance->setIndexWidget(*indexWrap->getInternalInstance(),          \
                                   widgetWrap->getInternalInstance());         \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value indexWidget(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                                \
    Napi::Object indexObject = info[0].As<Napi::Object>();                     \
    QModelIndexWrap* indexWrap =                                               \
        Napi::ObjectWrap<QModelIndexWrap>::Unwrap(indexObject);                \
    QWidget* widget =                                                          \
        this->instance->indexWidget(*indexWrap->getInternalInstance());        \
    auto instance = QWidgetWrap::constructor.New(                              \
        {Napi::External<QWidget>::New(env, widget),                            \
         Napi::Boolean::New(env, true)});                                      \
    return instance;                                                           \
  }                                                                            \
  Napi::Value resetHorizontalScrollMode(const Napi::CallbackInfo& info) {      \
    Napi::Env env = info.Env();                                                \
    this->instance->resetHorizontalScrollMode();                               \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value resetVerticalScrollMode(const Napi::CallbackInfo& info) {        \
    Napi::Env env = info.Env();                                                \
    this->instance->resetVerticalScrollMode();                                 \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value rootIndex(const Napi::CallbackInfo& info) {                      \
    Napi::Env env = info.Env();                                                \
    QModelIndex root = this->instance->rootIndex();                            \
    auto instance = QModelIndexWrap::constructor.New(                          \
        {Napi::External<QModelIndex>::New(env, new QModelIndex(root))});       \
    return instance;                                                           \
  }                                                                            \
  Napi::Value scrollToBottom(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                                \
    this->instance->scrollToBottom();                                          \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value scrollToTop(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                                \
    this->instance->scrollToTop();                                             \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setModel(const Napi::CallbackInfo& info) {                       \
    Napi::Env env = info.Env();                                                \
    Napi::Object modelObject = info[0].As<Napi::Object>();                     \
    QAbstractItemModelWrap* modelWrap =                                        \
        Napi::ObjectWrap<QAbstractItemModelWrap>::Unwrap(modelObject);         \
    QAbstractItemView* instance = this->instance;                              \
    instance->setModel(modelWrap->getInternalInstance());                      \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value closePersistentEditor(const Napi::CallbackInfo& info) {          \
    Napi::Env env = info.Env();                                                \
    QModelIndexWrap* indexWrap =                                               \
        Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>()); \
    QModelIndex* index = indexWrap->getInternalInstance();                     \
    this->instance->QAbstractItemView::closePersistentEditor(*index);          \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value clearSelection(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                                \
    this->instance->clearSelection();                                          \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value edit(const Napi::CallbackInfo& info) {                           \
    Napi::Env env = info.Env();                                                \
    QModelIndexWrap* indexWrap =                                               \
        Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>()); \
    QModelIndex* index = indexWrap->getInternalInstance();                     \
    this->instance->edit(*index);                                              \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value reset(const Napi::CallbackInfo& info) {                          \
    Napi::Env env = info.Env();                                                \
    this->instance->reset();                                                   \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value selectAll(const Napi::CallbackInfo& info) {                      \
    Napi::Env env = info.Env();                                                \
    this->instance->selectAll();                                               \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setRootIndex(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                                \
    QModelIndexWrap* indexWrap =                                               \
        Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>()); \
    QModelIndex* index = indexWrap->getInternalInstance();                     \
    this->instance->setRootIndex(*index);                                      \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value update_QModelIndex(const Napi::CallbackInfo& info) {             \
    Napi::Env env = info.Env();                                                \
    QModelIndexWrap* indexWrap =                                               \
        Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>()); \
    QModelIndex* index = indexWrap->getInternalInstance();                     \
    this->instance->update(*index);                                            \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value selectionModel(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                                \
    QItemSelectionModel* model = this->instance->selectionModel();             \
    return WrapperCache::instance.getWrapper(env, model);                      \
  }                                                                            \
  Napi::Value isPersistentEditorOpen(const Napi::CallbackInfo& info) {         \
    Napi::Env env = info.Env();                                                \
    QModelIndexWrap* indexWrap =                                               \
        Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>()); \
    QModelIndex* index = indexWrap->getInternalInstance();                     \
    bool result = this->instance->isPersistentEditorOpen(*index);              \
    return Napi::Boolean::New(env, result);                                    \
  }                                                                            \
  Napi::Value openPersistentEditor(const Napi::CallbackInfo& info) {           \
    Napi::Env env = info.Env();                                                \
    QModelIndexWrap* indexWrap =                                               \
        Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>()); \
    QModelIndex* index = indexWrap->getInternalInstance();                     \
    this->instance->QAbstractItemView::openPersistentEditor(*index);           \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value keyboardSearch(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                                \
    std::string searchNapiText = info[0].As<Napi::String>().Utf8Value();       \
    QString search = QString::fromUtf8(searchNapiText.c_str());                \
    this->instance->keyboardSearch(search);                                    \
    return env.Null();                                                         \
  }

#define QABSTRACTITEMVIEW_WRAPPED_METHODS_DECLARATION                          \
  QABSTRACTITEMVIEW_WRAPPED_METHODS_DECLARATION_NO_QHEADERVIEW_PROTECTED       \
  Napi::Value indexAt(const Napi::CallbackInfo& info) {                        \
    Napi::Env env = info.Env();                                                \
    QPointWrap* pointWrap =                                                    \
        Napi::ObjectWrap<QPointWrap>::Unwrap(info[0].As<Napi::Object>());      \
    QPoint* point = pointWrap->getInternalInstance();                          \
    QModelIndex result = this->instance->indexAt(*point);                      \
    auto resultInstance = QModelIndexWrap::constructor.New(                    \
        {Napi::External<QModelIndex>::New(env, new QModelIndex(result))});     \
    return resultInstance;                                                     \
  }                                                                            \
  Napi::Value scrollTo(const Napi::CallbackInfo& info) {                       \
    Napi::Env env = info.Env();                                                \
    QModelIndexWrap* indexWrap =                                               \
        Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>()); \
    QModelIndex* index = indexWrap->getInternalInstance();                     \
    QAbstractItemView::ScrollHint hint =                                       \
        static_cast<QAbstractItemView::ScrollHint>(                            \
            info[1].As<Napi::Number>().Int32Value());                          \
    this->instance->scrollTo(*index, hint);                                    \
    return env.Null();                                                         \
  }

#endif  // QABSTRACTITEMVIEW_WRAPPED_METHODS_DECLARATION

#ifndef QABSTRACTITEMVIEW_WRAPPED_METHODS_EXPORT_DEFINE
#define QABSTRACTITEMVIEW_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)  \
  QABSTRACTSCROLLAREA_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)      \
  InstanceMethod("setCurrentIndex", &WidgetWrapName::setCurrentIndex),   \
      InstanceMethod("currentIndex", &WidgetWrapName::currentIndex),     \
      InstanceMethod("setIndexWidget", &WidgetWrapName::setIndexWidget), \
      InstanceMethod("indexWidget", &WidgetWrapName::indexWidget),       \
      InstanceMethod("resetHorizontalScrollMode",                        \
                     &WidgetWrapName::resetHorizontalScrollMode),        \
      InstanceMethod("resetVerticalScrollMode",                          \
                     &WidgetWrapName::resetVerticalScrollMode),          \
      InstanceMethod("rootIndex", &WidgetWrapName::rootIndex),           \
      InstanceMethod("scrollToBottom", &WidgetWrapName::scrollToBottom), \
      InstanceMethod("scrollToTop", &WidgetWrapName::scrollToTop),       \
      InstanceMethod("setModel", &WidgetWrapName::setModel),             \
      InstanceMethod("closePersistentEditor",                            \
                     &WidgetWrapName::closePersistentEditor),            \
      InstanceMethod("clearSelection", &WidgetWrapName::clearSelection), \
      InstanceMethod("edit", &WidgetWrapName::edit),                     \
      InstanceMethod("reset", &WidgetWrapName::reset),                   \
      InstanceMethod("selectAll", &WidgetWrapName::selectAll),           \
      InstanceMethod("setRootIndex", &WidgetWrapName::setRootIndex),     \
      InstanceMethod("update_QModelIndex",                               \
                     &WidgetWrapName::update_QModelIndex),               \
      InstanceMethod("indexAt", &WidgetWrapName::indexAt),               \
      InstanceMethod("selectionModel", &WidgetWrapName::selectionModel), \
      InstanceMethod("scrollTo", &WidgetWrapName::scrollTo),             \
      InstanceMethod("isPersistentEditorOpen",                           \
                     &WidgetWrapName::isPersistentEditorOpen),           \
      InstanceMethod("openPersistentEditor",                             \
                     &WidgetWrapName::openPersistentEditor),             \
      InstanceMethod("keyboardSearch", &WidgetWrapName::keyboardSearch),

#endif  // QABSTRACTITEMVIEW_WRAPPED_METHODS_EXPORT_DEFINE

#ifndef QABSTRACTITEMVIEW_SIGNALS
#define QABSTRACTITEMVIEW_SIGNALS                                              \
  QABSTRACTSCROLLAREA_SIGNALS                                                  \
  QObject::connect(                                                            \
      this, &QAbstractItemView::activated, [=](const QModelIndex& index) {     \
        Napi::Env env = this->emitOnNode.Env();                                \
        Napi::HandleScope scope(env);                                          \
        auto indexInstance = QModelIndexWrap::constructor.New(                 \
            {Napi::External<QModelIndex>::New(env, new QModelIndex(index))});  \
        this->emitOnNode.Call(                                                 \
            {Napi::String::New(env, "activated"), indexInstance});             \
      });                                                                      \
  QObject::connect(                                                            \
      this, &QAbstractItemView::clicked, [=](const QModelIndex& index) {       \
        Napi::Env env = this->emitOnNode.Env();                                \
        Napi::HandleScope scope(env);                                          \
        auto indexInstance = QModelIndexWrap::constructor.New(                 \
            {Napi::External<QModelIndex>::New(env, new QModelIndex(index))});  \
        this->emitOnNode.Call(                                                 \
            {Napi::String::New(env, "clicked"), indexInstance});               \
      });                                                                      \
  QObject::connect(                                                            \
      this, &QAbstractItemView::doubleClicked, [=](const QModelIndex& index) { \
        Napi::Env env = this->emitOnNode.Env();                                \
        Napi::HandleScope scope(env);                                          \
        auto indexInstance = QModelIndexWrap::constructor.New(                 \
            {Napi::External<QModelIndex>::New(env, new QModelIndex(index))});  \
        this->emitOnNode.Call(                                                 \
            {Napi::String::New(env, "doubleClicked"), indexInstance});         \
      });                                                                      \
  QObject::connect(                                                            \
      this, &QAbstractItemView::entered, [=](const QModelIndex& index) {       \
        Napi::Env env = this->emitOnNode.Env();                                \
        Napi::HandleScope scope(env);                                          \
        auto indexInstance = QModelIndexWrap::constructor.New(                 \
            {Napi::External<QModelIndex>::New(env, new QModelIndex(index))});  \
        this->emitOnNode.Call(                                                 \
            {Napi::String::New(env, "entered"), indexInstance});               \
      });                                                                      \
  QObject::connect(                                                            \
      this, &QAbstractItemView::iconSizeChanged, [=](const QSize& size) {      \
        Napi::Env env = this->emitOnNode.Env();                                \
        Napi::HandleScope scope(env);                                          \
        auto sizeInstance = QSizeWrap::constructor.New(                        \
            {Napi::External<QSize>::New(env, new QSize(size))});               \
        this->emitOnNode.Call(                                                 \
            {Napi::String::New(env, "iconSizeChanged"), sizeInstance});        \
      });                                                                      \
  QObject::connect(                                                            \
      this, &QAbstractItemView::pressed, [=](const QModelIndex& index) {       \
        Napi::Env env = this->emitOnNode.Env();                                \
        Napi::HandleScope scope(env);                                          \
        auto indexInstance = QModelIndexWrap::constructor.New(                 \
            {Napi::External<QModelIndex>::New(env, new QModelIndex(index))});  \
        this->emitOnNode.Call(                                                 \
            {Napi::String::New(env, "pressed"), indexInstance});               \
      });                                                                      \
  QObject::connect(this, &QAbstractItemView::viewportEntered, [=]() {          \
    Napi::Env env = this->emitOnNode.Env();                                    \
    Napi::HandleScope scope(env);                                              \
    this->emitOnNode.Call({Napi::String::New(env, "viewportEntered")});        \
  });

#endif  // QABSTRACTITEMVIEW_SIGNALS
