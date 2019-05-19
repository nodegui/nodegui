#include "utils.h"
#include <iostream>

void extrautils::noop(){}

void extrautils::throwTypeError(Napi::Env env, std::string errorMessage){
    Napi::TypeError::New(env, errorMessage.c_str()).ThrowAsJavaScriptException();
}
