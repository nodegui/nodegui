#pragma once

#include <napi.h>

#include <QPointer>

#include "Extras/Utils/nutils.h"
#include "QtWidgets/QAbstractItemView/qabstractitemview_macro.h"
#include "QtWidgets/QHeaderView/nheaderview.hpp"

class DLL_EXPORT QHeaderViewWrap : public Napi::ObjectWrap<QHeaderViewWrap> {
  QABSTRACTITEMVIEW_WRAPPED_METHODS_DECLARATION_NO_QHEADERVIEW_PROTECTED

  Napi::Value indexAt(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    QPointWrap* pointWrap =
        Napi::ObjectWrap<QPointWrap>::Unwrap(info[0].As<Napi::Object>());
    QPoint* point = pointWrap->getInternalInstance();

    NHeaderView* wrapper = dynamic_cast<NHeaderView*>(this->instance.data());
    if (wrapper) {
      QModelIndex result = wrapper->_protected_indexAt(*point);
      auto resultInstance = QModelIndexWrap::constructor.New(
          {Napi::External<QModelIndex>::New(env, new QModelIndex(result))});
      return resultInstance;
    } else {
      return env.Null();
    }
  }

  Napi::Value scrollTo(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    NHeaderView* wrapper = dynamic_cast<NHeaderView*>(this->instance.data());
    if (wrapper) {
      QModelIndexWrap* indexWrap =
          Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>());
      QModelIndex* index = indexWrap->getInternalInstance();
      QAbstractItemView::ScrollHint hint =
          static_cast<QAbstractItemView::ScrollHint>(
              info[1].As<Napi::Number>().Int32Value());
      wrapper->_protected_scrollTo(*index, hint);
    }
    return env.Null();
  }

  Napi::Value visualRect(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();

    NHeaderView* wrapper = dynamic_cast<NHeaderView*>(this->instance.data());
    if (wrapper) {
      QModelIndexWrap* indexWrap =
          Napi::ObjectWrap<QModelIndexWrap>::Unwrap(info[0].As<Napi::Object>());
      QModelIndex* index = indexWrap->getInternalInstance();
      QRect ret = wrapper->_protected_visualRect(*index);
      auto instance = QRectWrap::constructor.New(
          {Napi::External<QRect>::New(env, new QRect(ret))});
      return instance;
    }
    return env.Null();
  }

 private:
  QPointer<QHeaderView> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QHeaderViewWrap(const Napi::CallbackInfo& info);
  ~QHeaderViewWrap();
  QHeaderView* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;
  // wrapped methods
  Napi::Value cascadingSectionResizes(const Napi::CallbackInfo& info);
  Napi::Value count(const Napi::CallbackInfo& info);
  Napi::Value defaultAlignment(const Napi::CallbackInfo& info);
  Napi::Value defaultSectionSize(const Napi::CallbackInfo& info);
  Napi::Value hiddenSectionCount(const Napi::CallbackInfo& info);
  Napi::Value hideSection(const Napi::CallbackInfo& info);
  Napi::Value highlightSections(const Napi::CallbackInfo& info);
  Napi::Value isFirstSectionMovable(const Napi::CallbackInfo& info);
  Napi::Value isSectionHidden(const Napi::CallbackInfo& info);
  Napi::Value isSortIndicatorShown(const Napi::CallbackInfo& info);
  Napi::Value length(const Napi::CallbackInfo& info);
  Napi::Value logicalIndex(const Napi::CallbackInfo& info);
  Napi::Value logicalIndexAt(const Napi::CallbackInfo& info);
  Napi::Value logicalIndexAt_number_number(const Napi::CallbackInfo& info);
  Napi::Value logicalIndexAt_qpoint(const Napi::CallbackInfo& info);
  Napi::Value maximumSectionSize(const Napi::CallbackInfo& info);
  Napi::Value minimumSectionSize(const Napi::CallbackInfo& info);
  Napi::Value moveSection(const Napi::CallbackInfo& info);
  Napi::Value offset(const Napi::CallbackInfo& info);
  Napi::Value orientation(const Napi::CallbackInfo& info);
  Napi::Value resetDefaultSectionSize(const Napi::CallbackInfo& info);
  Napi::Value resizeContentsPrecision(const Napi::CallbackInfo& info);
  Napi::Value resizeSection(const Napi::CallbackInfo& info);
  Napi::Value resizeSections(const Napi::CallbackInfo& info);
  Napi::Value sectionPosition(const Napi::CallbackInfo& info);
  Napi::Value sectionResizeMode(const Napi::CallbackInfo& info);
  Napi::Value sectionSize(const Napi::CallbackInfo& info);
  Napi::Value sectionSizeHint(const Napi::CallbackInfo& info);
  Napi::Value sectionViewportPosition(const Napi::CallbackInfo& info);
  Napi::Value sectionsClickable(const Napi::CallbackInfo& info);
  Napi::Value sectionsHidden(const Napi::CallbackInfo& info);
  Napi::Value sectionsMovable(const Napi::CallbackInfo& info);
  Napi::Value sectionsMoved(const Napi::CallbackInfo& info);
  Napi::Value setCascadingSectionResizes(const Napi::CallbackInfo& info);
  Napi::Value setDefaultAlignment(const Napi::CallbackInfo& info);
  Napi::Value setDefaultSectionSize(const Napi::CallbackInfo& info);
  Napi::Value setFirstSectionMovable(const Napi::CallbackInfo& info);
  Napi::Value setHighlightSections(const Napi::CallbackInfo& info);
  Napi::Value setMaximumSectionSize(const Napi::CallbackInfo& info);
  Napi::Value setMinimumSectionSize(const Napi::CallbackInfo& info);
  Napi::Value setResizeContentsPrecision(const Napi::CallbackInfo& info);
  Napi::Value setSectionHidden(const Napi::CallbackInfo& info);
  Napi::Value setSectionResizeMode_mode(const Napi::CallbackInfo& info);
  Napi::Value setSectionResizeMode_number_mode(const Napi::CallbackInfo& info);
  Napi::Value setSectionsClickable(const Napi::CallbackInfo& info);
  Napi::Value setSectionsMovable(const Napi::CallbackInfo& info);
  Napi::Value setSortIndicator(const Napi::CallbackInfo& info);
  Napi::Value setSortIndicatorShown(const Napi::CallbackInfo& info);
  Napi::Value showSection(const Napi::CallbackInfo& info);
  Napi::Value sortIndicatorOrder(const Napi::CallbackInfo& info);
  Napi::Value sortIndicatorSection(const Napi::CallbackInfo& info);
  Napi::Value stretchSectionCount(const Napi::CallbackInfo& info);
  Napi::Value swapSections(const Napi::CallbackInfo& info);
  Napi::Value visualIndex(const Napi::CallbackInfo& info);
  Napi::Value visualIndexAt(const Napi::CallbackInfo& info);
  Napi::Value headerDataChanged(const Napi::CallbackInfo& info);
  Napi::Value setOffset(const Napi::CallbackInfo& info);
  Napi::Value setOffsetToLastSection(const Napi::CallbackInfo& info);
  Napi::Value setOffsetToSectionPosition(const Napi::CallbackInfo& info);
};
