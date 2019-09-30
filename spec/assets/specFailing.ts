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
  QPushButtonEvents,
  WidgetAttribute,
  QApplication
} from "../../src";
import { existsSync, unlinkSync, readFileSync } from "fs";
import { resolve } from "path";
import { sleep, resolveOrThrow, expectToExist, executeApp } from '../../spec/testUtil';
 
//  export async function executeApp(fn:()=>Promise<any>, expectToFailPredicate?: (error:Error)=>boolean) {
//    try {
//      await fn()
//    } catch (error) {
//      console.error(error, error.stack);
//      if(expectToFailPredicate){
//        if(!expectToFailPredicate(error)) {
//         //  console.error('expectToFailPredicate failed for error', error, error.stack);
//     //  process.exit(1)
         
//        }
//      }else {
//      process.exit(1)
//     //  expect(error).toBeUndefined()
//      }
//    }
//  }
describe('demo', ()=>{
  // it('demo should not throw', async done=>{
  //   // we need to run the test like this so jasmine errors are not ignored, see below
  //   // expect(async ()=>await demoTest(2000)).not.toThrow()
  //   await executeApp(async ()=>await demoTest(400))
  //   // await demoTest() // this won't soek - window wil be shown correctly, test wil exiit but jasmine exceptions are not shown and proces exit code will be 0
  //   done()
  // });

   it('an inocent spec that should fail', async done=>{
    // expect(async ()=>await smallTest(false, 2000)).not.toThrow()
    await executeApp(async ()=>{
      const win = new QMainWindow();
  const label1 = new QLabel();
  label1.setText("Hello world 1 🧙");
  win.setCentralWidget(label1);
win.show();
  win.setWindowState(WindowState.WindowActive);
  await sleep(200);
  expect('An expected Failure at the end of the code').toBeUndefined()
  // win.close()
    })
    done()
  });

  //    it('smallTest should show throw expect errors if expectation fails when beforeClosing', async done=>{
  //   // expect(async ()=>await smallTest('beforeClosing' ,2000)).toThrow()
  //      await executeApp(async ()=>await smallTest('beforeClosing' ,2000), error=>error.toString().includes('Expected failure beforeClosing'))
  //     //  expect(async ()=>await smallTest('beforeClosing' ,2000)).not.toThrow()
  //   done()
  // });

});

// async function smallTest(fail: false|'start'|'beforeClosing', visibleFor=200) {
//   expect(fail ==='start' ? 'Expected failure '+fail : undefined).toBeUndefined()

// const win = new QMainWindow();
//   const label1 = new QLabel();
//   label1.setText("Hello world 1 🧙");
//   win.setCentralWidget(label1);
// win.show();
//   win.setWindowState(WindowState.WindowActive);
//   await sleep(visibleFor);
//   expect(fail ==='beforeClosing' ? 'Expected failure '+fail : undefined).toBeUndefined()
//   // win.close();
// }

// // demoTest()
// async function demoTest(visibleFor=200) {
// // console.log('sasdasd, ', visibleFor);

//   const win = new QMainWindow();
//   const label1 = new QLabel();
//   label1.setText("Hello world 1 🧙");
//   expect(label1.text).toBe("Hello world 1 🧙")
//   label1.setInlineStyle("font-size: 20px;");
//   label1.setCursor(CursorShape.ForbiddenCursor);
//   const label2 = new QLabel();
//   label2.setText("Hello world 2 💻");
//   label2.setInlineStyle("font-size: 20px;");
//   label2.setCursor(CursorShape.ForbiddenCursor);
//   const checkbox = new QCheckBox();
//   checkbox.setText("Check me out?");
//   checkbox.setObjectName("check");
//   checkbox.setChecked(true);
//   checkbox.addEventListener(QCheckBoxEvents.toggled, checked => {
//     console.log(`${checked ? "checked" : "unchecked"}`);
//     label1.setInlineStyle(`color: ${checked ? "green" : "red"}`);
//   });
//   const dial = new QDial();
//   checkbox.setObjectName("dial");
//   const lineEdit = new QLineEdit();
//   lineEdit.setPlaceholderText("Enter your thoughts here");
//   lineEdit.setObjectName("editable");
//   const button = new QPushButton();
//   button.setText("Push Push Push!");
//   button.setObjectName("btn");
//   const nodeguiLogo = new QIcon(resolveOrThrow( "extras/assets/nodegui.png"))
//   const icon = new QIcon(resolveOrThrow( "extras/assets/start_icon.png"));
// //   await sleep(3000);
// // console.log('sdfsdf');
// //   await sleep(3000);

