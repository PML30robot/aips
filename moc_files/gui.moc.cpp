/****************************************************************************
** Meta object code from reading C++ file 'gui.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gui/gui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_gui_t[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       7,    6,    6,    6, 0x08,
      25,    6,    6,    6, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_gui_t[] = {
    "gui_t\0\0call_obj_params()\0"
    "call_camera_settings()\0"
};

void gui_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        gui_t *_t = static_cast<gui_t *>(_o);
        switch (_id) {
        case 0: _t->call_obj_params(); break;
        case 1: _t->call_camera_settings(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData gui_t::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject gui_t::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_gui_t,
      qt_meta_data_gui_t, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &gui_t::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *gui_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *gui_t::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_gui_t))
        return static_cast<void*>(const_cast< gui_t*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int gui_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
static const uint qt_meta_data_object_params_t[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_object_params_t[] = {
    "object_params_t\0"
};

void object_params_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData object_params_t::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject object_params_t::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_object_params_t,
      qt_meta_data_object_params_t, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &object_params_t::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *object_params_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *object_params_t::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_object_params_t))
        return static_cast<void*>(const_cast< object_params_t*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int object_params_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_camera_settings_t[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_camera_settings_t[] = {
    "camera_settings_t\0"
};

void camera_settings_t::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData camera_settings_t::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject camera_settings_t::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_camera_settings_t,
      qt_meta_data_camera_settings_t, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &camera_settings_t::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *camera_settings_t::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *camera_settings_t::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_camera_settings_t))
        return static_cast<void*>(const_cast< camera_settings_t*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int camera_settings_t::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE