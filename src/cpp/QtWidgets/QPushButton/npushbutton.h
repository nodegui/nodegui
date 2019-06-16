#pragma once

#include <QPushButton>
#include "src/cpp/core/NodeWidget/nodewidget.h"
#include "napi.h"

class NPushButton: public QPushButton, public NodeWidget
{
    NODEWIDGET_IMPLEMENTATIONS
public:
    using QPushButton::QPushButton; //inherit all constructors of QPushButton

    void connectWidgetSignalsToEventEmitter() {
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


