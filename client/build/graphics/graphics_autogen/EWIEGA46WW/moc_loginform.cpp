/****************************************************************************
** Meta object code from reading C++ file 'loginform.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../graphics/loginform.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginform.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LoginForm_t {
    QByteArrayData data[15];
    char stringdata0[194];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LoginForm_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LoginForm_t qt_meta_stringdata_LoginForm = {
    {
QT_MOC_LITERAL(0, 0, 9), // "LoginForm"
QT_MOC_LITERAL(1, 10, 8), // "showMenu"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 11), // "showRegForm"
QT_MOC_LITERAL(4, 32, 12), // "loginChanged"
QT_MOC_LITERAL(5, 45, 11), // "std::string"
QT_MOC_LITERAL(6, 57, 5), // "login"
QT_MOC_LITERAL(7, 63, 15), // "passwordChanged"
QT_MOC_LITERAL(8, 79, 22), // "on_logEdit_textChanged"
QT_MOC_LITERAL(9, 102, 4), // "text"
QT_MOC_LITERAL(10, 107, 22), // "on_pasEdit_textChanged"
QT_MOC_LITERAL(11, 130, 10), // "showWindow"
QT_MOC_LITERAL(12, 141, 10), // "hideWindow"
QT_MOC_LITERAL(13, 152, 20), // "on_logButton_clicked"
QT_MOC_LITERAL(14, 173, 20) // "on_regButton_clicked"

    },
    "LoginForm\0showMenu\0\0showRegForm\0"
    "loginChanged\0std::string\0login\0"
    "passwordChanged\0on_logEdit_textChanged\0"
    "text\0on_pasEdit_textChanged\0showWindow\0"
    "hideWindow\0on_logButton_clicked\0"
    "on_regButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LoginForm[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    1,   66,    2, 0x06 /* Public */,
       7,    1,   69,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   72,    2, 0x08 /* Private */,
      10,    1,   75,    2, 0x08 /* Private */,
      11,    0,   78,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,
      13,    0,   80,    2, 0x08 /* Private */,
      14,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LoginForm::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        LoginForm *_t = static_cast<LoginForm *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showMenu(); break;
        case 1: _t->showRegForm(); break;
        case 2: _t->loginChanged((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 3: _t->passwordChanged((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 4: _t->on_logEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_pasEdit_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->showWindow(); break;
        case 7: _t->hideWindow(); break;
        case 8: _t->on_logButton_clicked(); break;
        case 9: _t->on_regButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (LoginForm::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginForm::showMenu)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (LoginForm::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginForm::showRegForm)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (LoginForm::*_t)(std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginForm::loginChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (LoginForm::*_t)(std::string );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LoginForm::passwordChanged)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject LoginForm::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_LoginForm.data,
      qt_meta_data_LoginForm,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *LoginForm::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoginForm::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LoginForm.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IWiringView"))
        return static_cast< IWiringView*>(this);
    return QWidget::qt_metacast(_clname);
}

int LoginForm::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void LoginForm::showMenu()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LoginForm::showRegForm()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void LoginForm::loginChanged(std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void LoginForm::passwordChanged(std::string _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
