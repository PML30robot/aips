/****************************************************************************
** Meta object code from reading C++ file 'connector.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../connecter/connector.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connector.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_connector_t[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   13,   12,   12, 0x06,

 // slots: signature, parameters, type, tag, flags
      50,   38,   12,   12, 0x0a,
      92,   82,   12,   12, 0x0a,
     134,  122,   12,   12, 0x0a,
     171,  166,   12,   12, 0x0a,
     202,  196,   12,   12, 0x0a,
     238,  228,   12,   12, 0x0a,
     280,  268,   12,   12, 0x0a,
     322,  312,   12,   12, 0x0a,
     358,  352,   12,   12, 0x0a,
     379,  373,   12,   12, 0x0a,
     400,  394,   12,   12, 0x0a,
     421,  415,   12,   12, 0x0a,
     442,  436,   12,   12, 0x0a,
     463,  457,   12,   12, 0x0a,
     487,  478,   12,   12, 0x0a,
     514,  505,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_connector_t[] = {
    "connector_t\0\0image\0send_image(QImage)\0"
    "hbrightness\0set_brightness_hardware(double)\0"
    "hcontrast\0set_contrast_hardware(double)\0"
    "hsaturation\0set_saturation_hardware(double)\0"
    "hhue\0set_hue_hardware(double)\0hgain\0"
    "set_gain_hardware(double)\0hexposure\0"
    "set_exposure_hardware(double)\0sbrightness\0"
    "set_brightness_software(double)\0"
    "scontrast\0set_contrast_software(double)\0"
    "min_h\0set_min_h(int)\0max_h\0set_max_h(int)\0"
    "min_s\0set_min_s(int)\0max_s\0set_max_s(int)\0"
    "min_v\0set_min_v(int)\0max_v\0set_max_v(int)\0"
    "min_size\0set_min_size(int)\0max_size\0"
    "set_max_size(int)\0"
};

void connector_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        connector_t *_t = static_cast<connector_t *>(_o);
        switch (_id) {
        case 0: _t->send_image((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->set_brightness_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->set_contrast_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->set_saturation_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->set_hue_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->set_gain_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->set_exposure_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->set_brightness_software((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->set_contrast_software((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->set_min_h((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->set_max_h((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->set_min_s((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->set_max_s((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->set_min_v((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->set_max_v((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->set_min_size((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->set_max_size((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData connector_t::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject connector_t::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_connector_t,
      qt_meta_data_connector_t, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &connector_t::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *connector_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *connector_t::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_connector_t))
        return static_cast<void*>(const_cast< connector_t*>(this));
    return QObject::qt_metacast(_clname);
}

int connector_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void connector_t::send_image(QImage _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
