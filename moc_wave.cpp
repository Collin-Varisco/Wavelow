/****************************************************************************
** Meta object code from reading C++ file 'wave.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "src/wave.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wave.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_wave_t {
    const uint offsetsAndSize[50];
    char stringdata0[273];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_wave_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_wave_t qt_meta_stringdata_wave = {
    {
QT_MOC_LITERAL(0, 4), // "wave"
QT_MOC_LITERAL(5, 16), // "displayPlaylists"
QT_MOC_LITERAL(22, 0), // ""
QT_MOC_LITERAL(23, 9), // "slideSong"
QT_MOC_LITERAL(33, 4), // "quit"
QT_MOC_LITERAL(38, 8), // "nextPage"
QT_MOC_LITERAL(47, 12), // "previousPage"
QT_MOC_LITERAL(60, 8), // "addMusic"
QT_MOC_LITERAL(69, 8), // "playSong"
QT_MOC_LITERAL(78, 8), // "nextSong"
QT_MOC_LITERAL(87, 12), // "previousSong"
QT_MOC_LITERAL(100, 10), // "slideSpeed"
QT_MOC_LITERAL(111, 3), // "val"
QT_MOC_LITERAL(115, 11), // "slideVolume"
QT_MOC_LITERAL(127, 8), // "autoPlay"
QT_MOC_LITERAL(136, 12), // "shuffleSongs"
QT_MOC_LITERAL(149, 15), // "recentPlaylists"
QT_MOC_LITERAL(165, 12), // "loadPlaylist"
QT_MOC_LITERAL(178, 5), // "index"
QT_MOC_LITERAL(184, 14), // "selection_zero"
QT_MOC_LITERAL(199, 13), // "selection_one"
QT_MOC_LITERAL(213, 13), // "selection_two"
QT_MOC_LITERAL(227, 15), // "selection_three"
QT_MOC_LITERAL(243, 14), // "selection_four"
QT_MOC_LITERAL(258, 14) // "selection_five"

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
       9,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  140,    2, 0x0a,    0 /* Public */,
       3,    0,  141,    2, 0x0a,    1 /* Public */,
       4,    0,  142,    2, 0x0a,    2 /* Public */,
       5,    0,  143,    2, 0x0a,    3 /* Public */,
       6,    0,  144,    2, 0x0a,    4 /* Public */,
       7,    0,  145,    2, 0x0a,    5 /* Public */,
       8,    0,  146,    2, 0x0a,    6 /* Public */,
       9,    0,  147,    2, 0x0a,    7 /* Public */,
      10,    0,  148,    2, 0x0a,    8 /* Public */,
      11,    1,  149,    2, 0x0a,    9 /* Public */,
      13,    1,  152,    2, 0x0a,   11 /* Public */,
      14,    0,  155,    2, 0x0a,   13 /* Public */,
      15,    0,  156,    2, 0x0a,   14 /* Public */,
      16,    0,  157,    2, 0x0a,   15 /* Public */,
      17,    1,  158,    2, 0x0a,   16 /* Public */,
      19,    0,  161,    2, 0x0a,   18 /* Public */,
      20,    0,  162,    2, 0x0a,   19 /* Public */,
      21,    0,  163,    2, 0x0a,   20 /* Public */,
      22,    0,  164,    2, 0x0a,   21 /* Public */,
      23,    0,  165,    2, 0x0a,   22 /* Public */,
      24,    0,  166,    2, 0x0a,   23 /* Public */,

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
        (void)_t;
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

const QMetaObject wave::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_wave.offsetsAndSize,
    qt_meta_data_wave,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_wave_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
