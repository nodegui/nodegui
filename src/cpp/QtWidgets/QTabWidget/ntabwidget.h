#pragma once

#include <QTabWidget>
#include "src/cpp/core/NodeWidget/nodewidget.h"
#include "napi.h"

class NTabWidget: public QTabWidget, public NodeWidget
{
    NODEWIDGET_IMPLEMENTATIONS(QTabWidget)
public:
    using QTabWidget::QTabWidget; //inherit all constructors of QTabWidget

    void connectWidgetSignalsToEventEmitter() {
        // Qt Connects: Implement all signal connects here 
        QObject::connect(this, &QTabWidget::currentChanged, [=]() { 
            Napi::Env env = this->emitOnNode.Env();
            Napi::HandleScope scope(env);
            this->emitOnNode.Call({  Napi::String::New(env, "currentChanged") });
        });
        QObject::connect(this, &QTabWidget::setCurrentWidget, [=]() { 
            Napi::Env env = this->emitOnNode.Env();
            Napi::HandleScope scope(env);
            this->emitOnNode.Call({  Napi::String::New(env, "setCurrentWidget") });
        });
        QObject::connect(this, &QTabWidget::tabBarClicked, [=]() { 
            Napi::Env env = this->emitOnNode.Env();
            Napi::HandleScope scope(env);
            this->emitOnNode.Call({  Napi::String::New(env, "tabBarClicked") });
        });
        QObject::connect(this, &QTabWidget::tabBarDoubleClicked, [=]() {
            Napi::Env env = this->emitOnNode.Env();
            Napi::HandleScope scope(env);
            this->emitOnNode.Call({  Napi::String::New(env, "tabBarDoubleClicked") });
        });
        QObject::connect(this, &QTabWidget::tabCloseRequested, [=]() { 
            Napi::Env env = this->emitOnNode.Env();
            Napi::HandleScope scope(env);
            this->emitOnNode.Call({  Napi::String::New(env, "tabCloseRequested") });
        });
    }
};


