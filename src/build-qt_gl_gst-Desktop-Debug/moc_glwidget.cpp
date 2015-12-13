/****************************************************************************
** Meta object code from reading C++ file 'glwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qt_gl_gst/glwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GLWidget_t {
    QByteArrayData data[26];
    char stringdata[364];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_GLWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_GLWidget_t qt_meta_stringdata_GLWidget = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 14),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 21),
QT_MOC_LITERAL(4, 47, 8),
QT_MOC_LITERAL(5, 56, 18),
QT_MOC_LITERAL(6, 75, 16),
QT_MOC_LITERAL(7, 92, 5),
QT_MOC_LITERAL(8, 98, 16),
QT_MOC_LITERAL(9, 115, 16),
QT_MOC_LITERAL(10, 132, 8),
QT_MOC_LITERAL(11, 141, 5),
QT_MOC_LITERAL(12, 147, 16),
QT_MOC_LITERAL(13, 164, 18),
QT_MOC_LITERAL(14, 183, 20),
QT_MOC_LITERAL(15, 204, 17),
QT_MOC_LITERAL(16, 222, 13),
QT_MOC_LITERAL(17, 236, 13),
QT_MOC_LITERAL(18, 250, 13),
QT_MOC_LITERAL(19, 264, 16),
QT_MOC_LITERAL(20, 281, 11),
QT_MOC_LITERAL(21, 293, 19),
QT_MOC_LITERAL(22, 313, 19),
QT_MOC_LITERAL(23, 333, 12),
QT_MOC_LITERAL(24, 346, 8),
QT_MOC_LITERAL(25, 355, 7)
    },
    "GLWidget\0closeRequested\0\0stackVidsStateChanged\0"
    "newState\0rotateStateChanged\0"
    "xRotationChanged\0angle\0yRotationChanged\0"
    "zRotationChanged\0newFrame\0vidIx\0"
    "pipelineFinished\0cycleVidShaderSlot\0"
    "cycleModelShaderSlot\0showYUVWindowSlot\0"
    "loadVideoSlot\0loadModelSlot\0loadAlphaSlot\0"
    "rotateToggleSlot\0toggleState\0"
    "stackVidsToggleSlot\0cycleBackgroundSlot\0"
    "resetPosSlot\0exitSlot\0animate\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GLWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      20,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  114,    2, 0x06,
       3,    1,  115,    2, 0x06,
       5,    1,  118,    2, 0x06,
       6,    1,  121,    2, 0x06,
       8,    1,  124,    2, 0x06,
       9,    1,  127,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
      10,    1,  130,    2, 0x0a,
      12,    1,  133,    2, 0x0a,
      13,    0,  136,    2, 0x0a,
      14,    0,  137,    2, 0x0a,
      15,    0,  138,    2, 0x0a,
      16,    0,  139,    2, 0x0a,
      17,    0,  140,    2, 0x0a,
      18,    0,  141,    2, 0x0a,
      19,    1,  142,    2, 0x0a,
      21,    1,  145,    2, 0x0a,
      22,    0,  148,    2, 0x0a,
      23,    0,  149,    2, 0x0a,
      24,    0,  150,    2, 0x0a,
      25,    0,  151,    2, 0x0a,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Int,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GLWidget *_t = static_cast<GLWidget *>(_o);
        switch (_id) {
        case 0: _t->closeRequested(); break;
        case 1: _t->stackVidsStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->rotateStateChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->xRotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->yRotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->zRotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->newFrame((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->pipelineFinished((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->cycleVidShaderSlot(); break;
        case 9: _t->cycleModelShaderSlot(); break;
        case 10: _t->showYUVWindowSlot(); break;
        case 11: _t->loadVideoSlot(); break;
        case 12: _t->loadModelSlot(); break;
        case 13: _t->loadAlphaSlot(); break;
        case 14: _t->rotateToggleSlot((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->stackVidsToggleSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->cycleBackgroundSlot(); break;
        case 17: _t->resetPosSlot(); break;
        case 18: _t->exitSlot(); break;
        case 19: _t->animate(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GLWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLWidget::closeRequested)) {
                *result = 0;
            }
        }
        {
            typedef void (GLWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLWidget::stackVidsStateChanged)) {
                *result = 1;
            }
        }
        {
            typedef void (GLWidget::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLWidget::rotateStateChanged)) {
                *result = 2;
            }
        }
        {
            typedef void (GLWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLWidget::xRotationChanged)) {
                *result = 3;
            }
        }
        {
            typedef void (GLWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLWidget::yRotationChanged)) {
                *result = 4;
            }
        }
        {
            typedef void (GLWidget::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GLWidget::zRotationChanged)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject GLWidget::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_GLWidget.data,
      qt_meta_data_GLWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *GLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GLWidget.stringdata))
        return static_cast<void*>(const_cast< GLWidget*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int GLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 20)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 20)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 20;
    }
    return _id;
}

// SIGNAL 0
void GLWidget::closeRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void GLWidget::stackVidsStateChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GLWidget::rotateStateChanged(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GLWidget::xRotationChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GLWidget::yRotationChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GLWidget::zRotationChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
