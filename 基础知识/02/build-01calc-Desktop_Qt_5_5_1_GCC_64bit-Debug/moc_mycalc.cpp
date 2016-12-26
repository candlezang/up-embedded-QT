/****************************************************************************
** Meta object code from reading C++ file 'mycalc.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../01calc/mycalc.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mycalc.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_myCalc_t {
    QByteArrayData data[7];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myCalc_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myCalc_t qt_meta_stringdata_myCalc = {
    {
QT_MOC_LITERAL(0, 0, 6), // "myCalc"
QT_MOC_LITERAL(1, 7, 17), // "doProcessClickNum"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 20), // "doProcessClickSymbol"
QT_MOC_LITERAL(4, 47, 20), // "doProcessClickDelete"
QT_MOC_LITERAL(5, 68, 19), // "doProcessClickArith"
QT_MOC_LITERAL(6, 88, 19) // "doProcessClickEqual"

    },
    "myCalc\0doProcessClickNum\0\0"
    "doProcessClickSymbol\0doProcessClickDelete\0"
    "doProcessClickArith\0doProcessClickEqual"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myCalc[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x08 /* Private */,
       3,    1,   42,    2, 0x08 /* Private */,
       4,    1,   45,    2, 0x08 /* Private */,
       5,    1,   48,    2, 0x08 /* Private */,
       6,    1,   51,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void myCalc::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        myCalc *_t = static_cast<myCalc *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doProcessClickNum((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->doProcessClickSymbol((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->doProcessClickDelete((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->doProcessClickArith((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->doProcessClickEqual((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject myCalc::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_myCalc.data,
      qt_meta_data_myCalc,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *myCalc::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myCalc::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_myCalc.stringdata0))
        return static_cast<void*>(const_cast< myCalc*>(this));
    return QDialog::qt_metacast(_clname);
}

int myCalc::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
