/****************************************************************************
** Meta object code from reading C++ file 'wave.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../wave.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wave.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_wave_t {
    QByteArrayData data[25];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_wave_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_wave_t qt_meta_stringdata_wave = {
    {
QT_MOC_LITERAL(0, 0, 4), // "wave"
QT_MOC_LITERAL(1, 5, 16), // "displayPlaylists"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9), // "slideSong"
QT_MOC_LITERAL(4, 33, 4), // "quit"
QT_MOC_LITERAL(5, 38, 8), // "nextPage"
QT_MOC_LITERAL(6, 47, 12), // "previousPage"
QT_MOC_LITERAL(7, 60, 8), // "addMusic"
QT_MOC_LITERAL(8, 69, 8), // "playSong"
QT_MOC_LITERAL(9, 78, 8), // "nextSong"
QT_MOC_LITERAL(10, 87, 12), // "previousSong"
QT_MOC_LITERAL(11, 100, 10), // "slideSpeed"
QT_MOC_LITERAL(12, 111, 3), // "val"
QT_MOC_LITERAL(13, 115, 11), // "slideVolume"
QT_MOC_LITERAL(14, 127, 8), // "autoPlay"
QT_MOC_LITERAL(15, 136, 12), // "shuffleSongs"
QT_MOC_LITERAL(16, 149, 15), // "recentPlaylists"
QT_MOC_LITERAL(17, 165, 12), // "loadPlaylist"
QT_MOC_LITERAL(18, 178, 5), // "index"
QT_MOC_LITERAL(19, 184, 14), // "selection_zero"
QT_MOC_LITERAL(20, 199, 13), // "selection_one"
QT_MOC_LITERAL(21, 213, 13), // "selection_two"
QT_MOC_LITERAL(22, 227, 15), // "selection_three"
QT_MOC_LITERAL(23, 243, 14), // "selection_four"
QT_MOC_LITERAL(24, 258, 14) // "selection_five"

    },
    "wave\0displayPlaylists\0\0slideSong\0quit\0"
    "nextPage\0previousPage\0addMusic\0playSong\0"
    "nextSong\0previousSong\0slideSpeed\0val\0"
    "slideVolume\0autoPlay\0shuffleSongs\0"
    "recentPlaylists\0loadPlaylist\0index\0"
    "selection_zero\0selection_one\0selection_two\0"
    "selection_three\0selection_four\0"
    "selection_five"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_wave[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x0a /* Public */,
       3,    0,  120,    2, 0x0a /* Public */,
       4,    0,  121,    2, 0x0a /* Public */,
       5,    0,  122,    2, 0x0a /* Public */,
       6,    0,  123,    2, 0x0a /* Public */,
       7,    0,  124,    2, 0x0a /* Public */,
       8,    0,  125,    2, 0x0a /* Public */,
       9,    0,  126,    2, 0x0a /* Public */,
      10,    0,  127,    2, 0x0a /* Public */,
      11,    1,  128,    2, 0x0a /* Public */,
      13,    1,  131,    2, 0x0a /* Public */,
      14,    0,  134,    2, 0x0a /* Public */,
      15,    0,  135,    2, 0x0a /* Public */,
      16,    0,  136,    2, 0x0a /* Public */,
      17,    1,  137,    2, 0x0a /* Public */,
      19,    0,  140,    2, 0x0a /* Public */,
      20,    0,  141,    2, 0x0a /* Public */,
      21,    0,  142,    2, 0x0a /* Public */,
      22,    0,  143,    2, 0x0a /* Public */,
      23,    0,  144,    2, 0x0a /* Public */,
      24,    0,  145,    2, 0x0a /* Public */,

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
    QMetaType::Void, QMetaType::Int,   18,
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
        case 0: _t->displayPlaylists(); break;
        case 1: _t->slideSong(); break;
        case 2: _t->quit(); break;
        case 3: _t->nextPage(); break;
        case 4: _t->previousPage(); break;
        case 5: _t->addMusic(); break;
        case 6: _t->playSong(); break;
        case 7: _t->nextSong(); break;
        case 8: _t->previousSong(); break;
        case 9: _t->slideSpeed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->slideVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->autoPlay(); break;
        case 12: _t->shuffleSongs(); break;
        case 13: _t->recentPlaylists(); break;
        case 14: _t->loadPlaylist((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->selection_zero(); break;
        case 16: _t->selection_one(); break;
        case 17: _t->selection_two(); break;
        case 18: _t->selection_three(); break;
        case 19: _t->selection_four(); break;
        case 20: _t->selection_five(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject wave::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
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
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
