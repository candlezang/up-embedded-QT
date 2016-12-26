/****************************************************************************
** Meta object code from reading C++ file 'twoform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../03FormToForm/twoform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'twoform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_twoForm_t {
    QByteArrayData data[6];
    char stringdata0[106];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_twoForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_twoForm_t qt_meta_stringdata_twoForm = {
    {
QT_MOC_LITERAL(0, 0, 7), // "twoForm"
QT_MOC_LITERAL(1, 8, 17), // "SignalBackOneForm"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 25), // "doProcessClinkBackOneForm"
QT_MOC_LITERAL(4, 53, 25), // "doProcessClinkGoThreeForm"
QT_MOC_LITERAL(5, 79, 26) // "doPorcessSignalBackTwoForm"

    },
    "twoForm\0SignalBackOneForm\0\0"
    "doProcessClinkBackOneForm\0"
    "doProcessClinkGoThreeForm\0"
    "doPorcessSignalBackTwoForm"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_twoForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   37,    2, 0x08 /* Private */,
       4,    1,   40,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,

       0        // eod
};

void twoForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        twoForm *_t = static_cast<twoForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalBackOneForm((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->doProcessClinkBackOneForm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->doProcessClinkGoThreeForm((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->doPorcessSignalBackTwoForm(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (twoForm::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&twoForm::SignalBackOneForm)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject twoForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_twoForm.data,
      qt_meta_data_twoForm,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *twoForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *twoForm::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_twoForm.stringdata0))
        return static_cast<void*>(const_cast< twoForm*>(this));
    return QWidget::qt_metacast(_clname);
}

int twoForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void twoForm::SignalBackOneForm(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
