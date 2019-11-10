
#pragma once

#ifndef COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE
#define COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE \
                                                \
  InstanceValue("type", Napi::String::New(env, "native")),
#endif

#ifndef COMPONENT_WRAPPED_METHODS_DECLARATION
#define COMPONENT_WRAPPED_METHODS_DECLARATION \
 public:                                      \
  void* rawData = nullptr;
#endif