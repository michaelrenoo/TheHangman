/****************************************************************************
** Meta object code from reading C++ file 'gamewindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../TheHangman/gamewindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamewindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_gamewindow_t {
    QByteArrayData data[12];
    char stringdata0[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gamewindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gamewindow_t qt_meta_stringdata_gamewindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "gamewindow"
QT_MOC_LITERAL(1, 11, 9), // "countDown"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 14), // "letter_pressed"
QT_MOC_LITERAL(4, 37, 21), // "on_hintButton_clicked"
QT_MOC_LITERAL(5, 59, 21), // "on_backButton_clicked"
QT_MOC_LITERAL(6, 81, 16), // "change_game_word"
QT_MOC_LITERAL(7, 98, 10), // "check_word"
QT_MOC_LITERAL(8, 109, 11), // "is_finished"
QT_MOC_LITERAL(9, 121, 10), // "game_start"
QT_MOC_LITERAL(10, 132, 9), // "game_over"
QT_MOC_LITERAL(11, 142, 8) // "new_game"

    },
    "gamewindow\0countDown\0\0letter_pressed\0"
    "on_hintButton_clicked\0on_backButton_clicked\0"
    "change_game_word\0check_word\0is_finished\0"
    "game_start\0game_over\0new_game"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gamewindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x0a /* Public */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    1,   68,    2, 0x08 /* Private */,
       7,    2,   71,    2, 0x08 /* Private */,
       8,    1,   76,    2, 0x08 /* Private */,
       9,    0,   79,    2, 0x08 /* Private */,
      10,    1,   80,    2, 0x08 /* Private */,
      11,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString,    2,
    QMetaType::Int, QMetaType::Char, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

void gamewindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<gamewindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->countDown(); break;
        case 1: _t->letter_pressed(); break;
        case 2: _t->on_hintButton_clicked(); break;
        case 3: _t->on_backButton_clicked(); break;
        case 4: { QString _r = _t->change_game_word((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: { int _r = _t->check_word((*reinterpret_cast< char(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->is_finished((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->game_start(); break;
        case 8: _t->game_over((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->new_game(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject gamewindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_gamewindow.data,
    qt_meta_data_gamewindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *gamewindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gamewindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_gamewindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int gamewindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
