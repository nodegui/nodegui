
#include "core/Integration/integration.h"
#include "QtGui/QApplication/napplication.hpp"
#include <QFont>

namespace qodeIntegration {
static NApplication* app;

bool QtRunLoopWrapper() {
  if(qode::qode_run_uv_loop_once){
    // Run uv loop once to start all the node integration things
    qode::qode_run_uv_loop_once();
  }
  int exitCode = app->exec();
  if(exitCode != 0){
      exit(exitCode);
  }
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