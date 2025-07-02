/****************************************************************************
** Meta object code from reading C++ file 'restaurant.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/models/restaurant.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'restaurant.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10RestaurantE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN10RestaurantE = QtMocHelpers::stringData(
    "Restaurant",
    "idChanged",
    "",
    "nameChanged",
    "descriptionChanged",
    "addressChanged",
    "latitudeChanged",
    "longitudeChanged",
    "ratingChanged",
    "ratingCountChanged",
    "typeChanged",
    "imageUrlChanged",
    "id",
    "name",
    "description",
    "address",
    "latitude",
    "longitude",
    "rating",
    "ratingCount",
    "type",
    "imageUrl"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN10RestaurantE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
      10,   84, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,   11 /* Public */,
       3,    0,   75,    2, 0x06,   12 /* Public */,
       4,    0,   76,    2, 0x06,   13 /* Public */,
       5,    0,   77,    2, 0x06,   14 /* Public */,
       6,    0,   78,    2, 0x06,   15 /* Public */,
       7,    0,   79,    2, 0x06,   16 /* Public */,
       8,    0,   80,    2, 0x06,   17 /* Public */,
       9,    0,   81,    2, 0x06,   18 /* Public */,
      10,    0,   82,    2, 0x06,   19 /* Public */,
      11,    0,   83,    2, 0x06,   20 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
      12, QMetaType::QString, 0x00015103, uint(0), 0,
      13, QMetaType::QString, 0x00015103, uint(1), 0,
      14, QMetaType::QString, 0x00015103, uint(2), 0,
      15, QMetaType::QString, 0x00015103, uint(3), 0,
      16, QMetaType::Double, 0x00015103, uint(4), 0,
      17, QMetaType::Double, 0x00015103, uint(5), 0,
      18, QMetaType::Double, 0x00015103, uint(6), 0,
      19, QMetaType::Int, 0x00015103, uint(7), 0,
      20, QMetaType::QString, 0x00015103, uint(8), 0,
      21, QMetaType::QString, 0x00015103, uint(9), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Restaurant::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN10RestaurantE.offsetsAndSizes,
    qt_meta_data_ZN10RestaurantE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN10RestaurantE_t,
        // property 'id'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'description'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'address'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'latitude'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'longitude'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'rating'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'ratingCount'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'type'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'imageUrl'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Restaurant, std::true_type>,
        // method 'idChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'nameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'descriptionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'latitudeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'longitudeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ratingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ratingCountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'typeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'imageUrlChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Restaurant::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Restaurant *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->idChanged(); break;
        case 1: _t->nameChanged(); break;
        case 2: _t->descriptionChanged(); break;
        case 3: _t->addressChanged(); break;
        case 4: _t->latitudeChanged(); break;
        case 5: _t->longitudeChanged(); break;
        case 6: _t->ratingChanged(); break;
        case 7: _t->ratingCountChanged(); break;
        case 8: _t->typeChanged(); break;
        case 9: _t->imageUrlChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (Restaurant::*)();
            if (_q_method_type _q_method = &Restaurant::idChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (Restaurant::*)();
            if (_q_method_type _q_method = &Restaurant::nameChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (Restaurant::*)();
            if (_q_method_type _q_method = &Restaurant::descriptionChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (Restaurant::*)();
            if (_q_method_type _q_method = &Restaurant::addressChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (Restaurant::*)();
            if (_q_method_type _q_method = &Restaurant::latitudeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (Restaurant::*)();
            if (_q_method_type _q_method = &Restaurant::longitudeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (Restaurant::*)();
            if (_q_method_type _q_method = &Restaurant::ratingChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (Restaurant::*)();
            if (_q_method_type _q_method = &Restaurant::ratingCountChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (Restaurant::*)();
            if (_q_method_type _q_method = &Restaurant::typeChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (Restaurant::*)();
            if (_q_method_type _q_method = &Restaurant::imageUrlChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->id(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->address(); break;
        case 4: *reinterpret_cast< double*>(_v) = _t->latitude(); break;
        case 5: *reinterpret_cast< double*>(_v) = _t->longitude(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->rating(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->ratingCount(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->type(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->imageUrl(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setId(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setAddress(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setLatitude(*reinterpret_cast< double*>(_v)); break;
        case 5: _t->setLongitude(*reinterpret_cast< double*>(_v)); break;
        case 6: _t->setRating(*reinterpret_cast< double*>(_v)); break;
        case 7: _t->setRatingCount(*reinterpret_cast< int*>(_v)); break;
        case 8: _t->setType(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setImageUrl(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Restaurant::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Restaurant::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN10RestaurantE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Restaurant::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Restaurant::idChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Restaurant::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Restaurant::descriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Restaurant::addressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Restaurant::latitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Restaurant::longitudeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Restaurant::ratingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Restaurant::ratingCountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Restaurant::typeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Restaurant::imageUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}
QT_WARNING_POP
