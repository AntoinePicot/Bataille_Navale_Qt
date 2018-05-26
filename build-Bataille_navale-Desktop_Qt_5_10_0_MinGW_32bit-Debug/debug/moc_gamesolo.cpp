/****************************************************************************
** Meta object code from reading C++ file 'gamesolo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Bataille_navale/gamesolo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gamesolo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GameSolo_t {
    QByteArrayData data[12];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameSolo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameSolo_t qt_meta_stringdata_GameSolo = {
    {
QT_MOC_LITERAL(0, 0, 8), // "GameSolo"
QT_MOC_LITERAL(1, 9, 13), // "buttonClicked"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "buttonClicked1"
QT_MOC_LITERAL(4, 39, 9), // "placement"
QT_MOC_LITERAL(5, 49, 16), // "afficher_bateaux"
QT_MOC_LITERAL(6, 66, 19), // "QPushButton[10][10]"
QT_MOC_LITERAL(7, 86, 5), // "Field"
QT_MOC_LITERAL(8, 92, 13), // "afficher_tirs"
QT_MOC_LITERAL(9, 106, 6), // "Field1"
QT_MOC_LITERAL(10, 113, 5), // "essai"
QT_MOC_LITERAL(11, 119, 1) // "j"

    },
    "GameSolo\0buttonClicked\0\0buttonClicked1\0"
    "placement\0afficher_bateaux\0"
    "QPushButton[10][10]\0Field\0afficher_tirs\0"
    "Field1\0essai\0j"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameSolo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    1,   47,    2, 0x0a /* Public */,
       8,    1,   50,    2, 0x0a /* Public */,
      10,    1,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    9,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

void GameSolo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameSolo *_t = static_cast<GameSolo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->buttonClicked(); break;
        case 1: _t->buttonClicked1(); break;
        case 2: _t->placement(); break;
        case 3: _t->afficher_bateaux((*reinterpret_cast< QPushButton(*)[10][10]>(_a[1]))); break;
        case 4: _t->afficher_tirs((*reinterpret_cast< QPushButton(*)[10][10]>(_a[1]))); break;
        case 5: _t->essai((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject GameSolo::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GameSolo.data,
      qt_meta_data_GameSolo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GameSolo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameSolo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GameSolo.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int GameSolo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
