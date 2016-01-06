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
      37,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      19,       // signalCount

 // signals: signature, parameters, type, tag, flags
      19,   13,   12,   12, 0x06,
      38,   12,   12,   12, 0x06,
      57,   12,   12,   12, 0x06,
      83,   77,   12,   12, 0x06,
     119,   77,   12,   12, 0x06,
     153,   77,   12,   12, 0x06,
     182,   77,   12,   12, 0x06,
     218,   77,   12,   12, 0x06,
     248,   77,   12,   12, 0x06,
     288,  282,   12,   12, 0x06,
     313,  307,   12,   12, 0x06,
     338,  332,   12,   12, 0x06,
     363,  357,   12,   12, 0x06,
     388,  382,   12,   12, 0x06,
     413,  407,   12,   12, 0x06,
     441,  432,   12,   12, 0x06,
     472,  463,   12,   12, 0x06,
     506,  494,   12,   12, 0x06,
     552,  542,   12,   12, 0x06,

 // slots: signature, parameters, type, tag, flags
     586,   12,   12,   12, 0x0a,
     608,   13,   12,   12, 0x0a,
     638,  626,   12,   12, 0x0a,
     684,  674,   12,   12, 0x0a,
     730,  718,   12,   12, 0x0a,
     767,  762,   12,   12, 0x0a,
     798,  792,   12,   12, 0x0a,
     834,  824,   12,   12, 0x0a,
     864,  494,   12,   12, 0x0a,
     896,  542,   12,   12, 0x0a,
     926,  282,   12,   12, 0x0a,
     941,  307,   12,   12, 0x0a,
     956,  332,   12,   12, 0x0a,
     971,  357,   12,   12, 0x0a,
     986,  382,   12,   12, 0x0a,
    1001,  407,   12,   12, 0x0a,
    1016,  432,   12,   12, 0x0a,
    1034,  463,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_connector_t[] = {
    "connector_t\0\0image\0send_image(QImage)\0"
    "stop_obj_track_s()\0export_settings_s()\0"
    "value\0set_brightness_hardware_sig(double)\0"
    "set_contrast_hardware_sig(double)\0"
    "set_hue_hardware_sig(double)\0"
    "set_saturation_hardware_sig(double)\0"
    "set_gain_hardware_sig(double)\0"
    "set_exposure_hardware_sig(double)\0"
    "min_h\0set_min_h_sig(int)\0max_h\0"
    "set_max_h_sig(int)\0min_s\0set_min_s_sig(int)\0"
    "max_s\0set_max_s_sig(int)\0min_v\0"
    "set_min_v_sig(int)\0max_v\0set_max_v_sig(int)\0"
    "min_size\0set_min_size_sig(int)\0max_size\0"
    "set_max_size_sig(int)\0sbrightness\0"
    "set_brightness_software_sig(double)\0"
    "scontrast\0set_contrast_software_sig(double)\0"
    "export_settings_slt()\0get_image(QImage)\0"
    "hbrightness\0set_brightness_hardware_slt(double)\0"
    "hcontrast\0set_contrast_hardware_slt(double)\0"
    "hsaturation\0set_saturation_hardware(double)\0"
    "hhue\0set_hue_hardware(double)\0hgain\0"
    "set_gain_hardware(double)\0hexposure\0"
    "set_exposure_hardware(double)\0"
    "set_brightness_software(double)\0"
    "set_contrast_software(double)\0"
    "set_min_h(int)\0set_max_h(int)\0"
    "set_min_s(int)\0set_max_s(int)\0"
    "set_min_v(int)\0set_max_v(int)\0"
    "set_min_size(int)\0set_max_size(int)\0"
};

void connector_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        connector_t *_t = static_cast<connector_t *>(_o);
        switch (_id) {
        case 0: _t->send_image((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->stop_obj_track_s(); break;
        case 2: _t->export_settings_s(); break;
        case 3: _t->set_brightness_hardware_sig((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->set_contrast_hardware_sig((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->set_hue_hardware_sig((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->set_saturation_hardware_sig((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->set_gain_hardware_sig((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->set_exposure_hardware_sig((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 9: _t->set_min_h_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->set_max_h_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->set_min_s_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->set_max_s_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->set_min_v_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->set_max_v_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->set_min_size_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->set_max_size_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->set_brightness_software_sig((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->set_contrast_software_sig((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: _t->export_settings_slt(); break;
        case 20: _t->get_image((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 21: _t->set_brightness_hardware_slt((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 22: _t->set_contrast_hardware_slt((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 23: _t->set_saturation_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 24: _t->set_hue_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 25: _t->set_gain_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 26: _t->set_exposure_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 27: _t->set_brightness_software((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 28: _t->set_contrast_software((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 29: _t->set_min_h((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->set_max_h((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->set_min_s((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->set_max_s((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->set_min_v((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->set_max_v((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 35: _t->set_min_size((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 36: _t->set_max_size((*reinterpret_cast< int(*)>(_a[1]))); break;
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
        if (_id < 37)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 37;
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

// SIGNAL 2
void connector_t::export_settings_s()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void connector_t::set_brightness_hardware_sig(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void connector_t::set_contrast_hardware_sig(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void connector_t::set_hue_hardware_sig(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void connector_t::set_saturation_hardware_sig(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void connector_t::set_gain_hardware_sig(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void connector_t::set_exposure_hardware_sig(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void connector_t::set_min_h_sig(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void connector_t::set_max_h_sig(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void connector_t::set_min_s_sig(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void connector_t::set_max_s_sig(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void connector_t::set_min_v_sig(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void connector_t::set_max_v_sig(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void connector_t::set_min_size_sig(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void connector_t::set_max_size_sig(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void connector_t::set_brightness_software_sig(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void connector_t::set_contrast_software_sig(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}
QT_END_MOC_NAMESPACE
