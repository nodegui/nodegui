import { QMainWindow, QWidget } from '.';
import { QLabel } from './lib/QtWidgets/QLabel';
import { QScrollArea } from './lib/QtWidgets/QScrollArea';
import { FlexLayout } from './lib/core/FlexLayout';
import { WidgetEventTypes } from './lib/core/EventWidget';

const win = new QMainWindow();
win.resize(500, 500);
win.setObjectName('win');

const outer = new QWidget();
outer.setObjectName('outer');
outer.setInlineStyle(`border: 2px solid pink;`);
const scrollArea = new QScrollArea();
scrollArea.setObjectName('scrollArea');
outer.setLayout(new FlexLayout());

scrollArea.setInlineStyle(`flex: 1; min-height:0; align-self:'stretch';border: 2px solid green;`);
const sview = new QWidget();
sview.setObjectName('sview');
sview.setLayout(new FlexLayout());
sview.setInlineStyle(`border:2px solid yellow; min-width: 100%;`);

const textView = new QLabel();
textView.setObjectName('textView');
textView.setText(`
a
a
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
a
a
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
a
a
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
a
a
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
a
a
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
a
a
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
a
a
`);

sview.layout?.addWidget(textView);
scrollArea.setWidget(sview);
outer.layout?.addWidget(scrollArea);
outer.addEventListener(WidgetEventTypes.Resize, () => {
    // console.log('scrollarea min +' + scrollArea.minimumSize().width(), 'X', scrollArea.minimumSize().height());
    // console.log('scrollarea size +' + scrollArea.size().width(), 'X', scrollArea.size().height());
});
win.setCentralWidget(outer);
win.show();
(global as any).win = win;

// <Window windowTitle="Hello 👋🏽" minSize={minSize} styleSheet={styleSheet}>
// <View>
//   <ScrollArea style="flex: 1; border: 1px solid green;">
//     <View style="border:2px solid yellow;">
//       <Comp></Comp>
//     </View>
//   </ScrollArea>
// </View>
// </Window>
