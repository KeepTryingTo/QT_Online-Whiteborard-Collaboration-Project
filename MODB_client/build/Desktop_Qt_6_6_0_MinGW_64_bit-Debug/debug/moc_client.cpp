/****************************************************************************
** Meta object code from reading C++ file 'client.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../client.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'client.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSClientENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSClientENDCLASS = QtMocHelpers::stringData(
    "Client",
    "on_pen_btn_clicked",
    "",
    "on_line_btn_clicked",
    "on_elli_btn_clicked",
    "on_text_btn_clicked",
    "on_rect_btn_clicked",
    "on_zoom_big_btn_clicked",
    "on_zoom_small_btn_clicked",
    "onColorBtnClicked",
    "on_is_full_btn_clicked",
    "on_linew_spinBox_valueChanged",
    "arg1",
    "on_eraser_btn_clicked",
    "on_newFile",
    "on_openFile",
    "on_saveFile",
    "on_saveAsFile",
    "on_exportImage",
    "on_clearAction",
    "on_redoAction",
    "on_toggleGridAction",
    "onAboutTriggered",
    "onHelpTriggered",
    "onVersionTriggered",
    "onCheckForUpdates",
    "onUpdateAvailable",
    "currentVersion",
    "latestVersion",
    "onConnectedToServer",
    "onDisconnectedFromServer",
    "onConnectionError",
    "error",
    "onDrawingOperationReceived",
    "DrawingOperation",
    "operation",
    "onClearSceneReceived",
    "onJoinRoomClicked",
    "onConnectToServerClicked",
    "onDrawingOperationCreated",
    "onClearSceneRequested",
    "onUndoRequested",
    "onRedoRequested",
    "onUndoRequestReceived",
    "onRedoRequestReceived",
    "setOnlineMode",
    "online",
    "disconnectClient",
    "recvError",
    "errorMessage"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSClientENDCLASS_t {
    uint offsetsAndSizes[100];
    char stringdata0[7];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[20];
    char stringdata5[20];
    char stringdata6[20];
    char stringdata7[24];
    char stringdata8[26];
    char stringdata9[18];
    char stringdata10[23];
    char stringdata11[30];
    char stringdata12[5];
    char stringdata13[22];
    char stringdata14[11];
    char stringdata15[12];
    char stringdata16[12];
    char stringdata17[14];
    char stringdata18[15];
    char stringdata19[15];
    char stringdata20[14];
    char stringdata21[20];
    char stringdata22[17];
    char stringdata23[16];
    char stringdata24[19];
    char stringdata25[18];
    char stringdata26[18];
    char stringdata27[15];
    char stringdata28[14];
    char stringdata29[20];
    char stringdata30[25];
    char stringdata31[18];
    char stringdata32[6];
    char stringdata33[27];
    char stringdata34[17];
    char stringdata35[10];
    char stringdata36[21];
    char stringdata37[18];
    char stringdata38[25];
    char stringdata39[26];
    char stringdata40[22];
    char stringdata41[16];
    char stringdata42[16];
    char stringdata43[22];
    char stringdata44[22];
    char stringdata45[14];
    char stringdata46[7];
    char stringdata47[17];
    char stringdata48[10];
    char stringdata49[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSClientENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSClientENDCLASS_t qt_meta_stringdata_CLASSClientENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Client"
        QT_MOC_LITERAL(7, 18),  // "on_pen_btn_clicked"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 19),  // "on_line_btn_clicked"
        QT_MOC_LITERAL(47, 19),  // "on_elli_btn_clicked"
        QT_MOC_LITERAL(67, 19),  // "on_text_btn_clicked"
        QT_MOC_LITERAL(87, 19),  // "on_rect_btn_clicked"
        QT_MOC_LITERAL(107, 23),  // "on_zoom_big_btn_clicked"
        QT_MOC_LITERAL(131, 25),  // "on_zoom_small_btn_clicked"
        QT_MOC_LITERAL(157, 17),  // "onColorBtnClicked"
        QT_MOC_LITERAL(175, 22),  // "on_is_full_btn_clicked"
        QT_MOC_LITERAL(198, 29),  // "on_linew_spinBox_valueChanged"
        QT_MOC_LITERAL(228, 4),  // "arg1"
        QT_MOC_LITERAL(233, 21),  // "on_eraser_btn_clicked"
        QT_MOC_LITERAL(255, 10),  // "on_newFile"
        QT_MOC_LITERAL(266, 11),  // "on_openFile"
        QT_MOC_LITERAL(278, 11),  // "on_saveFile"
        QT_MOC_LITERAL(290, 13),  // "on_saveAsFile"
        QT_MOC_LITERAL(304, 14),  // "on_exportImage"
        QT_MOC_LITERAL(319, 14),  // "on_clearAction"
        QT_MOC_LITERAL(334, 13),  // "on_redoAction"
        QT_MOC_LITERAL(348, 19),  // "on_toggleGridAction"
        QT_MOC_LITERAL(368, 16),  // "onAboutTriggered"
        QT_MOC_LITERAL(385, 15),  // "onHelpTriggered"
        QT_MOC_LITERAL(401, 18),  // "onVersionTriggered"
        QT_MOC_LITERAL(420, 17),  // "onCheckForUpdates"
        QT_MOC_LITERAL(438, 17),  // "onUpdateAvailable"
        QT_MOC_LITERAL(456, 14),  // "currentVersion"
        QT_MOC_LITERAL(471, 13),  // "latestVersion"
        QT_MOC_LITERAL(485, 19),  // "onConnectedToServer"
        QT_MOC_LITERAL(505, 24),  // "onDisconnectedFromServer"
        QT_MOC_LITERAL(530, 17),  // "onConnectionError"
        QT_MOC_LITERAL(548, 5),  // "error"
        QT_MOC_LITERAL(554, 26),  // "onDrawingOperationReceived"
        QT_MOC_LITERAL(581, 16),  // "DrawingOperation"
        QT_MOC_LITERAL(598, 9),  // "operation"
        QT_MOC_LITERAL(608, 20),  // "onClearSceneReceived"
        QT_MOC_LITERAL(629, 17),  // "onJoinRoomClicked"
        QT_MOC_LITERAL(647, 24),  // "onConnectToServerClicked"
        QT_MOC_LITERAL(672, 25),  // "onDrawingOperationCreated"
        QT_MOC_LITERAL(698, 21),  // "onClearSceneRequested"
        QT_MOC_LITERAL(720, 15),  // "onUndoRequested"
        QT_MOC_LITERAL(736, 15),  // "onRedoRequested"
        QT_MOC_LITERAL(752, 21),  // "onUndoRequestReceived"
        QT_MOC_LITERAL(774, 21),  // "onRedoRequestReceived"
        QT_MOC_LITERAL(796, 13),  // "setOnlineMode"
        QT_MOC_LITERAL(810, 6),  // "online"
        QT_MOC_LITERAL(817, 16),  // "disconnectClient"
        QT_MOC_LITERAL(834, 9),  // "recvError"
        QT_MOC_LITERAL(844, 12)   // "errorMessage"
    },
    "Client",
    "on_pen_btn_clicked",
    "",
    "on_line_btn_clicked",
    "on_elli_btn_clicked",
    "on_text_btn_clicked",
    "on_rect_btn_clicked",
    "on_zoom_big_btn_clicked",
    "on_zoom_small_btn_clicked",
    "onColorBtnClicked",
    "on_is_full_btn_clicked",
    "on_linew_spinBox_valueChanged",
    "arg1",
    "on_eraser_btn_clicked",
    "on_newFile",
    "on_openFile",
    "on_saveFile",
    "on_saveAsFile",
    "on_exportImage",
    "on_clearAction",
    "on_redoAction",
    "on_toggleGridAction",
    "onAboutTriggered",
    "onHelpTriggered",
    "onVersionTriggered",
    "onCheckForUpdates",
    "onUpdateAvailable",
    "currentVersion",
    "latestVersion",
    "onConnectedToServer",
    "onDisconnectedFromServer",
    "onConnectionError",
    "error",
    "onDrawingOperationReceived",
    "DrawingOperation",
    "operation",
    "onClearSceneReceived",
    "onJoinRoomClicked",
    "onConnectToServerClicked",
    "onDrawingOperationCreated",
    "onClearSceneRequested",
    "onUndoRequested",
    "onRedoRequested",
    "onUndoRequestReceived",
    "onRedoRequestReceived",
    "setOnlineMode",
    "online",
    "disconnectClient",
    "recvError",
    "errorMessage"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSClientENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      40,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  254,    2, 0x08,    1 /* Private */,
       3,    0,  255,    2, 0x08,    2 /* Private */,
       4,    0,  256,    2, 0x08,    3 /* Private */,
       5,    0,  257,    2, 0x08,    4 /* Private */,
       6,    0,  258,    2, 0x08,    5 /* Private */,
       7,    0,  259,    2, 0x08,    6 /* Private */,
       8,    0,  260,    2, 0x08,    7 /* Private */,
       9,    0,  261,    2, 0x08,    8 /* Private */,
      10,    0,  262,    2, 0x08,    9 /* Private */,
      11,    1,  263,    2, 0x08,   10 /* Private */,
      13,    0,  266,    2, 0x08,   12 /* Private */,
      14,    0,  267,    2, 0x08,   13 /* Private */,
      15,    0,  268,    2, 0x08,   14 /* Private */,
      16,    0,  269,    2, 0x08,   15 /* Private */,
      17,    0,  270,    2, 0x08,   16 /* Private */,
      18,    0,  271,    2, 0x08,   17 /* Private */,
      19,    0,  272,    2, 0x08,   18 /* Private */,
      20,    0,  273,    2, 0x08,   19 /* Private */,
      21,    0,  274,    2, 0x08,   20 /* Private */,
      22,    0,  275,    2, 0x08,   21 /* Private */,
      23,    0,  276,    2, 0x08,   22 /* Private */,
      24,    0,  277,    2, 0x08,   23 /* Private */,
      25,    0,  278,    2, 0x08,   24 /* Private */,
      26,    2,  279,    2, 0x08,   25 /* Private */,
      29,    0,  284,    2, 0x08,   28 /* Private */,
      30,    0,  285,    2, 0x08,   29 /* Private */,
      31,    1,  286,    2, 0x08,   30 /* Private */,
      33,    1,  289,    2, 0x08,   32 /* Private */,
      36,    0,  292,    2, 0x08,   34 /* Private */,
      37,    0,  293,    2, 0x08,   35 /* Private */,
      38,    0,  294,    2, 0x08,   36 /* Private */,
      39,    1,  295,    2, 0x08,   37 /* Private */,
      40,    0,  298,    2, 0x08,   39 /* Private */,
      41,    0,  299,    2, 0x08,   40 /* Private */,
      42,    0,  300,    2, 0x08,   41 /* Private */,
      43,    0,  301,    2, 0x08,   42 /* Private */,
      44,    0,  302,    2, 0x08,   43 /* Private */,
      45,    1,  303,    2, 0x08,   44 /* Private */,
      47,    0,  306,    2, 0x08,   46 /* Private */,
      48,    1,  307,    2, 0x08,   47 /* Private */,

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
    QMetaType::Void, QMetaType::Int,   12,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   27,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   49,

       0        // eod
};

