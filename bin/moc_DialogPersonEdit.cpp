/****************************************************************************
** Meta object code from reading C++ file 'DialogPersonEdit.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../DialogPersonEdit.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogPersonEdit.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DialogPersonEdit_t {
    QByteArrayData data[14];
    char stringdata0[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DialogPersonEdit_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DialogPersonEdit_t qt_meta_stringdata_DialogPersonEdit = {
    {
QT_MOC_LITERAL(0, 0, 16), // "DialogPersonEdit"
QT_MOC_LITERAL(1, 17, 10), // "editPerson"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 7), // "surname"
QT_MOC_LITERAL(4, 37, 4), // "name"
QT_MOC_LITERAL(5, 42, 10), // "patronymic"
QT_MOC_LITERAL(6, 53, 8), // "passport"
QT_MOC_LITERAL(7, 62, 5), // "phone"
QT_MOC_LITERAL(8, 68, 23), // "QList<QListWidgetItem*>"
QT_MOC_LITERAL(9, 92, 15), // "editPersonBanks"
QT_MOC_LITERAL(10, 108, 10), // "oldSurname"
QT_MOC_LITERAL(11, 119, 11), // "oldPassport"
QT_MOC_LITERAL(12, 131, 19), // "on_pb_dsave_clicked"
QT_MOC_LITERAL(13, 151, 22) // "on_pb_ddiscard_clicked"

    },
    "DialogPersonEdit\0editPerson\0\0surname\0"
    "name\0patronymic\0passport\0phone\0"
    "QList<QListWidgetItem*>\0editPersonBanks\0"
    "oldSurname\0oldPassport\0on_pb_dsave_clicked\0"
    "on_pb_ddiscard_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DialogPersonEdit[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    8,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    0,   46,    2, 0x08 /* Private */,
      13,    0,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 8, QMetaType::QString, QMetaType::QString,    3,    4,    5,    6,    7,    9,   10,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void DialogPersonEdit::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DialogPersonEdit *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->editPerson((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5])),(*reinterpret_cast< const QList<QListWidgetItem*>(*)>(_a[6])),(*reinterpret_cast< const QString(*)>(_a[7])),(*reinterpret_cast< const QString(*)>(_a[8]))); break;
        case 1: _t->on_pb_dsave_clicked(); break;
        case 2: _t->on_pb_ddiscard_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DialogPersonEdit::*)(const QString & , const QString & , const QString & , const QString & , const QString & , const QList<QListWidgetItem*> & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&DialogPersonEdit::editPerson)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DialogPersonEdit::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_DialogPersonEdit.data,
    qt_meta_data_DialogPersonEdit,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DialogPersonEdit::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DialogPersonEdit::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DialogPersonEdit.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int DialogPersonEdit::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void DialogPersonEdit::editPerson(const QString & _t1, const QString & _t2, const QString & _t3, const QString & _t4, const QString & _t5, const QList<QListWidgetItem*> & _t6, const QString & _t7, const QString & _t8)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
