/****************************************************************************
** Meta object code from reading C++ file 'DoctorWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../DoctorWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DoctorWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_DoctorWindow_t {
    QByteArrayData data[10];
    char stringdata0[143];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DoctorWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DoctorWindow_t qt_meta_stringdata_DoctorWindow = {
    {
QT_MOC_LITERAL(0, 0, 12), // "DoctorWindow"
QT_MOC_LITERAL(1, 13, 13), // "AddPatientWin"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "EditPatientWin"
QT_MOC_LITERAL(4, 43, 17), // "DeletePatientFunc"
QT_MOC_LITERAL(5, 61, 21), // "ViewMedicalHistoryWin"
QT_MOC_LITERAL(6, 83, 16), // "EditPersonalInfo"
QT_MOC_LITERAL(7, 100, 18), // "UpdatePersonalInfo"
QT_MOC_LITERAL(8, 119, 10), // "LogoutFunc"
QT_MOC_LITERAL(9, 130, 12) // "refreshTable"

    },
    "DoctorWindow\0AddPatientWin\0\0EditPatientWin\0"
    "DeletePatientFunc\0ViewMedicalHistoryWin\0"
    "EditPersonalInfo\0UpdatePersonalInfo\0"
    "LogoutFunc\0refreshTable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DoctorWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
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

void DoctorWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        DoctorWindow *_t = static_cast<DoctorWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->AddPatientWin(); break;
        case 1: _t->EditPatientWin(); break;
        case 2: _t->DeletePatientFunc(); break;
        case 3: _t->ViewMedicalHistoryWin(); break;
        case 4: _t->EditPersonalInfo(); break;
        case 5: _t->UpdatePersonalInfo(); break;
        case 6: _t->LogoutFunc(); break;
        case 7: _t->refreshTable(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject DoctorWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DoctorWindow.data,
      qt_meta_data_DoctorWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *DoctorWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DoctorWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_DoctorWindow.stringdata0))
        return static_cast<void*>(const_cast< DoctorWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int DoctorWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
