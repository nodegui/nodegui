const { QMainWindow } = require("./index");
const { QWidget } = require("../QWidget");

describe("QMainWindow", () => {
  let win = new QMainWindow();
  afterAll(() => {
    win.close();
    win = null;
  });
  it("should be able to instantiate a window instance", () => {
    const win = new QMainWindow();
    expect(win.inherits("QMainWindow")).toBe(true);
  });
  it("setCentalWidget", () => {
    const win = new QMainWindow();
    const widget = new QWidget();
    win.setCentralWidget(widget);
    expect(win.centralWidget).toEqual(widget);
  });
});
