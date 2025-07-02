/****************************************************************************
** Meta object code from reading C++ file 'user.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/models/user.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'user.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN4UserE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN4UserE = QtMocHelpers::stringData(
    "User",
    "idChanged",
    "",
    "usernameChanged",
    "emailChanged",
    "userTypeChanged",
    "tokenChanged",
    "phoneNumberChanged",
    "cityChanged",
    "locationChanged",
    "id",
    "username",
    "email",
    "userType",
    "token",
    "phoneNumber",
    "city",
    "location"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN4UserE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       8,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    9 /* Public */,
       3,    0,   63,    2, 0x06,   10 /* Public */,
       4,    0,   64,    2, 0x06,   11 /* Public */,
       5,    0,   65,    2, 0x06,   12 /* Public */,
       6,    0,   66,    2, 0x06,   13 /* Public */,
       7,    0,   67,    2, 0x06,   14 /* Public */,
       8,    0,   68,    2, 0x06,   15 /* Public */,
       9,    0,   69,    2, 0x06,   16 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
      10, QMetaType::QString, 0x00015103, uint(0), 0,
      11, QMetaType::QString, 0x00015103, uint(1), 0,
      12, QMetaType::QString, 0x00015103, uint(2), 0,
      13, QMetaType::QString, 0x00015103, uint(3), 0,
      14, QMetaType::QString, 0x00015103, uint(4), 0,
      15, QMetaType::QString, 0x00015103, uint(5), 0,
      16, QMetaType::QString, 0x00015103, uint(6), 0,
      17, QMetaType::QString, 0x00015103, uint(7), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject User::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN4UserE.offsetsAndSizes,
    qt_meta_data_ZN4UserE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN4UserE_t,
        // property 'id'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'username'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'email'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'userType'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'token'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'phoneNumber'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'city'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'location'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<User, std::true_type>,
        // method 'idChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'usernameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'emailChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'userTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tokenChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'phoneNumberChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'cityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'locationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void User::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<User *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->idChanged(); break;
        case 1: _t->usernameChanged(); break;
        case 2: _t->emailChanged(); break;
        case 3: _t->userTypeChanged(); break;
        case 4: _t->tokenChanged(); break;
        case 5: _t->phoneNumberChanged(); break;
        case 6: _t->cityChanged(); break;
        case 7: _t->locationChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (User::*)();
            if (_q_method_type _q_method = &User::idChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (User::*)();
            if (_q_method_type _q_method = &User::usernameChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (User::*)();
            if (_q_method_type _q_method = &User::emailChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (User::*)();
            if (_q_method_type _q_method = &User::userTypeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (User::*)();
            if (_q_method_type _q_method = &User::tokenChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (User::*)();
            if (_q_method_type _q_method = &User::phoneNumberChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (User::*)();
            if (_q_method_type _q_method = &User::cityChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (User::*)();
            if (_q_method_type _q_method = &User::locationChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->username(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->email(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->userType(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->token(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->phoneNumber(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->city(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->location(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setUsername(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setEmail(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setUserType(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setToken(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setPhoneNumber(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setCity(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setLocation(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *User::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *User::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN4UserE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int User::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void User::idChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void User::usernameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void User::emailChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void User::userTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void User::tokenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void User::phoneNumberChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void User::cityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void User::locationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
