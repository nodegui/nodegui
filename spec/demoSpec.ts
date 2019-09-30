import {
  QMainWindow,
  QLabel,
  QCheckBox,
  QLineEdit,
  QPushButton,
  QProgressBar,
  QRadioButton,
  FlexLayout,
  QWidget,
  QIcon,
  QDial,
  QPlainTextEdit,
  QTabWidget,
  QGridLayout,
  QScrollArea,
  QPixmap,
  CursorShape,
  WindowState,
  QTextOptionWrapMode,
  QCheckBoxEvents,
  QSystemTrayIcon,
  ReadWriteImageFormats,
} from "../src";
import { existsSync, unlinkSync, readFileSync } from "fs";
import { resolve } from "path";
import { sleep, resolveOrThrow, expectToExist, executeApp } from '../spec/testUtil';

describe('demo', () => {
  it('demo should not throw', async done => {
    await executeApp(demoTest)
    done()
  });

});

async function demoTest(visibleFor = 200) {
  const win = new QMainWindow();
  const label1 = new QLabel();
  label1.setText("Hello world 1 🧙");
  //TODO: report issue - text should be a method to be consistent with other getters
  expect(label1.text).toBe("Hello world 1 🧙")
  label1.setInlineStyle("font-size: 20px;");
  label1.setCursor(CursorShape.ForbiddenCursor);
  const label2 = new QLabel();
  label2.setText("Hello world 2 💻");
  expect(label2.text).toBe("Hello world 2 💻")
  label2.setInlineStyle("font-size: 20px;");
  label2.setCursor(CursorShape.ForbiddenCursor);
  const checkbox = new QCheckBox();
  checkbox.setText("Check me out?");
  checkbox.setObjectName("check");
  expect(checkbox.objectName()).toBe("check")
  checkbox.setChecked(true);
  expect(checkbox.isChecked()).toBe(true)
  checkbox.addEventListener(QCheckBoxEvents.toggled, checked => {
    console.log(`${checked ? "checked" : "unchecked"}`);
    //TODO: test click handler
    label1.setInlineStyle(`color: ${checked ? "green" : "red"}`);
  });

  const dial = new QDial();
  dial.setObjectName("dial");
  expect(dial.objectName()).toBe("dial")

  const lineEdit = new QLineEdit();
  lineEdit.setPlaceholderText("Enter your thoughts here");
  //TODO: report issue - placeholderText should be a method to be consistent with other getters
  expect(lineEdit.placeholderText).toBe("Enter your thoughts here")
  lineEdit.setObjectName("editable");
  expect(lineEdit.objectName()).toBe("editable")
  
  const button = new QPushButton();
  button.setText("Push Push Push!");
  button.setObjectName("btn");
  const nodeguiLogo = new QIcon(resolveOrThrow("extras/assets/nodegui.png"))
  const icon = new QIcon(resolveOrThrow("extras/assets/start_icon.png"));
  button.setIcon(icon);
  const tabs = new QTabWidget();
  tabs.setTabsClosable(true);
  const tab1 = new QWidget();
  const tab2 = new QWidget();
  tab1.setLayout(new QGridLayout());
  tab2.setLayout(new QGridLayout());
  if (tab1.layout && tab2.layout) {
    tab1.layout.addWidget(label1);
    tab2.layout.addWidget(label2);
  }
  tabs.addTab(tab1, icon, "Tab 1");
  tabs.addTab(tab2, icon, "Tab 2");
  const progressbar = new QProgressBar();
  progressbar.setValue(6);
  progressbar.setMinimum(1);
  progressbar.setMaximum(15);
  const radioButton = new QRadioButton();
  radioButton.setText("Roger that!");
  const rootView = new QWidget();
  rootView.setObjectName("root");
  rootView.setLayout(new FlexLayout());
  const textEdit = new QPlainTextEdit();
  textEdit.setPlainText("Hello");
  textEdit.setWordWrapMode(QTextOptionWrapMode.NoWrap);
  const scrollArea = new QScrollArea();
  scrollArea.setInlineStyle("flex: 1; width:'100%';");
  const imageLabel = new QLabel();
  const pixmap = new QPixmap(resolveOrThrow("extras/assets/kitchen.png"));
  imageLabel.setPixmap(pixmap);
  scrollArea.setWidget(imageLabel);
  function testQPixmapSave(fileName: string, format?: ReadWriteImageFormats) {
    try {
      existsSync(fileName) && unlinkSync(fileName);
      expect(!existsSync(fileName)).toBe(true)
      expect(pixmap.save(fileName, format)).toBe(true)
      expect(existsSync(fileName)).toBe(true)
      // ideally we want to use file-type, jimp or magica to verify tmp.png has the correct encoding and/or is identical to source img.
      expect(readFileSync(fileName).byteLength).toBeGreaterThan(1000)
    } catch (error) {
      console.error("QPixmap.save test failed", error, error.stack);
      expect(error).toBeUndefined()
    } finally {
      // unlinkSync(fileName);
    }
  }
  testQPixmapSave("tmp.png");
  testQPixmapSave("tmp.jpg");
  testQPixmapSave("tmp_jpg", "JPG");
  testQPixmapSave("tmp_bmp", "BMP");

  const trayIcon = new QIcon(resolveOrThrow("extras/assets/nodegui.png"));
  const tray = new QSystemTrayIcon();
  tray.setIcon(trayIcon);
  tray.show();
  if (rootView.layout) {
    rootView.layout.addWidget(tabs);
    rootView.layout.addWidget(checkbox);
    rootView.layout.addWidget(radioButton);
    rootView.layout.addWidget(lineEdit);
    rootView.layout.addWidget(button);
    rootView.layout.addWidget(progressbar);
    rootView.layout.addWidget(textEdit);
    rootView.layout.addWidget(scrollArea);
    rootView.layout.addWidget(dial);
  }
  win.setCentralWidget(rootView);
  await win.setStyleSheet(`
  #root {
    flex: 1;
    height: '100%';
    align-items: 'center';
    justify-content: 'space-around';
  }
`);
  win.setWindowIcon(nodeguiLogo);
  await win.setWindowTitle("NodeGUI Demo")
  win.resize(400, 700);
  expect(win.size()).toEqual({width: 400, height: 700});
  win.show();
  await win.setWindowState(WindowState.WindowActive);
  // win.close(); // not closing the window - if so the process will be killed
  await sleep(visibleFor);
}

