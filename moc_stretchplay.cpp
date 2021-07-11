/****************************************************************************
** Meta object code from reading C++ file 'stretchplay.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "stretchplay.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stretchplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StretchPlay_t {
    QByteArrayData data[12];
    char stringdata0[118];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StretchPlay_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StretchPlay_t qt_meta_stringdata_StretchPlay = {
    {
QT_MOC_LITERAL(0, 0, 11), // "StretchPlay"
QT_MOC_LITERAL(1, 12, 14), // "getMusicPlayer"
QT_MOC_LITERAL(2, 27, 12), // "MusicPlayer*"
QT_MOC_LITERAL(3, 40, 0), // ""
QT_MOC_LITERAL(4, 41, 8), // "addMusic"
QT_MOC_LITERAL(5, 50, 8), // "playSong"
QT_MOC_LITERAL(6, 59, 8), // "nextSong"
QT_MOC_LITERAL(7, 68, 12), // "previousSong"
QT_MOC_LITERAL(8, 81, 10), // "slideSpeed"
QT_MOC_LITERAL(9, 92, 3), // "val"
QT_MOC_LITERAL(10, 96, 8), // "autoPlay"
QT_MOC_LITERAL(11, 105, 12) // "shuffleSongs"

    },
    "StretchPlay\0getMusicPlayer\0MusicPlayer*\0"
    "\0addMusic\0playSong\0nextSong\0previousSong\0"
    "slideSpeed\0val\0autoPlay\0shuffleSongs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StretchPlay[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    3, 0x0a /* Public */,
       4,    0,   55,    3, 0x0a /* Public */,
       5,    0,   56,    3, 0x0a /* Public */,
       6,    0,   57,    3, 0x0a /* Public */,
       7,    0,   58,    3, 0x0a /* Public */,
       8,    1,   59,    3, 0x0a /* Public */,
      10,    0,   62,    3, 0x0a /* Public */,
      11,    0,   63,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void StretchPlay::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StretchPlay *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { MusicPlayer* _r = _t->getMusicPlayer();
            if (_a[0]) *reinterpret_cast< MusicPlayer**>(_a[0]) = std::move(_r); }  break;
        case 1: _t->addMusic(); break;
        case 2: _t->playSong(); break;
        case 3: _t->nextSong(); break;
        case 4: _t->previousSong(); break;
        case 5: _t->slideSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->autoPlay(); break;
        case 7: _t->shuffleSongs(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject StretchPlay::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_StretchPlay.data,
    qt_meta_data_StretchPlay,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StretchPlay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StretchPlay::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StretchPlay.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int StretchPlay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
