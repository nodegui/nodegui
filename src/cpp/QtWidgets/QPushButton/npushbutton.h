#pragma once

#include <QWidget>
#include <QPushButton>
#include "src/cpp/core/YogaWidget/yogawidget.h"
#include "deps/spdlog/spdlog.h"
#include "napi.h"
#include "napi-thread-safe-callback.hpp"

class NPushButton: public QPushButton, public YogaWidget
{
private:
    std::shared_ptr<ThreadSafeCallback>  emitRef;
public:
    SET_YOGA_WIDGET_Q_PROPERTIES
    using QPushButton::QPushButton; //inherit all constructors of QPushButton
    NPushButton(){
        connect(this, SIGNAL(pressed()),this,SLOT(
            handleButton()
        ));
    }
    Q_OBJECT
private slots:
    void handleButton(){
        emitRef->call([](Napi::Env env, std::vector<napi_value>& args)
            {
                // This will run in main thread and needs to construct the
                // arguments for the call
                args = {  Napi::String::New(env, "clicked"), Napi::String::New(env, "YOLO") };
            });
                spdlog::info("HANDLEBUTTON CALLED NPUSHBUTTON");

    }
public:
    void setNodeEmitterEmit(std::shared_ptr<ThreadSafeCallback> emitterEmit){
        this->emitRef = emitterEmit;
    }
    ~NPushButton(){
        spdlog::info("DESTRUCTOR CALLED NPUSHBUTTON");
        this->emitRef.reset();
    }
};


