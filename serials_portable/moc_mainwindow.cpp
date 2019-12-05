/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../serials-master good/serials/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[38];
    char stringdata0[706];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 16), // "portname_changed"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 10), // "v_old_name"
QT_MOC_LITERAL(4, 40, 10), // "v_new_name"
QT_MOC_LITERAL(5, 51, 14), // "status_changed"
QT_MOC_LITERAL(6, 66, 15), // "update_PortName"
QT_MOC_LITERAL(7, 82, 19), // "on_OpenFile_clicked"
QT_MOC_LITERAL(8, 102, 22), // "on_SaveContent_clicked"
QT_MOC_LITERAL(9, 125, 35), // "on_BaudComboBox_currentIndexC..."
QT_MOC_LITERAL(10, 161, 5), // "index"
QT_MOC_LITERAL(11, 167, 19), // "on_SendData_clicked"
QT_MOC_LITERAL(12, 187, 23), // "on_ClearDisplay_clicked"
QT_MOC_LITERAL(13, 211, 23), // "on_textEdit_textChanged"
QT_MOC_LITERAL(14, 235, 26), // "on_textBrowser_textChanged"
QT_MOC_LITERAL(15, 262, 14), // "updateSettings"
QT_MOC_LITERAL(16, 277, 10), // "readSerial"
QT_MOC_LITERAL(17, 288, 10), // "timeHandle"
QT_MOC_LITERAL(18, 299, 21), // "display_update_handle"
QT_MOC_LITERAL(19, 321, 23), // "on_TimecheckBox_clicked"
QT_MOC_LITERAL(20, 345, 7), // "checked"
QT_MOC_LITERAL(21, 353, 26), // "on_HexSendcheckBox_clicked"
QT_MOC_LITERAL(22, 380, 19), // "on_SendFile_clicked"
QT_MOC_LITERAL(23, 400, 19), // "on_Time_textChanged"
QT_MOC_LITERAL(24, 420, 4), // "arg1"
QT_MOC_LITERAL(25, 425, 15), // "on_Help_clicked"
QT_MOC_LITERAL(26, 441, 20), // "on_CloseFile_clicked"
QT_MOC_LITERAL(27, 462, 22), // "on_btnMenu_Max_clicked"
QT_MOC_LITERAL(28, 485, 18), // "on_btnMenu_clicked"
QT_MOC_LITERAL(29, 504, 22), // "on_btnMenu_Min_clicked"
QT_MOC_LITERAL(30, 527, 24), // "on_btnMenu_Close_clicked"
QT_MOC_LITERAL(31, 552, 23), // "on_btnMenu_lock_clicked"
QT_MOC_LITERAL(32, 576, 18), // "on_OpenCom_clicked"
QT_MOC_LITERAL(33, 595, 22), // "on_DTRcheckBox_clicked"
QT_MOC_LITERAL(34, 618, 22), // "on_RTScheckBox_clicked"
QT_MOC_LITERAL(35, 641, 13), // "PinoutSignals"
QT_MOC_LITERAL(36, 655, 36), // "on_SerialcomboBox_currentText..."
QT_MOC_LITERAL(37, 692, 13) // "counter_clear"

    },
    "MainWindow\0portname_changed\0\0v_old_name\0"
    "v_new_name\0status_changed\0update_PortName\0"
    "on_OpenFile_clicked\0on_SaveContent_clicked\0"
    "on_BaudComboBox_currentIndexChanged\0"
    "index\0on_SendData_clicked\0"
    "on_ClearDisplay_clicked\0on_textEdit_textChanged\0"
    "on_textBrowser_textChanged\0updateSettings\0"
    "readSerial\0timeHandle\0display_update_handle\0"
    "on_TimecheckBox_clicked\0checked\0"
    "on_HexSendcheckBox_clicked\0"
    "on_SendFile_clicked\0on_Time_textChanged\0"
    "arg1\0on_Help_clicked\0on_CloseFile_clicked\0"
    "on_btnMenu_Max_clicked\0on_btnMenu_clicked\0"
    "on_btnMenu_Min_clicked\0on_btnMenu_Close_clicked\0"
    "on_btnMenu_lock_clicked\0on_OpenCom_clicked\0"
    "on_DTRcheckBox_clicked\0on_RTScheckBox_clicked\0"
    "PinoutSignals\0on_SerialcomboBox_currentTextChanged\0"
    "counter_clear"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,  169,    2, 0x06 /* Public */,
       5,    0,  174,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,  175,    2, 0x08 /* Private */,
       7,    0,  180,    2, 0x08 /* Private */,
       8,    0,  181,    2, 0x08 /* Private */,
       9,    1,  182,    2, 0x08 /* Private */,
      11,    0,  185,    2, 0x08 /* Private */,
      12,    0,  186,    2, 0x08 /* Private */,
      13,    0,  187,    2, 0x08 /* Private */,
      14,    0,  188,    2, 0x08 /* Private */,
      15,    0,  189,    2, 0x08 /* Private */,
      16,    0,  190,    2, 0x08 /* Private */,
      17,    0,  191,    2, 0x08 /* Private */,
      18,    0,  192,    2, 0x08 /* Private */,
      19,    1,  193,    2, 0x08 /* Private */,
      21,    1,  196,    2, 0x08 /* Private */,
      22,    0,  199,    2, 0x08 /* Private */,
      23,    1,  200,    2, 0x08 /* Private */,
      25,    0,  203,    2, 0x08 /* Private */,
      26,    0,  204,    2, 0x08 /* Private */,
      27,    0,  205,    2, 0x08 /* Private */,
      28,    0,  206,    2, 0x08 /* Private */,
      29,    0,  207,    2, 0x08 /* Private */,
      30,    0,  208,    2, 0x08 /* Private */,
      31,    0,  209,    2, 0x08 /* Private */,
      32,    0,  210,    2, 0x08 /* Private */,
      33,    1,  211,    2, 0x08 /* Private */,
      34,    1,  214,    2, 0x08 /* Private */,
      35,    0,  217,    2, 0x08 /* Private */,
      36,    1,  218,    2, 0x08 /* Private */,
      37,    0,  221,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList, QMetaType::QStringList,    3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList, QMetaType::QStringList,    3,    4,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   24,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->portname_changed((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 1: _t->status_changed(); break;
        case 2: _t->update_PortName((*reinterpret_cast< const QStringList(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 3: { bool _r = _t->on_OpenFile_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->on_SaveContent_clicked();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: _t->on_BaudComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_SendData_clicked(); break;
        case 7: _t->on_ClearDisplay_clicked(); break;
        case 8: _t->on_textEdit_textChanged(); break;
        case 9: _t->on_textBrowser_textChanged(); break;
        case 10: _t->updateSettings(); break;
        case 11: _t->readSerial(); break;
        case 12: _t->timeHandle(); break;
        case 13: _t->display_update_handle(); break;
        case 14: _t->on_TimecheckBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->on_HexSendcheckBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->on_SendFile_clicked(); break;
        case 17: _t->on_Time_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 18: _t->on_Help_clicked(); break;
        case 19: _t->on_CloseFile_clicked(); break;
        case 20: _t->on_btnMenu_Max_clicked(); break;
        case 21: _t->on_btnMenu_clicked(); break;
        case 22: _t->on_btnMenu_Min_clicked(); break;
        case 23: _t->on_btnMenu_Close_clicked(); break;
        case 24: _t->on_btnMenu_lock_clicked(); break;
        case 25: _t->on_OpenCom_clicked(); break;
        case 26: _t->on_DTRcheckBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->on_RTScheckBox_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->PinoutSignals(); break;
        case 29: _t->on_SerialcomboBox_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->counter_clear(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(const QStringList , const QStringList );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::portname_changed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MainWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::status_changed)) {
                *result = 1;
                return;
            }
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
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::portname_changed(const QStringList _t1, const QStringList _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::status_changed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
