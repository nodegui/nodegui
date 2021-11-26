
#pragma once

#ifndef COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE
#define COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(ComponentWrapName) \
                                                                   \
  InstanceValue("type", Napi::String::New(env, "native")),         \
      InstanceValue("wrapperType",                                 \
                    Napi::String::New(env, #ComponentWrapName)),
#endif

#ifndef COMPONENT_WRAPPED_METHODS_DECLARATION
#define COMPONENT_WRAPPED_METHODS_DECLARATION \
 public:                                      \
  void* rawData = nullptr;
#endif