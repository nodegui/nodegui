#pragma once

#include <napi.h>

#include <QDrag>

#include "Extras/Export/export.h"
#include "QtGui/QDrag/ndrag.hpp"
#include "core/Component/component_macro.h"

/*
- Note that setMimeData() assigns ownership of the QMimeData object to the QDrag
object.
- The QDrag must be constructed on the heap with a parent QObject to ensure that
Qt can clean up after the drag and drop operation has been completed
*/
class DLL_EXPORT QDragWrap : public Napi::ObjectWrap<QDragWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION

 private:
  // A guarded pointer, QPointer<T>, behaves like a normal C++ pointer T *,
  // except that it is automatically cleared when the referenced object is
  // destroyed (unlike normal C++ pointers, which become "dangling pointers" in
  // such cases). T must be a subclass of QObject.
  QPointer<NDrag> instance;

 public:
  static Napi::Object init(Napi::Env env, Napi::Object exports);
  QDragWrap(const Napi::CallbackInfo& info);
  ~QDragWrap();
  NDrag* getInternalInstance();
  // class constructor
  static Napi::FunctionReference constructor;

  // wrapped methods
  Napi::Value defaultAction(const Napi::CallbackInfo& info);
  Napi::Value dragCursor(const Napi::CallbackInfo& info);
  Napi::Value exec(const Napi::CallbackInfo& info);
  Napi::Value hotSpot(const Napi::CallbackInfo& info);
  Napi::Value pixmap(const Napi::CallbackInfo& info);
  Napi::Value setDragCursor(const Napi::CallbackInfo& info);
  Napi::Value setHotSpot(const Napi::CallbackInfo& info);
  Napi::Value setPixmap(const Napi::CallbackInfo& info);
  Napi::Value supportedActions(const Napi::CallbackInfo& info);
  Napi::Value mimeData(const Napi::CallbackInfo& info);
  Napi::Value setMimeData(const Napi::CallbackInfo& info);
  Napi::Value source(const Napi::CallbackInfo& info);
  Napi::Value target(const Napi::CallbackInfo& info);
};

namespace StaticQDragWrapMethods {
DLL_EXPORT Napi::Value cancel(const Napi::CallbackInfo& info);
}
