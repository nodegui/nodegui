#include <napi.h>
#include "QtGui/QApplication/qapplication_wrap.h"

Napi::Object Main(Napi::Env env, Napi::Object exports)
{
    QApplicationWrap::init(env, exports);
    return exports;
}

NODE_API_MODULE(NODE_GYP_MODULE_NAME, Main)
