/****************************************************************************
** Meta object code from reading C++ file 'socketclass.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../../../home/j/Desktop/DataSender/socketclass.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'socketclass.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_socketclass_t {
    QByteArrayData data[7];
    char stringdata0[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_socketclass_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_socketclass_t qt_meta_stringdata_socketclass = {
    {
QT_MOC_LITERAL(0, 0, 11), // "socketclass"
QT_MOC_LITERAL(1, 12, 9), // "connected"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "disconnected"
QT_MOC_LITERAL(4, 36, 12), // "bytesWritten"
QT_MOC_LITERAL(5, 49, 5), // "bytes"
QT_MOC_LITERAL(6, 55, 9) // "readyRead"

    },
    "socketclass\0connected\0\0disconnected\0"
    "bytesWritten\0bytes\0readyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_socketclass[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    1,   36,    2, 0x0a /* Public */,
       6,    0,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    5,
    QMetaType::Void,

       0        // eod
};

void socketclass::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        socketclass *_t = static_cast<socketclass *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->bytesWritten((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 3: _t->readyRead(); break;
        default: ;
        }
    }
}

const QMetaObject socketclass::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_socketclass.data,
      qt_meta_data_socketclass,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *socketclass::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *socketclass::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_socketclass.stringdata0))
        return static_cast<void*>(const_cast< socketclass*>(this));
    return QObject::qt_metacast(_clname);
}

int socketclass::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
