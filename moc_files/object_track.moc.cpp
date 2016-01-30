/****************************************************************************
** Meta object code from reading C++ file 'object_track.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../object_track/object_track.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'object_track.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_object_track_t[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   16,   15,   15, 0x06,
      47,   41,   15,   15, 0x06,
      68,   62,   15,   15, 0x06,
      89,   83,   15,   15, 0x06,
     110,  104,   15,   15, 0x06,
     131,  125,   15,   15, 0x06,
     152,  146,   15,   15, 0x06,
     176,  167,   15,   15, 0x06,
     203,  194,   15,   15, 0x06,

 // slots: signature, parameters, type, tag, flags
     221,   15,   15,   15, 0x0a,
     243,   15,   15,   15, 0x0a,
     265,   15,   15,   15, 0x0a,
     289,  277,   15,   15, 0x0a,
     331,  321,   15,   15, 0x0a,
     373,  361,   15,   15, 0x0a,
     410,  405,   15,   15, 0x0a,
     441,  435,   15,   15, 0x0a,
     477,  467,   15,   15, 0x0a,
     519,  507,   15,   15, 0x0a,
     561,  551,   15,   15, 0x0a,
     591,   41,   15,   15, 0x0a,
     606,   62,   15,   15, 0x0a,
     621,   83,   15,   15, 0x0a,
     636,  104,   15,   15, 0x0a,
     651,  125,   15,   15, 0x0a,
     666,  146,   15,   15, 0x0a,
     681,  167,   15,   15, 0x0a,
     699,  194,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_object_track_t[] = {
    "object_track_t\0\0image\0send_image(QImage)\0"
    "min_h\0get_min_h(int)\0max_h\0get_max_h(int)\0"
    "min_s\0get_min_s(int)\0max_s\0get_max_s(int)\0"
    "min_v\0get_min_v(int)\0max_v\0get_max_v(int)\0"
    "min_size\0get_min_size(int)\0max_size\0"
    "get_max_size(int)\0export_settings_slt()\0"
    "import_settings_slt()\0stop_loop()\0"
    "hbrightness\0set_brightness_hardware(double)\0"
    "hcontrast\0set_contrast_hardware(double)\0"
    "hsaturation\0set_saturation_hardware(double)\0"
    "hhue\0set_hue_hardware(double)\0hgain\0"
    "set_gain_hardware(double)\0hexposure\0"
    "set_exposure_hardware(double)\0sbrightness\0"
    "set_brightness_software(double)\0"
    "scontrast\0set_contrast_software(double)\0"
    "set_min_h(int)\0set_max_h(int)\0"
    "set_min_s(int)\0set_max_s(int)\0"
    "set_min_v(int)\0set_max_v(int)\0"
    "set_min_size(int)\0set_max_size(int)\0"
};

void object_track_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        object_track_t *_t = static_cast<object_track_t *>(_o);
        switch (_id) {
        case 0: _t->send_image((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->get_min_h((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->get_max_h((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->get_min_s((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->get_max_s((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->get_min_v((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->get_max_v((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->get_min_size((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->get_max_size((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->export_settings_slt(); break;
        case 10: _t->import_settings_slt(); break;
        case 11: _t->stop_loop(); break;
        case 12: _t->set_brightness_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 13: _t->set_contrast_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 14: _t->set_saturation_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 15: _t->set_hue_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->set_gain_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->set_exposure_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->set_brightness_software((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 19: _t->set_contrast_software((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 20: _t->set_min_h((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->set_max_h((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->set_min_s((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: _t->set_max_s((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->set_min_v((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->set_max_v((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->set_min_size((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->set_max_size((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData object_track_t::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject object_track_t::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_object_track_t,
      qt_meta_data_object_track_t, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &object_track_t::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *object_track_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *object_track_t::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_object_track_t))
        return static_cast<void*>(const_cast< object_track_t*>(this));
    return QObject::qt_metacast(_clname);
}

int object_track_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    }
    return _id;
}

// SIGNAL 0
void object_track_t::send_image(QImage _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void object_track_t::get_min_h(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void object_track_t::get_max_h(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void object_track_t::get_min_s(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void object_track_t::get_max_s(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void object_track_t::get_min_v(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void object_track_t::get_max_v(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void object_track_t::get_min_size(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void object_track_t::get_max_size(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
