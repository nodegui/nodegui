import { QWidget, QMainWindow, QRadioButton, QButtonGroup, QStackedWidget, QGridLayout } from './index';
import { QBoxLayout } from './lib/QtWidgets/QBoxLayout';
import { Direction } from './lib/QtEnums';
import { QListWidget } from './lib/QtWidgets/QListWidget';
import { QListWidgetItem } from './lib/QtWidgets/QListWidgetItem';
import { QLabel } from './lib/QtWidgets/QLabel';
import { QPushButton } from './lib/QtWidgets/QPushButton';
const questions = [
    {
        question: 'Inside which HTML element do we put the JavaScript',
        answers: ['<scripting>', '<script>', '<javascript>', '<js>'],
        correct: 2,
    },
    {
        question:
            'What is the correct JavaScript syntax to change the content of the HTML element below?\n\n<p id="demo">This is a demonstration.</p>',
        answers: [
            'document.getElementById("demo").innerHTML = "Hello World!";',
            '#demo.innerHTML = "Hello World!";',
            'document.getElementByName("p").innerHTML = "Hello World!";',
            'document.getElement("p").innerHTML = "Hello World!";',
        ],
        correct: 0,
    },
];
export class Window extends QMainWindow {
    constructor() {
        super();
        const center = new QWidget();
        const layout = new QGridLayout();
        const leftList = new QListWidget();
        const stacked = new QStackedWidget();
        const radioButtons: QRadioButton[] = [];
        const widgets: QWidget[] = [];
        const paged: QBoxLayout[] = [];
        const groups: QButtonGroup[] = [];
        let kj = 0;
        for (let i = 0; i < questions.length; i++) {
            leftList.addItem(new QListWidgetItem('Question #' + (i + 1)));
            paged[i] = new QBoxLayout(Direction.TopToBottom);
            widgets[i] = new QWidget();
            const questionLabel = new QLabel();
            questionLabel.setText(questions[i].question);
            paged[i].addWidget(questionLabel);
            stacked.addWidget(widgets[i]);
            widgets[i].setLayout(paged[i]);
            groups[i] = new QButtonGroup(this);
            for (let j = 0; j < questions[i].answers.length; j++) {
                radioButtons[kj] = new QRadioButton();
                radioButtons[kj].setText(questions[i].answers[j]);
                groups[i].addButton(radioButtons[kj], j);
                groups[i].addEventListener('buttonClickedId', (id: number) => {
                    console.log(id);
                });
                paged[i].addWidget(radioButtons[kj]);
                kj++;
            }
        }
        center.setLayout(layout);
        layout.addWidget(leftList, 0, 0);
        layout.addWidget(stacked, 0, 1);
        const submitButton = new QPushButton();
        submitButton.setText('Submit Quiz');
        layout.addWidget(submitButton, 1, 0);
        this.setCentralWidget(center);
        leftList.addEventListener('currentRowChanged', (row: number) => {
            stacked.setCurrentIndex(row);
        });
        submitButton.addEventListener('clicked', () => {
            for (let i = 0; i < questions.length; i++) {
                if (groups[i].checkedId() == questions[i].correct) {
                    console.log('Correct');
                } else {
                    console.log('Incorrect');
                }
            }
        });
    }
}
const win = new Window();
win.show();
(global as any).win = win;
