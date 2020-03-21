#include "buttonWidget.h"

ButtonWidget::ButtonWidget(QWidget *parent) : QWidget(parent)
{
    // Create num button
    btn1 = new NumButton(1);
    btn2 = new NumButton(2);
    btn3 = new NumButton(3);
    btn4 = new NumButton(4);
    btn5 = new NumButton(5);
    btn6 = new NumButton(6);
    btn7 = new NumButton(7);
    btn8 = new NumButton(8);
    btn9 = new NumButton(9);
    btn0 = new NumButton(0);

    // Connect num button
    connect(btn1, SIGNAL(numClicked(int)), this, SLOT(handleNumClick(int)));
    connect(btn2, SIGNAL(numClicked(int)), this, SLOT(handleNumClick(int)));
    connect(btn3, SIGNAL(numClicked(int)), this, SLOT(handleNumClick(int)));
    connect(btn4, SIGNAL(numClicked(int)), this, SLOT(handleNumClick(int)));
    connect(btn5, SIGNAL(numClicked(int)), this, SLOT(handleNumClick(int)));
    connect(btn6, SIGNAL(numClicked(int)), this, SLOT(handleNumClick(int)));
    connect(btn7, SIGNAL(numClicked(int)), this, SLOT(handleNumClick(int)));
    connect(btn8, SIGNAL(numClicked(int)), this, SLOT(handleNumClick(int)));
    connect(btn9, SIGNAL(numClicked(int)), this, SLOT(handleNumClick(int)));
    connect(btn0, SIGNAL(numClicked(int)), this, SLOT(handleNumClick(int)));

    // Create & Connect backspace button
    btnBs = new BackspaceButton();
    connect(btnBs, SIGNAL(backspaceClicked()), this, SLOT(handleBackspaceClick()));

    // Setting layout
    mainLayout = new QGridLayout;

    mainLayout->addWidget(btn1, 1, 0);
    mainLayout->addWidget(btn2, 1, 1);
    mainLayout->addWidget(btn3, 1, 2);
    mainLayout->addWidget(btn4, 2, 0);
    mainLayout->addWidget(btn5, 2, 1);
    mainLayout->addWidget(btn6, 2, 2);
    mainLayout->addWidget(btn7, 3, 0);
    mainLayout->addWidget(btn8, 3, 1);
    mainLayout->addWidget(btn9, 3, 2);
    mainLayout->addWidget(btn0, 4, 1);
    mainLayout->addWidget(btnBs, 0, 4);

    setLayout(mainLayout);
}

void ButtonWidget::handleNumClick(int value) {
    emit numClicked(value);
}

void ButtonWidget::handleBackspaceClick() {
    emit backspaceClicked();
}
