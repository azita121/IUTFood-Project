/****************************************************************************
** Meta object code from reading C++ file 'chatmessage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/models/chatmessage.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatmessage.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11ChatMessageE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11ChatMessageE = QtMocHelpers::stringData(
    "ChatMessage",
    "idChanged",
    "",
    "fromUserIdChanged",
    "toUserIdChanged",
    "contentChanged",
    "timestampChanged",
    "isReadChanged",
    "id",
    "fromUserId",
    "toUserId",
    "content",
    "timestamp",
    "isRead"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN11ChatMessageE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       6,   56, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    7 /* Public */,
       3,    0,   51,    2, 0x06,    8 /* Public */,
       4,    0,   52,    2, 0x06,    9 /* Public */,
       5,    0,   53,    2, 0x06,   10 /* Public */,
       6,    0,   54,    2, 0x06,   11 /* Public */,
       7,    0,   55,    2, 0x06,   12 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
       8, QMetaType::QString, 0x00015103, uint(0), 0,
       9, QMetaType::QString, 0x00015103, uint(1), 0,
      10, QMetaType::QString, 0x00015103, uint(2), 0,
      11, QMetaType::QString, 0x00015103, uint(3), 0,
      12, QMetaType::QDateTime, 0x00015103, uint(4), 0,
      13, QMetaType::Bool, 0x00015103, uint(5), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject ChatMessage::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN11ChatMessageE.offsetsAndSizes,
    qt_meta_data_ZN11ChatMessageE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11ChatMessageE_t,
        // property 'id'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'fromUserId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'toUserId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'content'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'timestamp'
        QtPrivate::TypeAndForceComplete<QDateTime, std::true_type>,
        // property 'isRead'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ChatMessage, std::true_type>,
        // method 'idChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fromUserIdChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'toUserIdChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'contentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'timestampChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isReadChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ChatMessage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ChatMessage *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->idChanged(); break;
        case 1: _t->fromUserIdChanged(); break;
        case 2: _t->toUserIdChanged(); break;
        case 3: _t->contentChanged(); break;
        case 4: _t->timestampChanged(); break;
        case 5: _t->isReadChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (ChatMessage::*)();
            if (_q_method_type _q_method = &ChatMessage::idChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (ChatMessage::*)();
            if (_q_method_type _q_method = &ChatMessage::fromUserIdChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (ChatMessage::*)();
            if (_q_method_type _q_method = &ChatMessage::toUserIdChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (ChatMessage::*)();
            if (_q_method_type _q_method = &ChatMessage::contentChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (ChatMessage::*)();
            if (_q_method_type _q_method = &ChatMessage::timestampChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (ChatMessage::*)();
            if (_q_method_type _q_method = &ChatMessage::isReadChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->fromUserId(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->toUserId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->content(); break;
        case 4: *reinterpret_cast< QDateTime*>(_v) = _t->timestamp(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->isRead(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFromUserId(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setToUserId(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setContent(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setTimestamp(*reinterpret_cast< QDateTime*>(_v)); break;
        case 5: _t->setIsRead(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *ChatMessage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatMessage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN11ChatMessageE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int ChatMessage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void ChatMessage::idChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ChatMessage::fromUserIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ChatMessage::toUserIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ChatMessage::contentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ChatMessage::timestampChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void ChatMessage::isReadChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
