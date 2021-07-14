/****************************************************************************
** Meta object code from reading C++ file 'wave.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/wave.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wave.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_wave_t {
    QByteArrayData data[22];
    char stringdata0[196];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_wave_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_wave_t qt_meta_stringdata_wave = {
    {
QT_MOC_LITERAL(0, 0, 4), // "wave"
QT_MOC_LITERAL(1, 5, 9), // "slideSong"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 4), // "quit"
QT_MOC_LITERAL(4, 21, 8), // "nextPage"
QT_MOC_LITERAL(5, 30, 12), // "previousPage"
QT_MOC_LITERAL(6, 43, 4), // "tick"
QT_MOC_LITERAL(7, 48, 8), // "addMusic"
QT_MOC_LITERAL(8, 57, 8), // "playSong"
QT_MOC_LITERAL(9, 66, 8), // "nextSong"
QT_MOC_LITERAL(10, 75, 12), // "previousSong"
QT_MOC_LITERAL(11, 88, 10), // "slideSpeed"
QT_MOC_LITERAL(12, 99, 3), // "val"
QT_MOC_LITERAL(13, 103, 11), // "slideVolume"
QT_MOC_LITERAL(14, 115, 8), // "autoPlay"
QT_MOC_LITERAL(15, 124, 12), // "shuffleSongs"
QT_MOC_LITERAL(16, 137, 9), // "song_zero"
QT_MOC_LITERAL(17, 147, 8), // "song_one"
QT_MOC_LITERAL(18, 156, 8), // "song_two"
QT_MOC_LITERAL(19, 165, 10), // "song_three"
QT_MOC_LITERAL(20, 176, 9), // "song_four"
QT_MOC_LITERAL(21, 186, 9) // "song_five"

    },
    "wave\0slideSong\0\0quit\0nextPage\0"
    "previousPage\0tick\0addMusic\0playSong\0"
    "nextSong\0previousSong\0slideSpeed\0val\0"
    "slideVolume\0autoPlay\0shuffleSongs\0"
    "song_zero\0song_one\0song_two\0song_three\0"
    "song_four\0song_five"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_wave[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x0a /* Public */,
       3,    0,  110,    2, 0x0a /* Public */,
       4,    0,  111,    2, 0x0a /* Public */,
       5,    0,  112,    2, 0x0a /* Public */,
       6,    0,  113,    2, 0x0a /* Public */,
       7,    0,  114,    2, 0x0a /* Public */,
       8,    0,  115,    2, 0x0a /* Public */,
       9,    0,  116,    2, 0x0a /* Public */,
      10,    0,  117,    2, 0x0a /* Public */,
      11,    1,  118,    2, 0x0a /* Public */,
      13,    1,  121,    2, 0x0a /* Public */,
      14,    0,  124,    2, 0x0a /* Public */,
      15,    0,  125,    2, 0x0a /* Public */,
      16,    0,  126,    2, 0x0a /* Public */,
      17,    0,  127,    2, 0x0a /* Public */,
      18,    0,  128,    2, 0x0a /* Public */,
      19,    0,  129,    2, 0x0a /* Public */,
      20,    0,  130,    2, 0x0a /* Public */,
      21,    0,  131,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void wave::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<wave *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slideSong(); break;
        case 1: _t->quit(); break;
        case 2: _t->nextPage(); break;
        case 3: _t->previousPage(); break;
        case 4: _t->tick(); break;
        case 5: _t->addMusic(); break;
        case 6: _t->playSong(); break;
        case 7: _t->nextSong(); break;
        case 8: _t->previousSong(); break;
        case 9: _t->slideSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->slideVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->autoPlay(); break;
        case 12: _t->shuffleSongs(); break;
        case 13: _t->song_zero(); break;
        case 14: _t->song_one(); break;
        case 15: _t->song_two(); break;
        case 16: _t->song_three(); break;
        case 17: _t->song_four(); break;
        case 18: _t->song_five(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject wave::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_wave.data,
    qt_meta_data_wave,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *wave::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *wave::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_wave.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int wave::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
