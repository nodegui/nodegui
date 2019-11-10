/*
  This wrapper can be used to get the value of the actual instance inside a
  wrapper for any component exported
  as long as the component wrapper has this macro
  COMPONENT_WRAPPED_METHODS_DECLARATION and components this->rawData has been
  assigned in the constructor
*/
#pragma once

#include <napi.h>

#include "component_macro.h"

class ComponentWrap : public Napi::ObjectWrap<ComponentWrap> {
  COMPONENT_WRAPPED_METHODS_DECLARATION
};
