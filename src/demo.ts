import { QWidget, QScrollArea, QMainWindow, FlexLayout, QLabel } from './index';

const main = async (): Promise<void> => {
    const win = new QMainWindow();
    const scrollArea = new QScrollArea();
    const center = new QWidget();
    const label = new QLabel();
    label.setText(`
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    Hellloooooo
    `);

    await scrollArea.setInlineStyle('border: 1px solid yellow;');
    await center.setInlineStyle(`border: 3px solid blue;`);
    await label.setInlineStyle(`border: 2px solid green;padding: 10;`);

    center.setLayout(new FlexLayout());
    center.layout?.addWidget(label);
    scrollArea.setWidget(center);
    win.setCentralWidget(scrollArea);
    win.show();
    (global as any).win = win;
};

main();
