/****************************************************************************
** Meta object code from reading C++ file 'server.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../server.h"
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
#error "The header file 'server.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSServerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSServerENDCLASS = QtMocHelpers::stringData(
    "Server",
    "on_listen_btn_clicked",
    "",
    "on_close_btn_clicked",
    "on_search_btn_clicked",
    "on_exit_btn_clicked",
    "onServerStarted",
    "onServerStopped",
    "onClientConnected",
    "clientId",
    "onClientDisconnected",
    "onErrorOccurred",
    "errorMessage",
    "onMessageReceived",
    "NetworkMessage",
    "message",
    "diplayClientCounts"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSServerENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[7];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[22];
    char stringdata5[20];
    char stringdata6[16];
    char stringdata7[16];
    char stringdata8[18];
    char stringdata9[9];
    char stringdata10[21];
    char stringdata11[16];
    char stringdata12[13];
    char stringdata13[18];
    char stringdata14[15];
    char stringdata15[8];
    char stringdata16[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSServerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSServerENDCLASS_t qt_meta_stringdata_CLASSServerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Server"
        QT_MOC_LITERAL(7, 21),  // "on_listen_btn_clicked"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 20),  // "on_close_btn_clicked"
        QT_MOC_LITERAL(51, 21),  // "on_search_btn_clicked"
        QT_MOC_LITERAL(73, 19),  // "on_exit_btn_clicked"
        QT_MOC_LITERAL(93, 15),  // "onServerStarted"
        QT_MOC_LITERAL(109, 15),  // "onServerStopped"
        QT_MOC_LITERAL(125, 17),  // "onClientConnected"
        QT_MOC_LITERAL(143, 8),  // "clientId"
        QT_MOC_LITERAL(152, 20),  // "onClientDisconnected"
        QT_MOC_LITERAL(173, 15),  // "onErrorOccurred"
        QT_MOC_LITERAL(189, 12),  // "errorMessage"
        QT_MOC_LITERAL(202, 17),  // "onMessageReceived"
        QT_MOC_LITERAL(220, 14),  // "NetworkMessage"
        QT_MOC_LITERAL(235, 7),  // "message"
        QT_MOC_LITERAL(243, 18)   // "diplayClientCounts"
    },
    "Server",
    "on_listen_btn_clicked",
    "",
    "on_close_btn_clicked",
    "on_search_btn_clicked",
    "on_exit_btn_clicked",
    "onServerStarted",
    "onServerStopped",
    "onClientConnected",
    "clientId",
    "onClientDisconnected",
    "onErrorOccurred",
    "errorMessage",
    "onMessageReceived",
    "NetworkMessage",
    "message",
    "diplayClientCounts"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSServerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x08,    1 /* Private */,
       3,    0,   81,    2, 0x08,    2 /* Private */,
       4,    0,   82,    2, 0x08,    3 /* Private */,
       5,    0,   83,    2, 0x08,    4 /* Private */,
       6,    0,   84,    2, 0x08,    5 /* Private */,
       7,    0,   85,    2, 0x08,    6 /* Private */,
       8,    1,   86,    2, 0x08,    7 /* Private */,
      10,    1,   89,    2, 0x08,    9 /* Private */,
      11,    1,   92,    2, 0x08,   11 /* Private */,
      13,    1,   95,    2, 0x08,   13 /* Private */,
      16,    0,   98,    2, 0x08,   15 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Server::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSServerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSServerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSServerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Server, std::true_type>,
        // method 'on_listen_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_close_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_search_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_exit_btn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onServerStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onServerStopped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onClientConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onClientDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onErrorOccurred'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onMessageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const NetworkMessage &, std::false_type>,
        // method 'diplayClientCounts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Server::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Server *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_listen_btn_clicked(); break;
        case 1: _t->on_close_btn_clicked(); break;
        case 2: _t->on_search_btn_clicked(); break;
        case 3: _t->on_exit_btn_clicked(); break;
        case 4: _t->onServerStarted(); break;
        case 5: _t->onServerStopped(); break;
        case 6: _t->onClientConnected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->onClientDisconnected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->onErrorOccurred((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->onMessageReceived((*reinterpret_cast< std::add_pointer_t<NetworkMessage>>(_a[1]))); break;
        case 10: _t->diplayClientCounts(); break;
        default: ;
        }
    }
}

const QMetaObject *Server::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Server::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSServerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Server::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
