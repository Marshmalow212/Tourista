/****************************************************************************
** Meta object code from reading C++ file 'explorer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../tourista3/explorer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'explorer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Explorer_t {
    QByteArrayData data[13];
    char stringdata0[298];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Explorer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Explorer_t qt_meta_stringdata_Explorer = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Explorer"
QT_MOC_LITERAL(1, 9, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 5), // "index"
QT_MOC_LITERAL(4, 44, 34), // "on_divinfocombo_currentTextCh..."
QT_MOC_LITERAL(5, 79, 4), // "arg1"
QT_MOC_LITERAL(6, 84, 33), // "on_plinfocombo_currentTextCha..."
QT_MOC_LITERAL(7, 118, 29), // "on_tdcombo_currentTextChanged"
QT_MOC_LITERAL(8, 148, 29), // "on_tpcombo_currentTextChanged"
QT_MOC_LITERAL(9, 178, 29), // "on_ttcombo_currentTextChanged"
QT_MOC_LITERAL(10, 208, 29), // "on_tscombo_currentTextChanged"
QT_MOC_LITERAL(11, 238, 29), // "on_hdcombo_currentTextChanged"
QT_MOC_LITERAL(12, 268, 29) // "on_hpcombo_currentTextChanged"

    },
    "Explorer\0on_tabWidget_currentChanged\0"
    "\0index\0on_divinfocombo_currentTextChanged\0"
    "arg1\0on_plinfocombo_currentTextChanged\0"
    "on_tdcombo_currentTextChanged\0"
    "on_tpcombo_currentTextChanged\0"
    "on_ttcombo_currentTextChanged\0"
    "on_tscombo_currentTextChanged\0"
    "on_hdcombo_currentTextChanged\0"
    "on_hpcombo_currentTextChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Explorer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    1,   62,    2, 0x08 /* Private */,
       6,    1,   65,    2, 0x08 /* Private */,
       7,    1,   68,    2, 0x08 /* Private */,
       8,    1,   71,    2, 0x08 /* Private */,
       9,    1,   74,    2, 0x08 /* Private */,
      10,    1,   77,    2, 0x08 /* Private */,
      11,    1,   80,    2, 0x08 /* Private */,
      12,    1,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,

       0        // eod
};

void Explorer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Explorer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_divinfocombo_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_plinfocombo_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_tdcombo_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_tpcombo_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_ttcombo_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_tscombo_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_hdcombo_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_hpcombo_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Explorer::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_Explorer.data,
    qt_meta_data_Explorer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Explorer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Explorer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Explorer.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Explorer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
