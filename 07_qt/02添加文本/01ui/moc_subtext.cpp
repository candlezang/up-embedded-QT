/****************************************************************************
** Meta object code from reading C++ file 'subtext.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../08_qt/01notepad/subtext.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'subtext.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_subtext_t {
    QByteArrayData data[6];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_subtext_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_subtext_t qt_meta_stringdata_subtext = {
    {
QT_MOC_LITERAL(0, 0, 7), // "subtext"
QT_MOC_LITERAL(1, 8, 24), // "SigShowBlockColumnNumber"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "SlotDoumentChange"
QT_MOC_LITERAL(4, 52, 14), // "SlotSubTextDel"
QT_MOC_LITERAL(5, 67, 30) // "doProcessCursorPositionChanged"

    },
    "subtext\0SigShowBlockColumnNumber\0\0"
    "SlotDoumentChange\0SlotSubTextDel\0"
    "doProcessCursorPositionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_subtext[] = {

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
       3,    0,   37,    2, 0x08 /* Private */,
       4,    0,   38,    2, 0x08 /* Private */,
       5,    0,   39,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void subtext::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        subtext *_t = static_cast<subtext *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SigShowBlockColumnNumber((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->SlotDoumentChange(); break;
        case 2: _t->SlotSubTextDel(); break;
        case 3: _t->doProcessCursorPositionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (subtext::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&subtext::SigShowBlockColumnNumber)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject subtext::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_subtext.data,
      qt_meta_data_subtext,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *subtext::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *subtext::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_subtext.stringdata0))
        return static_cast<void*>(const_cast< subtext*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int subtext::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
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
void subtext::SigShowBlockColumnNumber(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
