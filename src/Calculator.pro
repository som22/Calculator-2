QT       += core gui widgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    buttons/acButton.cpp \
    buttons/ansButton.cpp \
    buttons/backspaceButton.cpp \
    buttons/binaryOpButton.cpp \
    buttons/calcButton.cpp \
    buttons/commaButton.cpp \
    buttons/equalButton.cpp \
    buttons/mcButton.cpp \
    buttons/mrButton.cpp \
    buttons/numButton.cpp \
    buttons/opButton.cpp \
    buttons/unaryOpButton.cpp \
    exceptions/baseException.cpp \
    exceptions/divisionByZeroException.cpp \
    exceptions/invalidDoubleException.cpp \
    exceptions/negativeSqrtException.cpp \
    exceptions/syntaxErrorException.cpp \
    expressions/divideExpression.cpp \
    expressions/sqrtExpression.cpp \
    parser.cpp \
    widgets/buttonWidget.cpp \
    widgets/mainWidget.cpp \
    widgets/screenWidget.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    buttons/acButton.h \
    buttons/ansButton.h \
    buttons/backspaceButton.h \
    buttons/binaryOpButton.h \
    buttons/calcButton.h \
    buttons/commaButton.h \
    buttons/equalButton.h \
    buttons/mcButton.h \
    buttons/mrButton.h \
    buttons/numButton.h \
    buttons/opButton.h \
    buttons/unaryOpButton.h \
    constants/constants.h \
    exceptions/baseException.h \
    exceptions/divisionByZeroException.h \
    exceptions/invalidDoubleException.h \
    exceptions/negativeSqrtException.h \
    exceptions/syntaxErrorException.h \
    expressions/addExpression.h \
    expressions/binaryExpression.h \
    expressions/divideExpression.h \
    expressions/expression.h \
    expressions/multiplyExpression.h \
    expressions/negativeExpression.h \
    expressions/sqrtExpression.h \
    expressions/substractExpression.h \
    expressions/terminalExpression.h \
    expressions/unaryExpression.h \
    parser.h \
    widgets/buttonWidget.h \
    widgets/mainWidget.h \
    widgets/screenWidget.h \
    mainwindow.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
