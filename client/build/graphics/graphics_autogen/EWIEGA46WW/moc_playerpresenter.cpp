/****************************************************************************
** Meta object code from reading C++ file 'playerpresenter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../graphics/playerpresenter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playerpresenter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PlayerPresenter_t {
    QByteArrayData data[10];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlayerPresenter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlayerPresenter_t qt_meta_stringdata_PlayerPresenter = {
    {
QT_MOC_LITERAL(0, 0, 15), // "PlayerPresenter"
QT_MOC_LITERAL(1, 16, 19), // "processLoginChanged"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 11), // "std::string"
QT_MOC_LITERAL(4, 49, 5), // "login"
QT_MOC_LITERAL(5, 55, 22), // "processPasswordChanged"
QT_MOC_LITERAL(6, 78, 15), // "processShowMenu"
QT_MOC_LITERAL(7, 94, 15), // "processShowAuth"
QT_MOC_LITERAL(8, 110, 14), // "processShowReg"
QT_MOC_LITERAL(9, 125, 16) // "processShowWords"

    },
    "PlayerPresenter\0processLoginChanged\0"
    "\0std::string\0login\0processPasswordChanged\0"
    "processShowMenu\0processShowAuth\0"
    "processShowReg\0processShowWords"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayerPresenter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x08 /* Private */,
       5,    1,   47,    2, 0x08 /* Private */,
       6,    0,   50,    2, 0x08 /* Private */,
       7,    0,   51,    2, 0x08 /* Private */,
       8,    0,   52,    2, 0x08 /* Private */,
       9,    0,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PlayerPresenter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlayerPresenter *_t = static_cast<PlayerPresenter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->processLoginChanged((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 1: _t->processPasswordChanged((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 2: _t->processShowMenu(); break;
        case 3: _t->processShowAuth(); break;
        case 4: _t->processShowReg(); break;
        case 5: _t->processShowWords(); break;
        default: ;
        }
    }
}

const QMetaObject PlayerPresenter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_PlayerPresenter.data,
      qt_meta_data_PlayerPresenter,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *PlayerPresenter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PlayerPresenter::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PlayerPresenter.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PlayerPresenter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
