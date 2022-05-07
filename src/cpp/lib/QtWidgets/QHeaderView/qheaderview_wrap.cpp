#include "QtWidgets/QHeaderView/qheaderview_wrap.h"

#include "Extras/Utils/nutils.h"

Napi::FunctionReference QHeaderViewWrap::constructor;

Napi::Object QHeaderViewWrap::init(Napi::Env env, Napi::Object exports) {
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QHeaderView";
  Napi::Function func = DefineClass(
      env, CLASSNAME,
      {
          QABSTRACTITEMVIEW_WRAPPED_METHODS_EXPORT_DEFINE(QHeaderViewWrap)
              InstanceMethod("cascadingSectionResizes",
                             &QHeaderViewWrap::cascadingSectionResizes),
          InstanceMethod("count", &QHeaderViewWrap::count),
          InstanceMethod("defaultAlignment",
                         &QHeaderViewWrap::defaultAlignment),
          InstanceMethod("defaultSectionSize",
                         &QHeaderViewWrap::defaultSectionSize),
          InstanceMethod("hiddenSectionCount",
                         &QHeaderViewWrap::hiddenSectionCount),
          InstanceMethod("hideSection", &QHeaderViewWrap::hideSection),
          InstanceMethod("highlightSections",
                         &QHeaderViewWrap::highlightSections),
          InstanceMethod("isFirstSectionMovable",
                         &QHeaderViewWrap::isFirstSectionMovable),
          InstanceMethod("isSectionHidden", &QHeaderViewWrap::isSectionHidden),
          InstanceMethod("isSortIndicatorShown",
                         &QHeaderViewWrap::isSortIndicatorShown),
          InstanceMethod("length", &QHeaderViewWrap::length),
          InstanceMethod("logicalIndex", &QHeaderViewWrap::logicalIndex),
          InstanceMethod("logicalIndexAt", &QHeaderViewWrap::logicalIndexAt),
          InstanceMethod("logicalIndexAt_number_number",
                         &QHeaderViewWrap::logicalIndexAt_number_number),
          InstanceMethod("logicalIndexAt_qpoint",
                         &QHeaderViewWrap::logicalIndexAt_qpoint),
          InstanceMethod("maximumSectionSize",
                         &QHeaderViewWrap::maximumSectionSize),
          InstanceMethod("minimumSectionSize",
                         &QHeaderViewWrap::minimumSectionSize),
          InstanceMethod("moveSection", &QHeaderViewWrap::moveSection),
          InstanceMethod("offset", &QHeaderViewWrap::offset),
          InstanceMethod("orientation", &QHeaderViewWrap::orientation),
          InstanceMethod("resetDefaultSectionSize",
                         &QHeaderViewWrap::resetDefaultSectionSize),
          InstanceMethod("resizeContentsPrecision",
                         &QHeaderViewWrap::resizeContentsPrecision),
          InstanceMethod("resizeSection", &QHeaderViewWrap::resizeSection),
          InstanceMethod("resizeSections", &QHeaderViewWrap::resizeSections),
          InstanceMethod("sectionPosition", &QHeaderViewWrap::sectionPosition),
          InstanceMethod("sectionResizeMode",
                         &QHeaderViewWrap::sectionResizeMode),
          InstanceMethod("sectionSize", &QHeaderViewWrap::sectionSize),
          InstanceMethod("sectionSizeHint", &QHeaderViewWrap::sectionSizeHint),
          InstanceMethod("sectionViewportPosition",
                         &QHeaderViewWrap::sectionViewportPosition),
          InstanceMethod("sectionsClickable",
                         &QHeaderViewWrap::sectionsClickable),
          InstanceMethod("sectionsHidden", &QHeaderViewWrap::sectionsHidden),
          InstanceMethod("sectionsMovable", &QHeaderViewWrap::sectionsMovable),
          InstanceMethod("sectionsMoved", &QHeaderViewWrap::sectionsMoved),
          InstanceMethod("setCascadingSectionResizes",
                         &QHeaderViewWrap::setCascadingSectionResizes),
          InstanceMethod("setDefaultAlignment",
                         &QHeaderViewWrap::setDefaultAlignment),
          InstanceMethod("setDefaultSectionSize",
                         &QHeaderViewWrap::setDefaultSectionSize),
          InstanceMethod("setFirstSectionMovable",
                         &QHeaderViewWrap::setFirstSectionMovable),
          InstanceMethod("setHighlightSections",
                         &QHeaderViewWrap::setHighlightSections),
          InstanceMethod("setMaximumSectionSize",
                         &QHeaderViewWrap::setMaximumSectionSize),
          InstanceMethod("setMinimumSectionSize",
                         &QHeaderViewWrap::setMinimumSectionSize),
          InstanceMethod("setResizeContentsPrecision",
                         &QHeaderViewWrap::setResizeContentsPrecision),
          InstanceMethod("setSectionHidden",
                         &QHeaderViewWrap::setSectionHidden),
          InstanceMethod("setSectionResizeMode_mode",
                         &QHeaderViewWrap::setSectionResizeMode_mode),
          InstanceMethod("setSectionResizeMode_number_mode",
                         &QHeaderViewWrap::setSectionResizeMode_number_mode),
          InstanceMethod("setSectionsClickable",
                         &QHeaderViewWrap::setSectionsClickable),
          InstanceMethod("setSectionsMovable",
                         &QHeaderViewWrap::setSectionsMovable),
          InstanceMethod("setSortIndicator",
                         &QHeaderViewWrap::setSortIndicator),
          InstanceMethod("setSortIndicatorShown",
                         &QHeaderViewWrap::setSortIndicatorShown),
          InstanceMethod("showSection", &QHeaderViewWrap::showSection),
          InstanceMethod("sortIndicatorOrder",
                         &QHeaderViewWrap::sortIndicatorOrder),
          InstanceMethod("sortIndicatorSection",
                         &QHeaderViewWrap::sortIndicatorSection),
          InstanceMethod("stretchSectionCount",
                         &QHeaderViewWrap::stretchSectionCount),
          InstanceMethod("swapSections", &QHeaderViewWrap::swapSections),
          InstanceMethod("visualIndex", &QHeaderViewWrap::visualIndex),
          InstanceMethod("visualIndexAt", &QHeaderViewWrap::visualIndexAt),
          InstanceMethod("headerDataChanged",
                         &QHeaderViewWrap::headerDataChanged),
          InstanceMethod("setOffset", &QHeaderViewWrap::setOffset),
          InstanceMethod("setOffsetToLastSection",
                         &QHeaderViewWrap::setOffsetToLastSection),
          InstanceMethod("setOffsetToSectionPosition",
                         &QHeaderViewWrap::setOffsetToSectionPosition),

      });
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
  QOBJECT_REGISTER_WRAPPER(QHeaderView, QHeaderViewWrap);
  return exports;
}

