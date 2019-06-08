#pragma once

#include <QWidget>
#include <QPushButton>
#include "src/cpp/core/YogaWidget/yogawidget.h"
#include "napi.h"
#include "napi-thread-safe-callback.hpp"
#include "deps/spdlog/spdlog.h"

class NPushButton: public QPushButton, public YogaWidget
{
private:
    std::unique_ptr<ThreadSafeCallback>  emitRef;
public:
    SET_YOGA_WIDGET_Q_PROPERTIES
    using QPushButton::QPushButton; //inherit all constructors of QPushButton
    NPushButton(){
        connect(this, &QPushButton::clicked,
                [=](bool val) { 
                    QString eventType = "clicked";
                    emitRef->call([=](Napi::Env env, std::vector<napi_value>& args) {
                        args = {  Napi::String::New(env, eventType.toStdString()), Napi::Boolean::New(env, val) };
                    });
                }
        );
    }
    ~NPushButton() {
        this->emitRef.reset();
    };
    Q_OBJECT

public:
    void setNodeEmitterEmit( std::unique_ptr<ThreadSafeCallback> &emitterEmit){
        this->emitRef = std::move(emitterEmit); 
    }
};


