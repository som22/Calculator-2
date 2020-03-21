#include "screenWidget.h"

ScreenWidget::ScreenWidget(QWidget *parent) : QWidget(parent)
{
    // Setting layout
    screen = new QLineEdit("0");
    screen->setReadOnly(true);
    screen->setAlignment(Qt::AlignRight);
    screen->setFont(QFont("Consolas", 15));

    mainLayout = new QGridLayout;

    mainLayout->addWidget(screen, 0, 0);

    setLayout(mainLayout);
}

void ScreenWidget::handleNumClick(int value) {
    if (screen->text() == "0") {
        screen->setText(QString::number(value));
    } else {
        screen->setText(screen->text().append(QString::number(value)));
    }
}

void ScreenWidget::handleBackspaceClick() {
    int textLen = screen->text().length();
    if (textLen == 1) {
        screen->setText("0");
    } else {
        screen->setText(screen->text().mid(0, textLen - 1));
    }
}