Q_CONSTINIT const QMetaObject Client::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSClientENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSClientENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSClientENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Client, std::true_type>,
        // method 'on_pen_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_line_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_elli_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_text_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rect_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_zoom_big_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_zoom_small_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onColorBtnClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_is_full_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_linew_spinBox_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_eraser_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_newFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_openFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_saveFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_saveAsFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_exportImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clearAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_redoAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toggleGridAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onAboutTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onHelpTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onVersionTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCheckForUpdates'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUpdateAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onConnectedToServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDisconnectedFromServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onConnectionError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onDrawingOperationReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const DrawingOperation &, std::false_type>,
        // method 'onClearSceneReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onJoinRoomClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onConnectToServerClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDrawingOperationCreated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const DrawingOperation &, std::false_type>,
        // method 'onClearSceneRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUndoRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRedoRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUndoRequestReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRedoRequestReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setOnlineMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'disconnectClient'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'recvError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void Client::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Client *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pen_btn_clicked(); break;
        case 1: _t->on_line_btn_clicked(); break;
        case 2: _t->on_elli_btn_clicked(); break;
        case 3: _t->on_text_btn_clicked(); break;
        case 4: _t->on_rect_btn_clicked(); break;
        case 5: _t->on_zoom_big_btn_clicked(); break;
        case 6: _t->on_zoom_small_btn_clicked(); break;
        case 7: _t->onColorBtnClicked(); break;
        case 8: _t->on_is_full_btn_clicked(); break;
        case 9: _t->on_linew_spinBox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->on_eraser_btn_clicked(); break;
        case 11: _t->on_newFile(); break;
        case 12: _t->on_openFile(); break;
        case 13: _t->on_saveFile(); break;
        case 14: _t->on_saveAsFile(); break;
        case 15: _t->on_exportImage(); break;
        case 16: _t->on_clearAction(); break;
        case 17: _t->on_redoAction(); break;
        case 18: _t->on_toggleGridAction(); break;
        case 19: _t->onAboutTriggered(); break;
        case 20: _t->onHelpTriggered(); break;
        case 21: _t->onVersionTriggered(); break;
        case 22: _t->onCheckForUpdates(); break;
        case 23: _t->onUpdateAvailable((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 24: _t->onConnectedToServer(); break;
        case 25: _t->onDisconnectedFromServer(); break;
        case 26: _t->onConnectionError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->onDrawingOperationReceived((*reinterpret_cast< std::add_pointer_t<DrawingOperation>>(_a[1]))); break;
        case 28: _t->onClearSceneReceived(); break;
        case 29: _t->onJoinRoomClicked(); break;
        case 30: _t->onConnectToServerClicked(); break;
        case 31: _t->onDrawingOperationCreated((*reinterpret_cast< std::add_pointer_t<DrawingOperation>>(_a[1]))); break;
        case 32: _t->onClearSceneRequested(); break;
        case 33: _t->onUndoRequested(); break;
        case 34: _t->onRedoRequested(); break;
        case 35: _t->onUndoRequestReceived(); break;
        case 36: _t->onRedoRequestReceived(); break;
        case 37: _t->setOnlineMode((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 38: _t->disconnectClient(); break;
        case 39: _t->recvError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *Client::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Client::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSClientENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Client::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 40)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 40;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 40)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 40;
    }
    return _id;
}
QT_WARNING_POP
