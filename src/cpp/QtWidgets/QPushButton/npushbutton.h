#pragma once

#include <QPushButton>
#include "src/cpp/core/YogaWidget/yogawidget.h"
#include "src/cpp/core/Events/eventwidget.h"
#include "napi.h"

class NPushButton: public QPushButton, public YogaWidget, public EventWidget
{
public:
    SET_YOGA_WIDGET_Q_PROPERTIES
    using QPushButton::QPushButton; //inherit all constructors of QPushButton
    Q_OBJECT
public:       
    bool event(QEvent* event){
        EventWidget::event(event);
        return QWidget::event(event);    
    }

    void connectWidgetSignalsToEventEmitter(){
        // Qt Connects: Implement all signal connects here 
        QObject::connect(this, &QPushButton::clicked, [=](bool checked) { 
            this->emitOnNode->call([=](Napi::Env env, std::vector<napi_value>& args) {
                args = {  Napi::String::New(env, "clicked"), Napi::Value::From(env, checked) };
            });
        });
        QObject::connect(this, &QPushButton::released, [=]() { 
            this->emitOnNode->call([=](Napi::Env env, std::vector<napi_value>& args) {
                args = {  Napi::String::New(env, "released") };
            });
        });
        QObject::connect(this, &QPushButton::pressed, [=]() { 
            this->emitOnNode->call([=](Napi::Env env, std::vector<napi_value>& args) {
                args = {  Napi::String::New(env, "pressed") };
            });
        });
        QObject::connect(this, &QPushButton::toggled, [=](bool checked) { 
            this->emitOnNode->call([=](Napi::Env env, std::vector<napi_value>& args) {
                args = {  Napi::String::New(env, "toggled"), Napi::Value::From(env, checked) };
            });
        });
    }
};


