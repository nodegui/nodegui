#pragma once

#include "src/cpp/core/FlexLayout/flexnode_wrap.h"

/*

    This macro adds common YogaWidget's exported methods 
    The exported methods are taken into this macro to avoid writing them in each and every widget we export.
 */

#ifndef YOGAWIDGET_WRAPPED_METHODS_DECLARATION
#define YOGAWIDGET_WRAPPED_METHODS_DECLARATION \
\
Napi::Value getFlexNode(const Napi::CallbackInfo& info) {\
    Napi::EscapableHandleScope scope(info.Env());\
    Napi::Value arg = info[0];\
    Napi::Object flexNodeObject = FlexNodeWrap::constructor.New({ arg });\
    FlexNodeWrap* flexNodeWrap = FlexNodeWrap::Unwrap(flexNodeObject);\
    flexNodeWrap->instance = this->instance->getFlexNode();\
    return scope.Escape(napi_value(flexNodeObject)).ToObject();\
}\

#endif //YOGAWIDGET_WRAPPED_METHODS_DECLARATION

#ifndef YOGAWIDGET_WRAPPED_METHODS_EXPORT_DEFINE
#define YOGAWIDGET_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)  \
\
 InstanceMethod("getFlexNode", &WidgetWrapName::getFlexNode),  \


#endif // YOGAWIDGET_WRAPPED_METHODS_EXPORT_DEFINE

