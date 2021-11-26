#include "test/CacheTestQObject.h"

CacheTestQObject::CacheTestQObject() : _foo(0), _bar(0) {}

CacheTestQObject* CacheTestQObject::foo() {
  if (_foo) {
    return _foo;
  }
  _foo = new CacheTestQObject();
  _foo->setParent(this);
  return _foo;
}

void CacheTestQObject::clearFoo() {
  if (_foo) {
    delete _foo;
    _foo = nullptr;
  }
}

CacheTestQObject* CacheTestQObject::bar() {
  if (_bar) {
    return _bar;
  }
  _bar = new CacheTestQObject();
  _bar->setParent(this);
  return _bar;
}
