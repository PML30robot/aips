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
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   13,   12,   12, 0x06,
      38,   12,   12,   12, 0x06,

 // slots: signature, parameters, type, tag, flags
      57,   13,   12,   12, 0x0a,
      87,   75,   12,   12, 0x0a,
     129,  119,   12,   12, 0x0a,
     171,  159,   12,   12, 0x0a,
     208,  203,   12,   12, 0x0a,
     239,  233,   12,   12, 0x0a,
     275,  265,   12,   12, 0x0a,
     317,  305,   12,   12, 0x0a,
     359,  349,   12,   12, 0x0a,
     395,  389,   12,   12, 0x0a,
     416,  410,   12,   12, 0x0a,
     437,  431,   12,   12, 0x0a,
     458,  452,   12,   12, 0x0a,
     479,  473,   12,   12, 0x0a,
     500,  494,   12,   12, 0x0a,
     524,  515,   12,   12, 0x0a,
     551,  542,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_connector_t[] = {
    "connector_t\0\0image\0send_image(QImage)\0"
    "stop_obj_track_s()\0get_image(QImage)\0"
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
        case 1: _t->stop_obj_track_s(); break;
        case 2: _t->get_image((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 3: _t->set_brightness_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->set_contrast_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->set_saturation_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->set_hue_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->set_gain_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->set_exposure_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->set_brightness_software((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 10: _t->set_contrast_software((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 11: _t->set_min_h((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->set_max_h((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->set_min_s((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->set_max_s((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->set_min_v((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->set_max_v((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->set_min_size((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->set_max_size((*reinterpret_cast< int(*)>(_a[1]))); break;
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
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void connector_t::send_image(QImage _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void connector_t::stop_obj_track_s()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
