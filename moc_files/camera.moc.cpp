/****************************************************************************
** Meta object code from reading C++ file 'camera.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../camera/camera.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camera.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_camera_t[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x06,
      35,    9,    9,    9, 0x06,
      53,    9,    9,    9, 0x06,
      76,    9,    9,    9, 0x06,
      95,    9,    9,    9, 0x06,
     118,    9,    9,    9, 0x06,
     143,    9,    9,    9, 0x06,
     168,    9,    9,    9, 0x06,

 // slots: signature, parameters, type, tag, flags
     191,    9,    9,    9, 0x0a,
     213,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_camera_t[] = {
    "camera_t\0\0get_brightness_h(double)\0"
    "get_hue_h(double)\0get_contrast_h(double)\0"
    "get_gain_h(double)\0get_exposure_h(double)\0"
    "get_saturation_h(double)\0"
    "get_brightness_s(double)\0"
    "get_contrast_s(double)\0export_settings_slt()\0"
    "import_settings_slt()\0"
};

void camera_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        camera_t *_t = static_cast<camera_t *>(_o);
        switch (_id) {
        case 0: _t->get_brightness_h((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->get_hue_h((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->get_contrast_h((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->get_gain_h((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->get_exposure_h((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->get_saturation_h((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->get_brightness_s((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->get_contrast_s((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->export_settings_slt(); break;
        case 9: _t->import_settings_slt(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData camera_t::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject camera_t::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_camera_t,
      qt_meta_data_camera_t, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &camera_t::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *camera_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *camera_t::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_camera_t))
        return static_cast<void*>(const_cast< camera_t*>(this));
    return QObject::qt_metacast(_clname);
}

int camera_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void camera_t::get_brightness_h(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void camera_t::get_hue_h(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void camera_t::get_contrast_h(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void camera_t::get_gain_h(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void camera_t::get_exposure_h(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void camera_t::get_saturation_h(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void camera_t::get_brightness_s(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void camera_t::get_contrast_s(double _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
