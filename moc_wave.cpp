/****************************************************************************
** Meta object code from reading C++ file 'wave.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "wave.h"
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
    QByteArrayData data[19];
    char stringdata0[169];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_wave_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_wave_t qt_meta_stringdata_wave = {
    {
QT_MOC_LITERAL(0, 0, 4), // "wave"
QT_MOC_LITERAL(1, 5, 8), // "nextPage"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 12), // "previousPage"
QT_MOC_LITERAL(4, 28, 4), // "tick"
QT_MOC_LITERAL(5, 33, 8), // "addMusic"
QT_MOC_LITERAL(6, 42, 8), // "playSong"
QT_MOC_LITERAL(7, 51, 8), // "nextSong"
QT_MOC_LITERAL(8, 60, 12), // "previousSong"
QT_MOC_LITERAL(9, 73, 10), // "slideSpeed"
QT_MOC_LITERAL(10, 84, 3), // "val"
QT_MOC_LITERAL(11, 88, 8), // "autoPlay"
QT_MOC_LITERAL(12, 97, 12), // "shuffleSongs"
QT_MOC_LITERAL(13, 110, 9), // "song_zero"
QT_MOC_LITERAL(14, 120, 8), // "song_one"
QT_MOC_LITERAL(15, 129, 8), // "song_two"
QT_MOC_LITERAL(16, 138, 10), // "song_three"
QT_MOC_LITERAL(17, 149, 9), // "song_four"
QT_MOC_LITERAL(18, 159, 9) // "song_five"

    },
    "wave\0nextPage\0\0previousPage\0tick\0"
    "addMusic\0playSong\0nextSong\0previousSong\0"
    "slideSpeed\0val\0autoPlay\0shuffleSongs\0"
    "song_zero\0song_one\0song_two\0song_three\0"
    "song_four\0song_five"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_wave[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x0a /* Public */,
       3,    0,   95,    2, 0x0a /* Public */,
       4,    0,   96,    2, 0x0a /* Public */,
       5,    0,   97,    2, 0x0a /* Public */,
       6,    0,   98,    2, 0x0a /* Public */,
       7,    0,   99,    2, 0x0a /* Public */,
       8,    0,  100,    2, 0x0a /* Public */,
       9,    1,  101,    2, 0x0a /* Public */,
      11,    0,  104,    2, 0x0a /* Public */,
      12,    0,  105,    2, 0x0a /* Public */,
      13,    0,  106,    2, 0x0a /* Public */,
      14,    0,  107,    2, 0x0a /* Public */,
      15,    0,  108,    2, 0x0a /* Public */,
      16,    0,  109,    2, 0x0a /* Public */,
      17,    0,  110,    2, 0x0a /* Public */,
      18,    0,  111,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
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
        case 0: _t->nextPage(); break;
        case 1: _t->previousPage(); break;
        case 2: _t->tick(); break;
        case 3: _t->addMusic(); break;
        case 4: _t->playSong(); break;
        case 5: _t->nextSong(); break;
        case 6: _t->previousSong(); break;
        case 7: _t->slideSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->autoPlay(); break;
        case 9: _t->shuffleSongs(); break;
        case 10: _t->song_zero(); break;
        case 11: _t->song_one(); break;
        case 12: _t->song_two(); break;
        case 13: _t->song_three(); break;
        case 14: _t->song_four(); break;
        case 15: _t->song_five(); break;
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
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