QHeaderView* QHeaderViewWrap::getInternalInstance() { return this->instance; }

QHeaderViewWrap::~QHeaderViewWrap() { extrautils::safeDelete(this->instance); }

QHeaderViewWrap::QHeaderViewWrap(const Napi::CallbackInfo& info)
    : Napi::ObjectWrap<QHeaderViewWrap>(info) {
  Napi::Env env = info.Env();
  size_t argCount = info.Length();
  if (argCount == 1) {
    if (info[0].IsExternal()) {
      this->instance = info[0].As<Napi::External<QHeaderView>>().Data();
    } else {
      int orientation = info[0].As<Napi::Number>().Int32Value();
      this->instance =
          new NHeaderView(static_cast<Qt::Orientation>(orientation));
    }
  } else {
    // len ==2
    int orientation = info[0].As<Napi::Number>().Int32Value();
    Napi::Object parentObject = info[1].As<Napi::Object>();
    NodeWidgetWrap* parentWidgetWrap =
        Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(parentObject);
    this->instance = new NHeaderView(static_cast<Qt::Orientation>(orientation),
                                     parentWidgetWrap->getInternalInstance());
  }

  // this->instance can be either a `QHeaderView` or `NHeaderView`. Only
  // `NHeaderView` has the flex support available.
  this->rawData = nullptr;
  FlexItem* item = dynamic_cast<FlexItem*>(this->getInternalInstance());
  if (item) {
    this->rawData =
        extrautils::configureQWidget(this->getInternalInstance(), false);
  }
}

Napi::Value QHeaderViewWrap::cascadingSectionResizes(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool result = this->instance->cascadingSectionResizes();
  return Napi::Boolean::New(env, result);
}

