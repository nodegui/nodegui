#ifndef QAPPLICATION_WRAP_H
#define QAPPLICATION_WRAP_H

#include <napi.h>
#include <QApplication>


class QApplicationWrap : public Napi::ObjectWrap<QApplicationWrap> {
private:
    QApplication* instance;
    static int argc;
    static char** argv;

public:
    static Napi::FunctionReference constructor;
    static Napi::Object init(Napi::Env env, Napi::Object exports);
    QApplicationWrap(const Napi::CallbackInfo& info);
    ~QApplicationWrap();
    QApplication* getInternalInstance();
    // Wrapped methods
    Napi::Value processEvents(const Napi::CallbackInfo& info);
    Napi::Value exec(const Napi::CallbackInfo& info);
};

#endif