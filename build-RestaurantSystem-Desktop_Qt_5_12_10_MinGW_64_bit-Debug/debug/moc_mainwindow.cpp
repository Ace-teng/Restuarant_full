/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.10)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../RestaurantSystem/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.10. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[289];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "onAddDishClicked"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 19), // "onRemoveDishClicked"
QT_MOC_LITERAL(4, 49, 20), // "onSubmitOrderClicked"
QT_MOC_LITERAL(5, 70, 24), // "onTableItemDoubleClicked"
QT_MOC_LITERAL(6, 95, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(7, 113, 4), // "item"
QT_MOC_LITERAL(8, 118, 18), // "onOrderItemChanged"
QT_MOC_LITERAL(9, 137, 20), // "onViewTodayTriggered"
QT_MOC_LITERAL(10, 158, 22), // "onViewHistoryTriggered"
QT_MOC_LITERAL(11, 181, 18), // "onNewFileTriggered"
QT_MOC_LITERAL(12, 200, 15), // "onExitTriggered"
QT_MOC_LITERAL(13, 216, 17), // "onViewTodayDineIn"
QT_MOC_LITERAL(14, 234, 18), // "onViewTodayTakeOut"
QT_MOC_LITERAL(15, 253, 16), // "onAboutTriggered"
QT_MOC_LITERAL(16, 270, 18) // "onToggleFullscreen"

    },
    "MainWindow\0onAddDishClicked\0\0"
    "onRemoveDishClicked\0onSubmitOrderClicked\0"
    "onTableItemDoubleClicked\0QTableWidgetItem*\0"
    "item\0onOrderItemChanged\0onViewTodayTriggered\0"
    "onViewHistoryTriggered\0onNewFileTriggered\0"
    "onExitTriggered\0onViewTodayDineIn\0"
    "onViewTodayTakeOut\0onAboutTriggered\0"
    "onToggleFullscreen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x08 /* Private */,
       3,    0,   80,    2, 0x08 /* Private */,
       4,    0,   81,    2, 0x08 /* Private */,
       5,    1,   82,    2, 0x08 /* Private */,
       8,    1,   85,    2, 0x08 /* Private */,
       9,    0,   88,    2, 0x08 /* Private */,
      10,    0,   89,    2, 0x08 /* Private */,
      11,    0,   90,    2, 0x08 /* Private */,
      12,    0,   91,    2, 0x08 /* Private */,
      13,    0,   92,    2, 0x08 /* Private */,
      14,    0,   93,    2, 0x08 /* Private */,
      15,    0,   94,    2, 0x08 /* Private */,
      16,    0,   95,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onAddDishClicked(); break;
        case 1: _t->onRemoveDishClicked(); break;
        case 2: _t->onSubmitOrderClicked(); break;
        case 3: _t->onTableItemDoubleClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 4: _t->onOrderItemChanged((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 5: _t->onViewTodayTriggered(); break;
        case 6: _t->onViewHistoryTriggered(); break;
        case 7: _t->onNewFileTriggered(); break;
        case 8: _t->onExitTriggered(); break;
        case 9: _t->onViewTodayDineIn(); break;
        case 10: _t->onViewTodayTakeOut(); break;
        case 11: _t->onAboutTriggered(); break;
        case 12: _t->onToggleFullscreen(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
