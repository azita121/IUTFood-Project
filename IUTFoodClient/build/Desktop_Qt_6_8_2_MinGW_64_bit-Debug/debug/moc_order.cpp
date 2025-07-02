/****************************************************************************
** Meta object code from reading C++ file 'order.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/models/order.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'order.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN5OrderE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN5OrderE = QtMocHelpers::stringData(
    "Order",
    "idChanged",
    "",
    "customerIdChanged",
    "restaurantIdChanged",
    "statusChanged",
    "totalPriceChanged",
    "orderTimeChanged",
    "deliveryTimeChanged",
    "itemsChanged",
    "id",
    "customerId",
    "restaurantId",
    "status",
    "statusDescription",
    "statusColor",
    "statusIcon",
    "totalPrice",
    "orderTime",
    "deliveryTime",
    "items",
    "QList<MenuItem*>"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN5OrderE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
      11,   70, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,   12 /* Public */,
       3,    0,   63,    2, 0x06,   13 /* Public */,
       4,    0,   64,    2, 0x06,   14 /* Public */,
       5,    0,   65,    2, 0x06,   15 /* Public */,
       6,    0,   66,    2, 0x06,   16 /* Public */,
       7,    0,   67,    2, 0x06,   17 /* Public */,
       8,    0,   68,    2, 0x06,   18 /* Public */,
       9,    0,   69,    2, 0x06,   19 /* Public */,

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
      14, QMetaType::QString, 0x00015001, uint(3), 0,
      15, QMetaType::QString, 0x00015001, uint(3), 0,
      16, QMetaType::QString, 0x00015001, uint(3), 0,
      17, QMetaType::Double, 0x00015103, uint(4), 0,
      18, QMetaType::QDateTime, 0x00015103, uint(5), 0,
      19, QMetaType::QDateTime, 0x00015103, uint(6), 0,
      20, 0x80000000 | 21, 0x0001510b, uint(7), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Order::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN5OrderE.offsetsAndSizes,
    qt_meta_data_ZN5OrderE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN5OrderE_t,
        // property 'id'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'customerId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'restaurantId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'status'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'statusDescription'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'statusColor'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'statusIcon'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'totalPrice'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'orderTime'
        QtPrivate::TypeAndForceComplete<QDateTime, std::true_type>,
        // property 'deliveryTime'
        QtPrivate::TypeAndForceComplete<QDateTime, std::true_type>,
        // property 'items'
        QtPrivate::TypeAndForceComplete<QList<MenuItem*>, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Order, std::true_type>,
        // method 'idChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'customerIdChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'restaurantIdChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'statusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'totalPriceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'orderTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deliveryTimeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'itemsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Order::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Order *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->idChanged(); break;
        case 1: _t->customerIdChanged(); break;
        case 2: _t->restaurantIdChanged(); break;
        case 3: _t->statusChanged(); break;
        case 4: _t->totalPriceChanged(); break;
        case 5: _t->orderTimeChanged(); break;
        case 6: _t->deliveryTimeChanged(); break;
        case 7: _t->itemsChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (Order::*)();
            if (_q_method_type _q_method = &Order::idChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (Order::*)();
            if (_q_method_type _q_method = &Order::customerIdChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (Order::*)();
            if (_q_method_type _q_method = &Order::restaurantIdChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (Order::*)();
            if (_q_method_type _q_method = &Order::statusChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (Order::*)();
            if (_q_method_type _q_method = &Order::totalPriceChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (Order::*)();
            if (_q_method_type _q_method = &Order::orderTimeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (Order::*)();
            if (_q_method_type _q_method = &Order::deliveryTimeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (Order::*)();
            if (_q_method_type _q_method = &Order::itemsChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 10:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<MenuItem*> >(); break;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->customerId(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->restaurantId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->status(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->statusDescription(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->statusColor(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->statusIcon(); break;
        case 7: *reinterpret_cast< double*>(_v) = _t->totalPrice(); break;
        case 8: *reinterpret_cast< QDateTime*>(_v) = _t->orderTime(); break;
        case 9: *reinterpret_cast< QDateTime*>(_v) = _t->deliveryTime(); break;
        case 10: *reinterpret_cast< QList<MenuItem*>*>(_v) = _t->items(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setCustomerId(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setRestaurantId(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setStatus(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setTotalPrice(*reinterpret_cast< double*>(_v)); break;
        case 8: _t->setOrderTime(*reinterpret_cast< QDateTime*>(_v)); break;
        case 9: _t->setDeliveryTime(*reinterpret_cast< QDateTime*>(_v)); break;
        case 10: _t->setItems(*reinterpret_cast< QList<MenuItem*>*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Order::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Order::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN5OrderE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Order::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Order::idChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Order::customerIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Order::restaurantIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Order::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Order::totalPriceChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Order::orderTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Order::deliveryTimeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Order::itemsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
