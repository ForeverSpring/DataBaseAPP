/****************************************************************************
** Meta object code from reading C++ file 'userinterface.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../userinterface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userinterface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_userinterface_t {
    const uint offsetsAndSize[20];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_userinterface_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_userinterface_t qt_meta_stringdata_userinterface = {
    {
QT_MOC_LITERAL(0, 13), // "userinterface"
QT_MOC_LITERAL(14, 26), // "on_btnsearch_store_clicked"
QT_MOC_LITERAL(41, 0), // ""
QT_MOC_LITERAL(42, 24), // "on_btnsearch_use_clicked"
QT_MOC_LITERAL(67, 27), // "on_btnsearch_report_clicked"
QT_MOC_LITERAL(95, 24), // "on_btninsert_use_clicked"
QT_MOC_LITERAL(120, 7), // "add_sql"
QT_MOC_LITERAL(128, 1), // "a"
QT_MOC_LITERAL(130, 1), // "b"
QT_MOC_LITERAL(132, 22) // "on_btnsearch_s_clicked"

    },
    "userinterface\0on_btnsearch_store_clicked\0"
    "\0on_btnsearch_use_clicked\0"
    "on_btnsearch_report_clicked\0"
    "on_btninsert_use_clicked\0add_sql\0a\0b\0"
    "on_btnsearch_s_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_userinterface[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    0 /* Private */,
       3,    0,   51,    2, 0x08,    1 /* Private */,
       4,    0,   52,    2, 0x08,    2 /* Private */,
       5,    0,   53,    2, 0x08,    3 /* Private */,
       6,    2,   54,    2, 0x08,    4 /* Private */,
       9,    0,   59,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void,

       0        // eod
};

void userinterface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<userinterface *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_btnsearch_store_clicked(); break;
        case 1: _t->on_btnsearch_use_clicked(); break;
        case 2: _t->on_btnsearch_report_clicked(); break;
        case 3: _t->on_btninsert_use_clicked(); break;
        case 4: { QString _r = _t->add_sql((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->on_btnsearch_s_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject userinterface::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_userinterface.offsetsAndSize,
    qt_meta_data_userinterface,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_userinterface_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *userinterface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *userinterface::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_userinterface.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int userinterface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
