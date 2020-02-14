
#include "core/Integration/integration.h"
#include "QtGui/QApplication/napplication.hpp"
#include <QFont>

namespace qodeIntegration {
static NApplication* app;

bool QtRunLoopWrapper() {
  int exitCode = app->exec();
  exit(exitCode);
  return false;
}

void integrate() {
  // Bootstrap Qt
  app = new NApplication(qode::qode_argc, qode::qode_argv);
  qode::InjectQodeRunLoop(&QtRunLoopWrapper);
  // Other init settings
  QFont f = QApplication::font();
  if (f.defaultFamily().isEmpty()) {
    f.setFamily("Sans-Serif");
    QApplication::setFont(f);
  }
}
}  // namespace qodeIntegration