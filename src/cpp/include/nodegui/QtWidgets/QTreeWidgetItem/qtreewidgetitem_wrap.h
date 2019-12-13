#pragma once

#include <napi.h>
#include <stdlib.h>

#include <QTreeWidgetItem>

#include "Extras/Utils/nutils.h"
#include "core/Component/component_wrap.h"

class QTreeWidgetItemWrap : public Napi::ObjectWrap<QTreeWidgetItemWrap> {
private:
    QTreeWidgetItem *instance;

public:
    static Napi::Object init(Napi::Env env, Napi::Object exports);

    QTreeWidgetItemWrap(const Napi::CallbackInfo &info);

    ~QTreeWidgetItemWrap();

    QTreeWidgetItem *getInternalInstance();

    // class constructor
    static Napi::FunctionReference constructor;

    // wrapped methods
    Napi::Value setText(const Napi::CallbackInfo &info);

    COMPONENT_WRAPPED_METHODS_DECLARATION
};