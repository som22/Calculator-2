/****************************************************************************
** Meta object code from reading C++ file 'buttonWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Calculator/widgets/buttonWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buttonWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ButtonWidget_t {
    QByteArrayData data[18];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ButtonWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ButtonWidget_t qt_meta_stringdata_ButtonWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ButtonWidget"
QT_MOC_LITERAL(1, 13, 16), // "backspaceClicked"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 15), // "binaryOpClicked"
QT_MOC_LITERAL(4, 47, 4), // "type"
QT_MOC_LITERAL(5, 52, 12), // "commaClicked"
QT_MOC_LITERAL(6, 65, 12), // "equalClicked"
QT_MOC_LITERAL(7, 78, 10), // "numClicked"
QT_MOC_LITERAL(8, 89, 5), // "value"
QT_MOC_LITERAL(9, 95, 14), // "unaryOpClicked"
QT_MOC_LITERAL(10, 110, 9), // "mcClicked"
QT_MOC_LITERAL(11, 120, 20), // "handleBackspaceClick"
QT_MOC_LITERAL(12, 141, 19), // "handleBinaryOpClick"
QT_MOC_LITERAL(13, 161, 16), // "handleCommaClick"
QT_MOC_LITERAL(14, 178, 16), // "handleEqualClick"
QT_MOC_LITERAL(15, 195, 14), // "handleNumClick"
QT_MOC_LITERAL(16, 210, 18), // "handleUnaryOpClick"
QT_MOC_LITERAL(17, 229, 13) // "handleMCClick"

    },
    "ButtonWidget\0backspaceClicked\0\0"
    "binaryOpClicked\0type\0commaClicked\0"
    "equalClicked\0numClicked\0value\0"
    "unaryOpClicked\0mcClicked\0handleBackspaceClick\0"
    "handleBinaryOpClick\0handleCommaClick\0"
    "handleEqualClick\0handleNumClick\0"
    "handleUnaryOpClick\0handleMCClick"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ButtonWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    1,   85,    2, 0x06 /* Public */,
       5,    0,   88,    2, 0x06 /* Public */,
       6,    0,   89,    2, 0x06 /* Public */,
       7,    1,   90,    2, 0x06 /* Public */,
       9,    1,   93,    2, 0x06 /* Public */,
      10,    0,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,   97,    2, 0x08 /* Private */,
      12,    1,   98,    2, 0x08 /* Private */,
      13,    0,  101,    2, 0x08 /* Private */,
      14,    0,  102,    2, 0x08 /* Private */,
      15,    1,  103,    2, 0x08 /* Private */,
      16,    1,  106,    2, 0x08 /* Private */,
      17,    0,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,

       0        // eod
};

void ButtonWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ButtonWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backspaceClicked(); break;
        case 1: _t->binaryOpClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->commaClicked(); break;
        case 3: _t->equalClicked(); break;
        case 4: _t->numClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->unaryOpClicked((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->mcClicked(); break;
        case 7: _t->handleBackspaceClick(); break;
        case 8: _t->handleBinaryOpClick((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->handleCommaClick(); break;
        case 10: _t->handleEqualClick(); break;
        case 11: _t->handleNumClick((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->handleUnaryOpClick((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->handleMCClick(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ButtonWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ButtonWidget::backspaceClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ButtonWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ButtonWidget::binaryOpClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ButtonWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ButtonWidget::commaClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ButtonWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ButtonWidget::equalClicked)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ButtonWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ButtonWidget::numClicked)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ButtonWidget::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ButtonWidget::unaryOpClicked)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ButtonWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ButtonWidget::mcClicked)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ButtonWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ButtonWidget.data,
    qt_meta_data_ButtonWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ButtonWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ButtonWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ButtonWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ButtonWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void ButtonWidget::backspaceClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ButtonWidget::binaryOpClicked(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ButtonWidget::commaClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ButtonWidget::equalClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ButtonWidget::numClicked(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ButtonWidget::unaryOpClicked(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void ButtonWidget::mcClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
