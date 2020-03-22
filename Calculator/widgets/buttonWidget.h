#ifndef BUTTONWIDGET_H
#define BUTTONWIDGET_H

#include <QWidget>
#include <QGridLayout>
#include "../buttons/backspaceButton.h"
#include "../buttons/binaryOpButton.h"
#include "../buttons/numButton.h"
#include "../constants/constants.h"

class ButtonWidget : public QWidget
{
    Q_OBJECT
private:
    QGridLayout *mainLayout;
    BackspaceButton *btnBs;
    BinaryOpButton *btnAdd, *btnSub, *btnMul, *btnDiv;
    NumButton *btn0, *btn1, *btn2, *btn3, *btn4, *btn5, *btn6, *btn7, *btn8, *btn9;
public:
    ButtonWidget(QWidget *parent = nullptr);
signals:
    void backspaceClicked();
    void binaryOpClicked(QString type);
    void numClicked(int value);
private slots:
    void handleBackspaceClick();
    void handleBinaryOpClick(QString type);
    void handleNumClick(int value);
};

#endif // BUTTONWIDGET_H
