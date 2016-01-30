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
      79,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      44,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x06,
      38,   12,   12,   12, 0x06,
      56,   12,   12,   12, 0x06,
      79,   12,   12,   12, 0x06,
      98,   12,   12,   12, 0x06,
     121,   12,   12,   12, 0x06,
     146,   12,   12,   12, 0x06,
     171,   12,   12,   12, 0x06,
     200,  194,   12,   12, 0x06,
     219,   12,   12,   12, 0x06,
     238,   12,   12,   12, 0x06,
     258,   12,   12,   12, 0x06,
     284,  278,   12,   12, 0x06,
     320,  278,   12,   12, 0x06,
     354,  278,   12,   12, 0x06,
     383,  278,   12,   12, 0x06,
     419,  278,   12,   12, 0x06,
     449,  278,   12,   12, 0x06,
     489,  483,   12,   12, 0x06,
     514,  508,   12,   12, 0x06,
     539,  533,   12,   12, 0x06,
     564,  558,   12,   12, 0x06,
     589,  583,   12,   12, 0x06,
     614,  608,   12,   12, 0x06,
     642,  633,   12,   12, 0x06,
     673,  664,   12,   12, 0x06,
     695,  483,   12,   12, 0x06,
     714,  508,   12,   12, 0x06,
     733,  533,   12,   12, 0x06,
     752,  558,   12,   12, 0x06,
     771,  583,   12,   12, 0x06,
     790,  608,   12,   12, 0x06,
     809,  633,   12,   12, 0x06,
     831,  664,   12,   12, 0x06,
     865,  853,   12,   12, 0x06,
     911,  901,   12,   12, 0x06,
     958,  945,   12,   12, 0x06,
     989,  983,   12,   12, 0x06,
    1018, 1007,   12,   12, 0x06,
    1048, 1041,   12,   12, 0x06,
    1078, 1067,   12,   12, 0x06,
    1114, 1101,   12,   12, 0x06,
    1152, 1139,   12,   12, 0x06,
    1188, 1177,   12,   12, 0x06,

 // slots: signature, parameters, type, tag, flags
    1211,   12,   12,   12, 0x0a,
    1233,   12,   12,   12, 0x0a,
    1255,  194,   12,   12, 0x0a,
    1285, 1273,   12,   12, 0x0a,
    1331, 1321,   12,   12, 0x0a,
    1377, 1365,   12,   12, 0x0a,
    1414, 1409,   12,   12, 0x0a,
    1445, 1439,   12,   12, 0x0a,
    1481, 1471,   12,   12, 0x0a,
    1511,  853,   12,   12, 0x0a,
    1543,  901,   12,   12, 0x0a,
    1573,  483,   12,   12, 0x0a,
    1588,  508,   12,   12, 0x0a,
    1603,  533,   12,   12, 0x0a,
    1618,  558,   12,   12, 0x0a,
    1633,  583,   12,   12, 0x0a,
    1648,  608,   12,   12, 0x0a,
    1663,  633,   12,   12, 0x0a,
    1681,  664,   12,   12, 0x0a,
    1699,  483,   12,   12, 0x0a,
    1714,  508,   12,   12, 0x0a,
    1729,  533,   12,   12, 0x0a,
    1744,  558,   12,   12, 0x0a,
    1759,  583,   12,   12, 0x0a,
    1774,  608,   12,   12, 0x0a,
    1789,  633,   12,   12, 0x0a,
    1807,  664,   12,   12, 0x0a,
    1825,  945,   12,   12, 0x0a,
    1854,  983,   12,   12, 0x0a,
    1876, 1007,   12,   12, 0x0a,
    1903, 1041,   12,   12, 0x0a,
    1926, 1067,   12,   12, 0x0a,
    1953, 1101,   12,   12, 0x0a,
    1982, 1139,   12,   12, 0x0a,
    2011, 1177,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_connector_t[] = {
    "connector_t\0\0get_brightness_h(double)\0"
    "get_hue_h(double)\0get_contrast_h(double)\0"
    "get_gain_h(double)\0get_exposure_h(double)\0"
    "get_saturation_h(double)\0"
    "get_brightness_s(double)\0"
    "get_contrast_s(double)\0image\0"
    "send_image(QImage)\0stop_obj_track_s()\0"
    "export_settings_s()\0import_settings_s()\0"
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
    "set_max_size_sig(int)\0get_min_h_sig(int)\0"
    "get_max_h_sig(int)\0get_min_s_sig(int)\0"
    "get_max_s_sig(int)\0get_min_v_sig(int)\0"
    "get_max_v_sig(int)\0get_min_size_sig(int)\0"
    "get_max_size_sig(int)\0sbrightness\0"
    "set_brightness_software_sig(double)\0"
    "scontrast\0set_contrast_software_sig(double)\0"
    "brightness_h\0brightness_h_sig(double)\0"
    "hue_h\0hue_h_sig(double)\0contrast_h\0"
    "contrast_h_sig(double)\0gain_h\0"
    "gain_h_sig(double)\0exposure_h\0"
    "exposure_h_sig(double)\0saturation_h\0"
    "saturation_h_sig(double)\0brightness_s\0"
    "brightness_s_sig(double)\0contrast_s\0"
    "contrast_s_sig(double)\0export_settings_slt()\0"
    "import_settings_slt()\0get_image(QImage)\0"
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
    "get_min_h(int)\0get_max_h(int)\0"
    "get_min_s(int)\0get_max_s(int)\0"
    "get_min_v(int)\0get_max_v(int)\0"
    "get_min_size(int)\0get_max_size(int)\0"
    "get_brightness_h_slt(double)\0"
    "get_hue_h_slt(double)\0get_contrast_h_slt(double)\0"
    "get_gain_h_slt(double)\0"
    "get_exposure_h_slt(double)\0"
    "get_saturation_h_slt(double)\0"
    "get_brightness_s_slt(double)\0"
    "get_contrast_s_slt(double)\0"
};

