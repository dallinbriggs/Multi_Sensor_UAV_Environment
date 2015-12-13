/****************************************************************************
** Meta object code from reading C++ file 'gstpipeline.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qt_gl_gst/gstpipeline.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gstpipeline.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_GstIncomingBufThread_t {
    QByteArrayData data[1];
    char stringdata[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_GstIncomingBufThread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_GstIncomingBufThread_t qt_meta_stringdata_GstIncomingBufThread = {
    {
QT_MOC_LITERAL(0, 0, 20)
    },
    "GstIncomingBufThread\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GstIncomingBufThread[] = {

 // content:
       7,       // revision
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

void GstIncomingBufThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject GstIncomingBufThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_GstIncomingBufThread.data,
      qt_meta_data_GstIncomingBufThread,  qt_static_metacall, 0, 0}
};


const QMetaObject *GstIncomingBufThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GstIncomingBufThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GstIncomingBufThread.stringdata))
        return static_cast<void*>(const_cast< GstIncomingBufThread*>(this));
    return QThread::qt_metacast(_clname);
}

int GstIncomingBufThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_GstOutgoingBufThread_t {
    QByteArrayData data[3];
    char stringdata[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_GstOutgoingBufThread_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_GstOutgoingBufThread_t qt_meta_stringdata_GstOutgoingBufThread = {
    {
QT_MOC_LITERAL(0, 0, 20),
QT_MOC_LITERAL(1, 21, 4),
QT_MOC_LITERAL(2, 26, 0)
    },
    "GstOutgoingBufThread\0quit\0\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GstOutgoingBufThread[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void GstOutgoingBufThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GstOutgoingBufThread *_t = static_cast<GstOutgoingBufThread *>(_o);
        switch (_id) {
        case 0: _t->quit(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject GstOutgoingBufThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_GstOutgoingBufThread.data,
      qt_meta_data_GstOutgoingBufThread,  qt_static_metacall, 0, 0}
};


const QMetaObject *GstOutgoingBufThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GstOutgoingBufThread::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GstOutgoingBufThread.stringdata))
        return static_cast<void*>(const_cast< GstOutgoingBufThread*>(this));
    return QThread::qt_metacast(_clname);
}

int GstOutgoingBufThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_GStreamerPipeline_t {
    QByteArrayData data[5];
    char stringdata[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_GStreamerPipeline_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_GStreamerPipeline_t qt_meta_stringdata_GStreamerPipeline = {
    {
QT_MOC_LITERAL(0, 0, 17),
QT_MOC_LITERAL(1, 18, 13),
QT_MOC_LITERAL(2, 32, 0),
QT_MOC_LITERAL(3, 33, 4),
QT_MOC_LITERAL(4, 38, 7)
    },
    "GStreamerPipeline\0stopRequested\0\0Stop\0"
    "cleanUp\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GStreamerPipeline[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x0a,
       4,    0,   31,    2, 0x08,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GStreamerPipeline::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GStreamerPipeline *_t = static_cast<GStreamerPipeline *>(_o);
        switch (_id) {
        case 0: _t->stopRequested(); break;
        case 1: _t->Stop(); break;
        case 2: _t->cleanUp(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GStreamerPipeline::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GStreamerPipeline::stopRequested)) {
                *result = 0;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject GStreamerPipeline::staticMetaObject = {
    { &Pipeline::staticMetaObject, qt_meta_stringdata_GStreamerPipeline.data,
      qt_meta_data_GStreamerPipeline,  qt_static_metacall, 0, 0}
};


const QMetaObject *GStreamerPipeline::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GStreamerPipeline::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GStreamerPipeline.stringdata))
        return static_cast<void*>(const_cast< GStreamerPipeline*>(this));
    return Pipeline::qt_metacast(_clname);
}

int GStreamerPipeline::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Pipeline::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void GStreamerPipeline::stopRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
