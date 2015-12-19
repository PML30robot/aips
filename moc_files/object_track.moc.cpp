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
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      22,   16,   15,   15, 0x06,

 // slots: signature, parameters, type, tag, flags
      41,   15,   15,   15, 0x0a,
      65,   53,   15,   15, 0x0a,
     107,   97,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_object_track_t[] = {
    "object_track_t\0\0image\0send_image(QImage)\0"
    "stop_loop()\0hbrightness\0"
    "set_brightness_hardware(double)\0"
    "hcontrast\0set_contrast_hardware(double)\0"
};

void object_track_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        object_track_t *_t = static_cast<object_track_t *>(_o);
        switch (_id) {
        case 0: _t->send_image((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->stop_loop(); break;
        case 2: _t->set_brightness_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->set_contrast_hardware((*reinterpret_cast< double(*)>(_a[1]))); break;
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
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void object_track_t::send_image(QImage _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