Napi::Value QHeaderViewWrap::count(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int result = this->instance->count();
  return Napi::Number::New(env, result);
}

Napi::Value QHeaderViewWrap::defaultAlignment(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Qt::Alignment result = this->instance->defaultAlignment();
  return Napi::Number::New(env, static_cast<uint>(result));
}

Napi::Value QHeaderViewWrap::defaultSectionSize(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int result = this->instance->defaultSectionSize();
  return Napi::Number::New(env, result);
}

Napi::Value QHeaderViewWrap::hiddenSectionCount(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int result = this->instance->hiddenSectionCount();
  return Napi::Number::New(env, result);
}

Napi::Value QHeaderViewWrap::hideSection(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int logicalIndex = info[0].As<Napi::Number>().Int32Value();
  this->instance->hideSection(logicalIndex);
  return env.Null();
}

Napi::Value QHeaderViewWrap::highlightSections(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool result = this->instance->highlightSections();
  return Napi::Boolean::New(env, result);
}

Napi::Value QHeaderViewWrap::isFirstSectionMovable(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool result = this->instance->isFirstSectionMovable();
  return Napi::Boolean::New(env, result);
}

Napi::Value QHeaderViewWrap::isSectionHidden(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int logicalIndex = info[0].As<Napi::Number>().Int32Value();
  bool result = this->instance->isSectionHidden(logicalIndex);
  return Napi::Boolean::New(env, result);
}

Napi::Value QHeaderViewWrap::isSortIndicatorShown(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool result = this->instance->isSortIndicatorShown();
  return Napi::Boolean::New(env, result);
}

Napi::Value QHeaderViewWrap::length(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int result = this->instance->length();
  return Napi::Number::New(env, result);
}

Napi::Value QHeaderViewWrap::logicalIndex(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int visualIndex = info[0].As<Napi::Number>().Int32Value();
  int result = this->instance->logicalIndex(visualIndex);
  return Napi::Number::New(env, result);
}

Napi::Value QHeaderViewWrap::logicalIndexAt(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int position = info[0].As<Napi::Number>().Int32Value();
  int result = this->instance->logicalIndexAt(position);
  return Napi::Number::New(env, result);
}

Napi::Value QHeaderViewWrap::logicalIndexAt_number_number(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int x = info[0].As<Napi::Number>().Int32Value();
  int y = info[1].As<Napi::Number>().Int32Value();
  int result = this->instance->logicalIndexAt(x, y);
  return Napi::Number::New(env, result);
}

Napi::Value QHeaderViewWrap::logicalIndexAt_qpoint(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QPointWrap* posWrap =
      Napi::ObjectWrap<QPointWrap>::Unwrap(info[0].As<Napi::Object>());
  QPoint* pos = posWrap->getInternalInstance();
  int result = this->instance->logicalIndexAt(*pos);
  return Napi::Number::New(env, result);
}

Napi::Value QHeaderViewWrap::maximumSectionSize(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int result = this->instance->maximumSectionSize();
  return Napi::Number::New(env, result);
}

Napi::Value QHeaderViewWrap::minimumSectionSize(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int result = this->instance->minimumSectionSize();
  return Napi::Number::New(env, result);
}

Napi::Value QHeaderViewWrap::moveSection(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int from = info[0].As<Napi::Number>().Int32Value();
  int to = info[1].As<Napi::Number>().Int32Value();
  this->instance->moveSection(from, to);
  return env.Null();
}

Napi::Value QHeaderViewWrap::offset(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int result = this->instance->offset();
  return Napi::Number::New(env, result);
}

Napi::Value QHeaderViewWrap::orientation(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Qt::Orientation result = this->instance->orientation();
  return Napi::Number::New(env, static_cast<uint>(result));
}

Napi::Value QHeaderViewWrap::resetDefaultSectionSize(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->resetDefaultSectionSize();
  return env.Null();
}

Napi::Value QHeaderViewWrap::resizeContentsPrecision(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int result = this->instance->resizeContentsPrecision();
  return Napi::Number::New(env, result);
}

Napi::Value QHeaderViewWrap::resizeSection(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int logicalIndex = info[0].As<Napi::Number>().Int32Value();
  int size = info[1].As<Napi::Number>().Int32Value();
  this->instance->resizeSection(logicalIndex, size);
  return env.Null();
}