//   button.setIcon(icon);
//   const tabs = new QTabWidget();
//   tabs.setTabsClosable(true);
//   const tab1 = new QWidget();
//   const tab2 = new QWidget();
//   tab1.setLayout(new QGridLayout());
//   tab2.setLayout(new QGridLayout());
//   if (tab1.layout && tab2.layout) {
//     tab1.layout.addWidget(label1);
//     tab2.layout.addWidget(label2);
//   }
//   tabs.addTab(tab1, icon, "Tab 1");
//   tabs.addTab(tab2, icon, "Tab 2");
//   const progressbar = new QProgressBar();
//   progressbar.setValue(6);
//   progressbar.setMinimum(1);
//   progressbar.setMaximum(15);
//   const radioButton = new QRadioButton();
//   radioButton.setText("Roger that!");
//   const rootView = new QWidget();
//   rootView.setObjectName("root");
//   rootView.setLayout(new FlexLayout());
//   const textEdit = new QPlainTextEdit();
//   textEdit.setPlainText("Hello");
//   textEdit.setWordWrapMode(QTextOptionWrapMode.NoWrap);
//   const scrollArea = new QScrollArea();
//   scrollArea.setInlineStyle("flex: 1; width:'100%';");
//   const imageLabel = new QLabel();
//   const pixmap = new QPixmap(resolveOrThrow("extras/assets/kitchen.png"));
//   imageLabel.setPixmap(pixmap);
//   scrollArea.setWidget(imageLabel);
//   function testQPixmapSave(fileName: string, format?: ReadWriteImageFormats) {
//     // try {
//     //   existsSync(fileName) && unlinkSync(fileName);
//     //   expect(!existsSync(fileName)).toBe(true)
//     //    expect(pixmap.save(fileName, format)).toBe(true)
//     //    expect(existsSync(fileName)).toBe(true)
//     //   // ideally we want to use file-type, jimp or magica to verify tmp.png has the correct encoding and/or is identical to source img.
//     //    expect(readFileSync(fileName).byteLength).toBeGreaterThan(1000) 
//     // } catch (error) {
//     //   console.error("QPixmap.save test failed", error, error.stack);
//     // } finally {
//     //   unlinkSync(fileName);
//     // }
//   }
//   testQPixmapSave("tmp.png");
//   testQPixmapSave("tmp.jpg");
//   testQPixmapSave("tmp_jpg", "JPG");
//   testQPixmapSave("tmp_bmp", "BMP");
//   const trayIcon = new QIcon(resolveOrThrow("extras/assets/nodegui.png"));
//   const tray = new QSystemTrayIcon();
//   tray.setIcon(trayIcon);
//   tray.show();
//   if (rootView.layout) {
//     rootView.layout.addWidget(tabs);
//     rootView.layout.addWidget(checkbox);
//     rootView.layout.addWidget(radioButton);
//     rootView.layout.addWidget(lineEdit);
//     rootView.layout.addWidget(button);
//     rootView.layout.addWidget(progressbar);
//     rootView.layout.addWidget(textEdit);
//     rootView.layout.addWidget(scrollArea);
//     rootView.layout.addWidget(dial);
//   }
//   // (async () => {
//   win.setCentralWidget(rootView);
//  await  win.setStyleSheet(`
//   #root {
//     flex: 1;
//     height: '100%';
//     align-items: 'center';
//     justify-content: 'space-around';
//   }
// `);
//   win.setWindowIcon(nodeguiLogo);
//   await win.setWindowTitle("NodeGUI Demo")
//   win.resize(400, 700);
//   // console.log(win.size().width, 4002);
  
//   // expect(win.size().width).toBe(400);
//   (global as any).win = win; // To prevent win from being garbage collected.
//   (global as any).systemTray = tray; // To prevent system tray from being garbage collected.
//   // const app = new QApplication()
//   win.show();
//   // await sleep(visibleFor);
// // console.log('sasdasd, ', visibleFor);
//   // await sleep(visibleFor);

//   await win.setWindowState(WindowState.WindowActive);
//   // const r = app.exec()
//   // await sleep(visibleFor);
//   // win.close();
//   await sleep(visibleFor);
//   // app.quit()
//   // app.exit(0)
//   // QApplication.instance().exit(0);
//   // QApplication.instance().quit();
//   // await sleep(1000);
// }

