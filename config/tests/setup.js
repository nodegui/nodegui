const { QApplication } = require("../../dist");
module.exports = async () => {
  global.qApp = QApplication.instance();
  qApp.setQuitOnLastWindowClosed(false);
};