Napi::Value QHeaderViewWrap::resizeSections(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QHeaderView::ResizeMode mode = static_cast<QHeaderView::ResizeMode>(
      info[0].As<Napi::Number>().Int32Value());
  this->instance->resizeSections(mode);
  return env.Null();
}

Napi::Value QHeaderViewWrap::sectionPosition(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int logicalIndex = info[0].As<Napi::Number>().Int32Value();
  int result = this->instance->sectionPosition(logicalIndex);
  return Napi::Number::New(env, result);
}

Napi::Value QHeaderViewWrap::sectionResizeMode(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int logicalIndex = info[0].As<Napi::Number>().Int32Value();
  QHeaderView::ResizeMode result =
      this->instance->sectionResizeMode(logicalIndex);
  return Napi::Number::New(env, static_cast<uint>(result));
}

Napi::Value QHeaderViewWrap::sectionSize(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int logicalIndex = info[0].As<Napi::Number>().Int32Value();
  int result = this->instance->sectionSize(logicalIndex);
  return Napi::Number::New(env, result);
}

Napi::Value QHeaderViewWrap::sectionSizeHint(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int logicalIndex = info[0].As<Napi::Number>().Int32Value();
  int result = this->instance->sectionSizeHint(logicalIndex);
  return Napi::Number::New(env, result);
}

Napi::Value QHeaderViewWrap::sectionViewportPosition(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int logicalIndex = info[0].As<Napi::Number>().Int32Value();
  int result = this->instance->sectionViewportPosition(logicalIndex);
  return Napi::Number::New(env, result);
}

Napi::Value QHeaderViewWrap::sectionsClickable(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool result = this->instance->sectionsClickable();
  return Napi::Boolean::New(env, result);
}

Napi::Value QHeaderViewWrap::sectionsHidden(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool result = this->instance->sectionsHidden();
  return Napi::Boolean::New(env, result);
}

Napi::Value QHeaderViewWrap::sectionsMovable(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool result = this->instance->sectionsMovable();
  return Napi::Boolean::New(env, result);
}

Napi::Value QHeaderViewWrap::sectionsMoved(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool result = this->instance->sectionsMoved();
  return Napi::Boolean::New(env, result);
}

Napi::Value QHeaderViewWrap::setCascadingSectionResizes(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool enable = info[0].As<Napi::Boolean>().Value();
  this->instance->setCascadingSectionResizes(enable);
  return env.Null();
}

Napi::Value QHeaderViewWrap::setDefaultAlignment(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Qt::Alignment alignment =
      static_cast<Qt::Alignment>(info[0].As<Napi::Number>().Int32Value());
  this->instance->setDefaultAlignment(alignment);
  return env.Null();
}

Napi::Value QHeaderViewWrap::setDefaultSectionSize(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int size = info[0].As<Napi::Number>().Int32Value();
  this->instance->setDefaultSectionSize(size);
  return env.Null();
}

Napi::Value QHeaderViewWrap::setFirstSectionMovable(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool movable = info[0].As<Napi::Boolean>().Value();
  this->instance->setFirstSectionMovable(movable);
  return env.Null();
}

Napi::Value QHeaderViewWrap::setHighlightSections(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool highlight = info[0].As<Napi::Boolean>().Value();
  this->instance->setHighlightSections(highlight);
  return env.Null();
}

Napi::Value QHeaderViewWrap::setMaximumSectionSize(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int size = info[0].As<Napi::Number>().Int32Value();
  this->instance->setMaximumSectionSize(size);
  return env.Null();
}

Napi::Value QHeaderViewWrap::setMinimumSectionSize(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int size = info[0].As<Napi::Number>().Int32Value();
  this->instance->setMinimumSectionSize(size);
  return env.Null();
}

Napi::Value QHeaderViewWrap::setResizeContentsPrecision(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int precision = info[0].As<Napi::Number>().Int32Value();
  this->instance->setResizeContentsPrecision(precision);
  return env.Null();
}

Napi::Value QHeaderViewWrap::setSectionHidden(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int logicalIndex = info[0].As<Napi::Number>().Int32Value();
  bool hide = info[1].As<Napi::Boolean>().Value();
  this->instance->setSectionHidden(logicalIndex, hide);
  return env.Null();
}

