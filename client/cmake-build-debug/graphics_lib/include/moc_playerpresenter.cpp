/****************************************************************************
** Meta object code from reading C++ file 'playerpresenter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../graphics_lib/include/playerpresenter.h"
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
    QByteArrayData data[23];
    char stringdata0[292];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PlayerPresenter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PlayerPresenter_t qt_meta_stringdata_PlayerPresenter = {
    {
QT_MOC_LITERAL(0, 0, 15), // "PlayerPresenter"
QT_MOC_LITERAL(1, 16, 12), // "showErrorMes"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "closeLogForm"
QT_MOC_LITERAL(4, 43, 9), // "setWinner"
QT_MOC_LITERAL(5, 53, 11), // "std::string"
QT_MOC_LITERAL(6, 65, 6), // "result"
QT_MOC_LITERAL(7, 72, 10), // "successAdd"
QT_MOC_LITERAL(8, 83, 7), // "failAdd"
QT_MOC_LITERAL(9, 91, 19), // "processLoginChanged"
QT_MOC_LITERAL(10, 111, 5), // "login"
QT_MOC_LITERAL(11, 117, 22), // "processPasswordChanged"
QT_MOC_LITERAL(12, 140, 15), // "processShowMenu"
QT_MOC_LITERAL(13, 156, 20), // "processShowMenuAgain"
QT_MOC_LITERAL(14, 177, 15), // "processShowAuth"
QT_MOC_LITERAL(15, 193, 14), // "processShowReg"
QT_MOC_LITERAL(16, 208, 16), // "processShowWords"
QT_MOC_LITERAL(17, 225, 15), // "processShowRoom"
QT_MOC_LITERAL(18, 241, 14), // "processConnect"
QT_MOC_LITERAL(19, 256, 3), // "_id"
QT_MOC_LITERAL(20, 260, 16), // "processEndOfGame"
QT_MOC_LITERAL(21, 277, 9), // "checkWord"
QT_MOC_LITERAL(22, 287, 4) // "data"

    },
    "PlayerPresenter\0showErrorMes\0\0"
    "closeLogForm\0setWinner\0std::string\0"
    "result\0successAdd\0failAdd\0processLoginChanged\0"
    "login\0processPasswordChanged\0"
    "processShowMenu\0processShowMenuAgain\0"
    "processShowAuth\0processShowReg\0"
    "processShowWords\0processShowRoom\0"
    "processConnect\0_id\0processEndOfGame\0"
    "checkWord\0data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PlayerPresenter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x06 /* Public */,
       3,    0,   95,    2, 0x06 /* Public */,
       4,    1,   96,    2, 0x06 /* Public */,
       7,    0,   99,    2, 0x06 /* Public */,
       8,    0,  100,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,  101,    2, 0x08 /* Private */,
      11,    1,  104,    2, 0x08 /* Private */,
      12,    0,  107,    2, 0x08 /* Private */,
      13,    0,  108,    2, 0x08 /* Private */,
      14,    0,  109,    2, 0x08 /* Private */,
      15,    0,  110,    2, 0x08 /* Private */,
      16,    0,  111,    2, 0x08 /* Private */,
      17,    0,  112,    2, 0x08 /* Private */,
      18,    1,  113,    2, 0x08 /* Private */,
      20,    0,  116,    2, 0x08 /* Private */,
      21,    1,  117,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,   10,
    QMetaType::Void, 0x80000000 | 5,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,   22,

       0        // eod
};

void PlayerPresenter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PlayerPresenter *_t = static_cast<PlayerPresenter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showErrorMes(); break;
        case 1: _t->closeLogForm(); break;
        case 2: _t->setWinner((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 3: _t->successAdd(); break;
        case 4: _t->failAdd(); break;
        case 5: _t->processLoginChanged((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 6: _t->processPasswordChanged((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 7: _t->processShowMenu(); break;
        case 8: _t->processShowMenuAgain(); break;
        case 9: _t->processShowAuth(); break;
        case 10: _t->processShowReg(); break;
        case 11: _t->processShowWords(); break;
        case 12: _t->processShowRoom(); break;
        case 13: _t->processConnect((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->processEndOfGame(); break;
        case 15: _t->checkWord((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PlayerPresenter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerPresenter::showErrorMes)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PlayerPresenter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerPresenter::closeLogForm)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PlayerPresenter::*_t)(std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerPresenter::setWinner)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PlayerPresenter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerPresenter::successAdd)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PlayerPresenter::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PlayerPresenter::failAdd)) {
                *result = 4;
                return;
            }
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
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void PlayerPresenter::showErrorMes()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PlayerPresenter::closeLogForm()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PlayerPresenter::setWinner(std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void PlayerPresenter::successAdd()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PlayerPresenter::failAdd()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
