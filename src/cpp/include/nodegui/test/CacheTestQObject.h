#pragma once

#include <QtCore/QObject>

#include "Extras/Export/export.h"

class CacheTestQObject;

class DLL_EXPORT CacheTestQObject : public QObject {
  Q_OBJECT
 private:
  CacheTestQObject* _foo;
  CacheTestQObject* _bar;

 public:
  CacheTestQObject();
  CacheTestQObject* foo();
  void clearFoo();
  CacheTestQObject* bar();
};
