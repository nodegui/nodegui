
#include "Extras/Utils/integration.h"

#include <QApplication>
#include <QFont>

namespace qodeIntegration {
static QApplication* app;

bool QtRunLoopWrapper() {
  app->exec();
  return false;
}

void integrate() {
  // Bootstrap Qt
  app = new QApplication(qode::qode_argc, qode::qode_argv);
  qode::InjectQodeRunLoop(&QtRunLoopWrapper);
  // Other init settings
  QFont f = QApplication::font();
  if (f.defaultFamily().isEmpty()) {
    f.setFamily("Sans-Serif");
    QApplication::setFont(f);
  }
}
}  // namespace qodeIntegration