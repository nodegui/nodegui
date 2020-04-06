#pragma once

#include <QTextEdit>

#include "QtGui/QColor/qcolor_wrap.h"
#include "QtGui/QFont/qfont_wrap.h"
#include "QtWidgets/QAbstractScrollArea/qabstractscrollarea_macro.h"

/*

    This macro adds common QTextEdit exported methods
    The exported methods are taken into this macro to avoid writing them in each
   and every widget we export.
 */

#ifndef QTEXTEDIT_WRAPPED_METHODS_DECLARATION
#define QTEXTEDIT_WRAPPED_METHODS_DECLARATION                                  \
                                                                               \
  QABSTRACTSCROLLAREA_WRAPPED_METHODS_DECLARATION                              \
                                                                               \
  Napi::Value setAlignment(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    int alignment = info[0].As<Napi::Number>().Int32Value();                   \
    this->instance->setAlignment(static_cast<Qt::Alignment>(alignment));       \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value alignment(const Napi::CallbackInfo& info) {                      \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    Qt::Alignment alignment = this->instance->alignment();                     \
    return Napi::Number::New(env, static_cast<int>(alignment));                \
  }                                                                            \
  Napi::Value canPaste(const Napi::CallbackInfo& info) {                       \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    return Napi::Boolean::New(env, this->instance->canPaste());                \
  }                                                                            \
  Napi::Value ensureCursorVisible(const Napi::CallbackInfo& info) {            \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    this->instance->ensureCursorVisible();                                     \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setFontFamily(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    std::string family = info[0].As<Napi::String>().Utf8Value();               \
    this->instance->setFontFamily(QString::fromUtf8(family.c_str()));          \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value fontFamily(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    QString family = this->instance->fontFamily();                             \
    return Napi::String::New(env, family.toStdString());                       \
  }                                                                            \
  Napi::Value setFontItalic(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    bool italic = info[0].As<Napi::Boolean>().Value();                         \
    this->instance->setFontItalic(italic);                                     \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value fontItalic(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    return Napi::Boolean::New(env, this->instance->fontItalic());              \
  }                                                                            \
  Napi::Value setFontPointSize(const Napi::CallbackInfo& info) {               \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    double s = info[0].As<Napi::Number>().DoubleValue();                       \
    this->instance->setFontPointSize(s);                                       \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value fontPointSize(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    return Napi::Number::New(env, this->instance->fontPointSize());            \
  }                                                                            \
  Napi::Value setFontUnderline(const Napi::CallbackInfo& info) {               \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    bool underline = info[0].As<Napi::Boolean>().Value();                      \
    this->instance->setFontUnderline(underline);                               \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value fontUnderline(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    return Napi::Boolean::New(env, this->instance->fontUnderline());           \
  }                                                                            \
  Napi::Value setFontWeight(const Napi::CallbackInfo& info) {                  \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    int weight = info[0].As<Napi::Number>().Int32Value();                      \
    this->instance->setFontWeight(weight);                                     \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value fontWeight(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    return Napi::Number::New(env, this->instance->fontWeight());               \
  }                                                                            \
  Napi::Value append(const Napi::CallbackInfo& info) {                         \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    std::string text = info[0].As<Napi::String>().Utf8Value();                 \
    this->instance->append(QString::fromUtf8(text.c_str()));                   \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value clear(const Napi::CallbackInfo& info) {                          \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    this->instance->clear();                                                   \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value copy(const Napi::CallbackInfo& info) {                           \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    this->instance->copy();                                                    \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value cut(const Napi::CallbackInfo& info) {                            \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    this->instance->cut();                                                     \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value insertHtml(const Napi::CallbackInfo& info) {                     \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    std::string text = info[0].As<Napi::String>().Utf8Value();                 \
    this->instance->insertHtml(QString::fromUtf8(text.c_str()));               \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value insertPlainText(const Napi::CallbackInfo& info) {                \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    std::string text = info[0].As<Napi::String>().Utf8Value();                 \
    this->instance->insertPlainText(QString::fromUtf8(text.c_str()));          \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value paste(const Napi::CallbackInfo& info) {                          \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    this->instance->paste();                                                   \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value redo(const Napi::CallbackInfo& info) {                           \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    this->instance->redo();                                                    \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value scrollToAnchor(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    std::string name = info[0].As<Napi::String>().Utf8Value();                 \
    this->instance->scrollToAnchor(QString::fromUtf8(name.c_str()));           \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value selectAll(const Napi::CallbackInfo& info) {                      \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    this->instance->selectAll();                                               \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setCurrentFont(const Napi::CallbackInfo& info) {                 \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    Napi::Object fontObject = info[0].As<Napi::Object>();                      \
    QFontWrap* fontWrap = Napi::ObjectWrap<QFontWrap>::Unwrap(fontObject);     \
    this->instance->setCurrentFont(*fontWrap->getInternalInstance());          \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value currentFont(const Napi::CallbackInfo& info) {                    \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    QFont font = this->instance->currentFont();                                \
    auto instance = QFontWrap::constructor.New(                                \
        {Napi::External<QFont>::New(env, new QFont(font))});                   \
    return instance;                                                           \
  }                                                                            \
  Napi::Value setText(const Napi::CallbackInfo& info) {                        \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    std::string text = info[0].As<Napi::String>().Utf8Value();                 \
    this->instance->setText(QString::fromUtf8(text.c_str()));                  \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setTextBackgroundColor(const Napi::CallbackInfo& info) {         \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    Napi::Object colorObject = info[0].As<Napi::Object>();                     \
    QColorWrap* colorWrap = Napi::ObjectWrap<QColorWrap>::Unwrap(colorObject); \
    this->instance->setTextBackgroundColor(*colorWrap->getInternalInstance()); \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value setTextColor(const Napi::CallbackInfo& info) {                   \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    Napi::Object colorObject = info[0].As<Napi::Object>();                     \
    QColorWrap* colorWrap = Napi::ObjectWrap<QColorWrap>::Unwrap(colorObject); \
    this->instance->setTextColor(*colorWrap->getInternalInstance());           \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value undo(const Napi::CallbackInfo& info) {                           \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    this->instance->undo();                                                    \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value zoomIn(const Napi::CallbackInfo& info) {                         \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    int range = info[0].As<Napi::Number>().Int32Value();                       \
    this->instance->zoomIn(range);                                             \
    return env.Null();                                                         \
  }                                                                            \
  Napi::Value zoomOut(const Napi::CallbackInfo& info) {                        \
    Napi::Env env = info.Env();                                                \
    Napi::HandleScope scope(env);                                              \
    int range = info[0].As<Napi::Number>().Int32Value();                       \
    this->instance->zoomOut(range);                                            \
    return env.Null();                                                         \
  }

#endif  // QTEXTEDIT_WRAPPED_METHODS_DECLARATION

#ifndef QTEXTEDIT_WRAPPED_METHODS_EXPORT_DEFINE
#define QTEXTEDIT_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)              \
                                                                             \
  QABSTRACTSCROLLAREA_WRAPPED_METHODS_EXPORT_DEFINE(WidgetWrapName)          \
                                                                             \
  InstanceMethod("setAlignment", &WidgetWrapName::setAlignment),             \
      InstanceMethod("alignment", &WidgetWrapName::alignment),               \
      InstanceMethod("canPaste", &WidgetWrapName::canPaste),                 \
      InstanceMethod("setCurrentFont", &WidgetWrapName::setCurrentFont),     \
      InstanceMethod("currentFont", &WidgetWrapName::currentFont),           \
      InstanceMethod("ensureCursorVisible",                                  \
                     &WidgetWrapName::ensureCursorVisible),                  \
      InstanceMethod("setFontFamily", &WidgetWrapName::setFontFamily),       \
      InstanceMethod("fontFamily", &WidgetWrapName::fontFamily),             \
      InstanceMethod("setFontItalic", &WidgetWrapName::setFontItalic),       \
      InstanceMethod("fontItalic", &WidgetWrapName::fontItalic),             \
      InstanceMethod("setFontPointSize", &WidgetWrapName::setFontPointSize), \
      InstanceMethod("fontPointSize", &WidgetWrapName::fontPointSize),       \
      InstanceMethod("setFontUnderline", &WidgetWrapName::setFontUnderline), \
      InstanceMethod("fontUnderline", &WidgetWrapName::fontUnderline),       \
      InstanceMethod("setFontWeight", &WidgetWrapName::setFontWeight),       \
      InstanceMethod("fontWeight", &WidgetWrapName::fontWeight),             \
      InstanceMethod("append", &WidgetWrapName::append),                     \
      InstanceMethod("clear", &WidgetWrapName::clear),                       \
      InstanceMethod("copy", &WidgetWrapName::copy),                         \
      InstanceMethod("cut", &WidgetWrapName::cut),                           \
      InstanceMethod("insertHtml", &WidgetWrapName::insertHtml),             \
      InstanceMethod("insertPlainText", &WidgetWrapName::insertPlainText),   \
      InstanceMethod("paste", &WidgetWrapName::paste),                       \
      InstanceMethod("redo", &WidgetWrapName::redo),                         \
      InstanceMethod("scrollToAnchor", &WidgetWrapName::scrollToAnchor),     \
      InstanceMethod("selectAll", &WidgetWrapName::selectAll),               \
      InstanceMethod("setText", &WidgetWrapName::setText),                   \
      InstanceMethod("setTextBackgroundColor",                               \
                     &WidgetWrapName::setTextBackgroundColor),               \
      InstanceMethod("setTextColor", &WidgetWrapName::setTextColor),         \
      InstanceMethod("zoomIn", &WidgetWrapName::zoomIn),                     \
      InstanceMethod("zoomOut", &WidgetWrapName::zoomOut),

#endif  // QTEXTEDIT_WRAPPED_METHODS_EXPORT_DEFINE

#ifndef QTEXTEDIT_SIGNALS
#define QTEXTEDIT_SIGNALS                                                     \
                                                                              \
  QABSTRACTSCROLLAREA_SIGNALS                                                 \
                                                                              \
  QObject::connect(this, &QTextEdit::copyAvailable, [=](bool yes) {           \
    Napi::Env env = this->emitOnNode.Env();                                   \
    Napi::HandleScope scope(env);                                             \
    this->emitOnNode.Call({Napi::String::New(env, "copyAvailable"),           \
                           Napi::Boolean::New(env, yes)});                    \
  });                                                                         \
  QObject::connect(this, &QTextEdit::cursorPositionChanged, [=]() {           \
    Napi::Env env = this->emitOnNode.Env();                                   \
    Napi::HandleScope scope(env);                                             \
    this->emitOnNode.Call({Napi::String::New(env, "cursorPositionChanged")}); \
  });                                                                         \
  QObject::connect(this, &QTextEdit::redoAvailable, [=](bool available) {     \
    Napi::Env env = this->emitOnNode.Env();                                   \
    Napi::HandleScope scope(env);                                             \
    this->emitOnNode.Call({Napi::String::New(env, "redoAvailable"),           \
                           Napi::Boolean::New(env, available)});              \
  });                                                                         \
  QObject::connect(this, &QTextEdit::selectionChanged, [=]() {                \
    Napi::Env env = this->emitOnNode.Env();                                   \
    Napi::HandleScope scope(env);                                             \
    this->emitOnNode.Call({Napi::String::New(env, "selectionChanged")});      \
  });                                                                         \
  QObject::connect(this, &QTextEdit::textChanged, [=]() {                     \
    Napi::Env env = this->emitOnNode.Env();                                   \
    Napi::HandleScope scope(env);                                             \
    this->emitOnNode.Call({Napi::String::New(env, "textChanged")});           \
  });                                                                         \
  QObject::connect(this, &QTextEdit::undoAvailable, [=](bool available) {     \
    Napi::Env env = this->emitOnNode.Env();                                   \
    Napi::HandleScope scope(env);                                             \
    this->emitOnNode.Call({Napi::String::New(env, "undoAvailable"),           \
                           Napi::Boolean::New(env, available)});              \
  });

#endif  // QTEXTEDIT_SIGNALS
