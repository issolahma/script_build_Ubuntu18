/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      36,   11,   11,   11, 0x08,
      67,   61,   11,   11, 0x08,
     114,  106,   11,   11, 0x08,
     143,  106,   11,   11, 0x08,
     174,  106,   11,   11, 0x08,
     204,  106,   11,   11, 0x08,
     233,  106,   11,   11, 0x08,
     262,  106,   11,   11, 0x08,
     291,  106,   11,   11, 0x08,
     327,  106,   11,   11, 0x08,
     361,  355,   11,   11, 0x08,
     400,  355,   11,   11, 0x08,
     441,  355,   11,   11, 0x08,
     481,  355,   11,   11, 0x08,
     521,  106,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_pushButton_clicked()\0"
    "on_buttonApply_clicked()\0value\0"
    "on_slider_brightness_valueChanged(int)\0"
    "checked\0on_radio_tempo_clicked(bool)\0"
    "on_radio_breathe_clicked(bool)\0"
    "on_radio_custom_clicked(bool)\0"
    "on_radio_cycle_clicked(bool)\0"
    "on_radio_dance_clicked(bool)\0"
    "on_radio_flash_clicked(bool)\0"
    "on_radio_random_color_clicked(bool)\0"
    "on_radio_wave_clicked(bool)\0index\0"
    "on_selectLeft_currentIndexChanged(int)\0"
    "on_selectCenter_currentIndexChanged(int)\0"
    "on_selectRight_currentIndexChanged(int)\0"
    "on_selectExtra_currentIndexChanged(int)\0"
    "on_stateCheckBox_clicked(bool)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_buttonApply_clicked(); break;
        case 2: _t->on_slider_brightness_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_radio_tempo_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_radio_breathe_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_radio_custom_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->on_radio_cycle_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_radio_dance_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_radio_flash_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_radio_random_color_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_radio_wave_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_selectLeft_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_selectCenter_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_selectRight_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_selectExtra_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_stateCheckBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
