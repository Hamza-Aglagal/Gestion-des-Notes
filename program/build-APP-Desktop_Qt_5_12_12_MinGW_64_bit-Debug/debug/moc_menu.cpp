/****************************************************************************
** Meta object code from reading C++ file 'menu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.12)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../APP/menu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.12. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Menu_t {
    QByteArrayData data[12];
    char stringdata0[328];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Menu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Menu_t qt_meta_stringdata_Menu = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Menu"
QT_MOC_LITERAL(1, 5, 29), // "on_pushButton_ajouter_clicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 30), // "on_pushButton_modifier_clicked"
QT_MOC_LITERAL(4, 67, 31), // "on_pushButton_supprimer_clicked"
QT_MOC_LITERAL(5, 99, 30), // "on_pushButton_afficher_clicked"
QT_MOC_LITERAL(6, 130, 31), // "on_pushButton_ajouter_2_clicked"
QT_MOC_LITERAL(7, 162, 33), // "on_pushButton_supprimer_2_cli..."
QT_MOC_LITERAL(8, 196, 32), // "on_pushButton_afficher_2_clicked"
QT_MOC_LITERAL(9, 229, 31), // "on_pushButton_ajouter_3_clicked"
QT_MOC_LITERAL(10, 261, 33), // "on_pushButton_supprimer_3_cli..."
QT_MOC_LITERAL(11, 295, 32) // "on_pushButton_afficher_3_clicked"

    },
    "Menu\0on_pushButton_ajouter_clicked\0\0"
    "on_pushButton_modifier_clicked\0"
    "on_pushButton_supprimer_clicked\0"
    "on_pushButton_afficher_clicked\0"
    "on_pushButton_ajouter_2_clicked\0"
    "on_pushButton_supprimer_2_clicked\0"
    "on_pushButton_afficher_2_clicked\0"
    "on_pushButton_ajouter_3_clicked\0"
    "on_pushButton_supprimer_3_clicked\0"
    "on_pushButton_afficher_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Menu[] = {

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
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    0,   73,    2, 0x08 /* Private */,

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
    QMetaType::Void,

       0        // eod
};

void Menu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Menu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_ajouter_clicked(); break;
        case 1: _t->on_pushButton_modifier_clicked(); break;
        case 2: _t->on_pushButton_supprimer_clicked(); break;
        case 3: _t->on_pushButton_afficher_clicked(); break;
        case 4: _t->on_pushButton_ajouter_2_clicked(); break;
        case 5: _t->on_pushButton_supprimer_2_clicked(); break;
        case 6: _t->on_pushButton_afficher_2_clicked(); break;
        case 7: _t->on_pushButton_ajouter_3_clicked(); break;
        case 8: _t->on_pushButton_supprimer_3_clicked(); break;
        case 9: _t->on_pushButton_afficher_3_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Menu::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_Menu.data,
    qt_meta_data_Menu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Menu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Menu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Menu.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Menu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