Napi::Value QHeaderViewWrap::setSectionResizeMode_mode(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QHeaderView::ResizeMode mode = static_cast<QHeaderView::ResizeMode>(
      info[0].As<Napi::Number>().Int32Value());
  this->instance->setSectionResizeMode(mode);
  return env.Null();
}

Napi::Value QHeaderViewWrap::setSectionResizeMode_number_mode(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int logicalIndex = info[0].As<Napi::Number>().Int32Value();
  QHeaderView::ResizeMode mode = static_cast<QHeaderView::ResizeMode>(
      info[1].As<Napi::Number>().Int32Value());
  this->instance->setSectionResizeMode(logicalIndex, mode);
  return env.Null();
}

Napi::Value QHeaderViewWrap::setSectionsClickable(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool clickable = info[0].As<Napi::Boolean>().Value();
  this->instance->setSectionsClickable(clickable);
  return env.Null();
}

Napi::Value QHeaderViewWrap::setSectionsMovable(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool movable = info[0].As<Napi::Boolean>().Value();
  this->instance->setSectionsMovable(movable);
  return env.Null();
}

Napi::Value QHeaderViewWrap::setSortIndicator(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int logicalIndex = info[0].As<Napi::Number>().Int32Value();
  Qt::SortOrder order =
      static_cast<Qt::SortOrder>(info[1].As<Napi::Number>().Int32Value());
  this->instance->setSortIndicator(logicalIndex, order);
  return env.Null();
}

Napi::Value QHeaderViewWrap::setSortIndicatorShown(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool show = info[0].As<Napi::Boolean>().Value();
  this->instance->setSortIndicatorShown(show);
  return env.Null();
}
Napi::Value QHeaderViewWrap::showSection(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int logicalIndex = info[0].As<Napi::Number>().Int32Value();
  this->instance->showSection(logicalIndex);
  return env.Null();
}

Napi::Value QHeaderViewWrap::sortIndicatorOrder(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Qt::SortOrder result = this->instance->sortIndicatorOrder();
  return Napi::Number::New(env, static_cast<uint>(result));
}

Napi::Value QHeaderViewWrap::sortIndicatorSection(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int result = this->instance->sortIndicatorSection();
  return Napi::Number::New(env, result);
}
Napi::Value QHeaderViewWrap::stretchSectionCount(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int result = this->instance->stretchSectionCount();
  return Napi::Number::New(env, result);
}

Napi::Value QHeaderViewWrap::swapSections(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int first = info[0].As<Napi::Number>().Int32Value();
  int second = info[1].As<Napi::Number>().Int32Value();
  this->instance->swapSections(first, second);
  return env.Null();
}

Napi::Value QHeaderViewWrap::visualIndex(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int logicalIndex = info[0].As<Napi::Number>().Int32Value();
  int result = this->instance->visualIndex(logicalIndex);
  return Napi::Number::New(env, result);
}

Napi::Value QHeaderViewWrap::visualIndexAt(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int position = info[0].As<Napi::Number>().Int32Value();
  int result = this->instance->visualIndexAt(position);
  return Napi::Number::New(env, result);
}

Napi::Value QHeaderViewWrap::headerDataChanged(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Qt::Orientation orientation =
      static_cast<Qt::Orientation>(info[0].As<Napi::Number>().Int32Value());
  int logicalFirst = info[1].As<Napi::Number>().Int32Value();
  int logicalLast = info[2].As<Napi::Number>().Int32Value();
  this->instance->headerDataChanged(orientation, logicalFirst, logicalLast);
  return env.Null();
}

Napi::Value QHeaderViewWrap::setOffset(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int offset = info[0].As<Napi::Number>().Int32Value();
  this->instance->setOffset(offset);
  return env.Null();
}

Napi::Value QHeaderViewWrap::setOffsetToLastSection(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->setOffsetToLastSection();
  return env.Null();
}

Napi::Value QHeaderViewWrap::setOffsetToSectionPosition(
    const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int visualSectionNumber = info[0].As<Napi::Number>().Int32Value();
  this->instance->setOffsetToSectionPosition(visualSectionNumber);
  return env.Null();
}