void connector_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        connector_t *_t = static_cast<connector_t *>(_o);
        switch (_id) {
        case 0: _t->get_brightness_h((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->get_hue_h((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->get_contrast_h((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->get_gain_h((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->get_exposure_h((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->get_saturation_h((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->get_brightness_s((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->get_contrast_s((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->send_image((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 9: _t->stop_obj_track_s(); break;
        case 10: _t->export_settings_s(); break;
        case 11: _t->import_settings_s(); break;
        case 12: _t->set_brightness_hardware_sig((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->set_contrast_hardware_sig((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->set_hue_hardware_sig((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->set_saturation_hardware_sig((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->set_gain_hardware_sig((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->set_exposure_hardware_sig((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->set_min_h_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->set_max_h_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->set_min_s_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->set_max_s_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->set_min_v_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->set_max_v_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->set_min_size_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->set_max_size_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->get_min_h_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->get_max_h_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->get_min_s_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->get_max_s_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->get_min_v_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->get_max_v_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->get_min_size_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->get_max_size_sig((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 34: _t->set_brightness_software_sig((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 35: _t->set_contrast_software_sig((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 36: _t->brightness_h_sig((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 37: _t->hue_h_sig((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 38: _t->contrast_h_sig((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 39: _t->gain_h_sig((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 40: _t->exposure_h_sig((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 41: _t->saturation_h_sig((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 42: _t->brightness_s_sig((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 43: _t->contrast_s_sig((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 44: _t->export_settings_slt(); break;
        case 45: _t->import_settings_slt(); break;
        case 46: _t->get_image((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 47: _t->set_brightness_hardware_slt((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 48: _t->set_contrast_hardware_slt((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 49: _t->set_saturation_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 50: _t->set_hue_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 51: _t->set_gain_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 52: _t->set_exposure_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 53: _t->set_brightness_software((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 54: _t->set_contrast_software((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 55: _t->set_min_h((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 56: _t->set_max_h((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 57: _t->set_min_s((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 58: _t->set_max_s((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 59: _t->set_min_v((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 60: _t->set_max_v((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 61: _t->set_min_size((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 62: _t->set_max_size((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 63: _t->get_min_h((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 64: _t->get_max_h((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 65: _t->get_min_s((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 66: _t->get_max_s((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 67: _t->get_min_v((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 68: _t->get_max_v((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 69: _t->get_min_size((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 70: _t->get_max_size((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 71: _t->get_brightness_h_slt((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 72: _t->get_hue_h_slt((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 73: _t->get_contrast_h_slt((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 74: _t->get_gain_h_slt((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 75: _t->get_exposure_h_slt((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 76: _t->get_saturation_h_slt((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 77: _t->get_brightness_s_slt((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 78: _t->get_contrast_s_slt((*reinterpret_cast< double(*)>(_a[1]))); break;
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
        if (_id < 79)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 79;
    }
    return _id;
}

// SIGNAL 0
void connector_t::get_brightness_h(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void connector_t::get_hue_h(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void connector_t::get_contrast_h(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void connector_t::get_gain_h(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void connector_t::get_exposure_h(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void connector_t::get_saturation_h(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void connector_t::get_brightness_s(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void connector_t::get_contrast_s(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void connector_t::send_image(QImage _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void connector_t::stop_obj_track_s()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void connector_t::export_settings_s()
{
    QMetaObject::activate(this, &staticMetaObject, 10, 0);
}

// SIGNAL 11
void connector_t::import_settings_s()
{
    QMetaObject::activate(this, &staticMetaObject, 11, 0);
}

// SIGNAL 12
void connector_t::set_brightness_hardware_sig(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void connector_t::set_contrast_hardware_sig(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void connector_t::set_hue_hardware_sig(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void connector_t::set_saturation_hardware_sig(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void connector_t::set_gain_hardware_sig(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void connector_t::set_exposure_hardware_sig(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void connector_t::set_min_h_sig(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void connector_t::set_max_h_sig(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void connector_t::set_min_s_sig(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void connector_t::set_max_s_sig(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void connector_t::set_min_v_sig(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void connector_t::set_max_v_sig(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void connector_t::set_min_size_sig(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void connector_t::set_max_size_sig(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void connector_t::get_min_h_sig(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void connector_t::get_max_h_sig(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void connector_t::get_min_s_sig(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void connector_t::get_max_s_sig(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void connector_t::get_min_v_sig(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void connector_t::get_max_v_sig(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void connector_t::get_min_size_sig(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void connector_t::get_max_size_sig(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void connector_t::set_brightness_software_sig(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void connector_t::set_contrast_software_sig(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void connector_t::brightness_h_sig(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void connector_t::hue_h_sig(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void connector_t::contrast_h_sig(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void connector_t::gain_h_sig(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void connector_t::exposure_h_sig(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void connector_t::saturation_h_sig(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}

// SIGNAL 42
void connector_t::brightness_s_sig(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 42, _a);
}

// SIGNAL 43
void connector_t::contrast_s_sig(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 43, _a);
}
QT_END_MOC_NAMESPACE
