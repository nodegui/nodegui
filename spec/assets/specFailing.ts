import { executeApp, sleep } from '../testUtil';
import { QLabel, QMainWindow, WindowState } from "../../src";

describe('asset spec that fails', () => {
  it('an innocent failure right after showing the window', async done => {
    await executeApp(async () => {
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
});
