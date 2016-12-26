/****************************************************************************
** Meta object code from reading C++ file 'myprocess.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../01myPlayer/myprocess.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myprocess.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_myProcess_t {
    QByteArrayData data[9];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_myProcess_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_myProcess_t qt_meta_stringdata_myProcess = {
    {
QT_MOC_LITERAL(0, 0, 9), // "myProcess"
QT_MOC_LITERAL(1, 10, 22), // "SignalSendTimePosition"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 4), // "time"
QT_MOC_LITERAL(4, 39, 25), // "SignalSendPercentPosition"
QT_MOC_LITERAL(5, 65, 7), // "percent"
QT_MOC_LITERAL(6, 73, 16), // "doProcessTimeout"
QT_MOC_LITERAL(7, 90, 18), // "doProcessReadyRead"
QT_MOC_LITERAL(8, 109, 17) // "doProcessFinished"

    },
    "myProcess\0SignalSendTimePosition\0\0"
    "time\0SignalSendPercentPosition\0percent\0"
    "doProcessTimeout\0doProcessReadyRead\0"
    "doProcessFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_myProcess[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   45,    2, 0x08 /* Private */,
       7,    0,   46,    2, 0x08 /* Private */,
       8,    1,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Int,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void myProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        myProcess *_t = static_cast<myProcess *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SignalSendTimePosition((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->SignalSendPercentPosition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->doProcessTimeout(); break;
        case 3: _t->doProcessReadyRead(); break;
        case 4: _t->doProcessFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (myProcess::*_t)(float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&myProcess::SignalSendTimePosition)) {
                *result = 0;
            }
        }
        {
            typedef void (myProcess::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&myProcess::SignalSendPercentPosition)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject myProcess::staticMetaObject = {
    { &QProcess::staticMetaObject, qt_meta_stringdata_myProcess.data,
      qt_meta_data_myProcess,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *myProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *myProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_myProcess.stringdata0))
        return static_cast<void*>(const_cast< myProcess*>(this));
    return QProcess::qt_metacast(_clname);
}

int myProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProcess::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void myProcess::SignalSendTimePosition(float _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void myProcess::SignalSendPercentPosition(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
