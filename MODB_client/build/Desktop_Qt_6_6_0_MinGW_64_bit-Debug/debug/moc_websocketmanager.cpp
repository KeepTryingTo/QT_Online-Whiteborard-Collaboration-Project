/****************************************************************************
** Meta object code from reading C++ file 'websocketmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../websocketmanager.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'websocketmanager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSWebSocketManagerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSWebSocketManagerENDCLASS = QtMocHelpers::stringData(
    "WebSocketManager",
    "connected",
    "",
    "disconnected",
    "connectionError",
    "error",
    "userJoined",
    "userId",
    "userName",
    "UserRole",
    "role",
    "userLeft",
    "drawingOperationReceived",
    "DrawingOperation",
    "operation",
    "clearSceneReceived",
    "undoRequestReceived",
    "redoRequestReceived",
    "chatMessageReceived",
    "message",
    "userRoleChanged",
    "newRole",
    "joinedRoom",
    "roomId",
    "roomJoined",
    "roomName",
    "roomCreated",
    "roomLeft",
    "roomListReceived",
    "QList<std::pair<QString,QString>>",
    "rooms",
    "roomError",
    "errorMessage",
    "onConnected",
    "onDisconnected",
    "onTextMessageReceived",
    "onErrorOccurred",
    "QAbstractSocket::SocketError",
    "sendHeartbeat"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSWebSocketManagerENDCLASS_t {
    uint offsetsAndSizes[78];
    char stringdata0[17];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[16];
    char stringdata5[6];
    char stringdata6[11];
    char stringdata7[7];
    char stringdata8[9];
    char stringdata9[9];
    char stringdata10[5];
    char stringdata11[9];
    char stringdata12[25];
    char stringdata13[17];
    char stringdata14[10];
    char stringdata15[19];
    char stringdata16[20];
    char stringdata17[20];
    char stringdata18[20];
    char stringdata19[8];
    char stringdata20[16];
    char stringdata21[8];
    char stringdata22[11];
    char stringdata23[7];
    char stringdata24[11];
    char stringdata25[9];
    char stringdata26[12];
    char stringdata27[9];
    char stringdata28[17];
    char stringdata29[34];
    char stringdata30[6];
    char stringdata31[10];
    char stringdata32[13];
    char stringdata33[12];
    char stringdata34[15];
    char stringdata35[22];
    char stringdata36[16];
    char stringdata37[29];
    char stringdata38[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSWebSocketManagerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSWebSocketManagerENDCLASS_t qt_meta_stringdata_CLASSWebSocketManagerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "WebSocketManager"
        QT_MOC_LITERAL(17, 9),  // "connected"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 12),  // "disconnected"
        QT_MOC_LITERAL(41, 15),  // "connectionError"
        QT_MOC_LITERAL(57, 5),  // "error"
        QT_MOC_LITERAL(63, 10),  // "userJoined"
        QT_MOC_LITERAL(74, 6),  // "userId"
        QT_MOC_LITERAL(81, 8),  // "userName"
        QT_MOC_LITERAL(90, 8),  // "UserRole"
        QT_MOC_LITERAL(99, 4),  // "role"
        QT_MOC_LITERAL(104, 8),  // "userLeft"
        QT_MOC_LITERAL(113, 24),  // "drawingOperationReceived"
        QT_MOC_LITERAL(138, 16),  // "DrawingOperation"
        QT_MOC_LITERAL(155, 9),  // "operation"
        QT_MOC_LITERAL(165, 18),  // "clearSceneReceived"
        QT_MOC_LITERAL(184, 19),  // "undoRequestReceived"
        QT_MOC_LITERAL(204, 19),  // "redoRequestReceived"
        QT_MOC_LITERAL(224, 19),  // "chatMessageReceived"
        QT_MOC_LITERAL(244, 7),  // "message"
        QT_MOC_LITERAL(252, 15),  // "userRoleChanged"
        QT_MOC_LITERAL(268, 7),  // "newRole"
        QT_MOC_LITERAL(276, 10),  // "joinedRoom"
        QT_MOC_LITERAL(287, 6),  // "roomId"
        QT_MOC_LITERAL(294, 10),  // "roomJoined"
        QT_MOC_LITERAL(305, 8),  // "roomName"
        QT_MOC_LITERAL(314, 11),  // "roomCreated"
        QT_MOC_LITERAL(326, 8),  // "roomLeft"
        QT_MOC_LITERAL(335, 16),  // "roomListReceived"
        QT_MOC_LITERAL(352, 33),  // "QList<std::pair<QString,QStri..."
        QT_MOC_LITERAL(386, 5),  // "rooms"
        QT_MOC_LITERAL(392, 9),  // "roomError"
        QT_MOC_LITERAL(402, 12),  // "errorMessage"
        QT_MOC_LITERAL(415, 11),  // "onConnected"
        QT_MOC_LITERAL(427, 14),  // "onDisconnected"
        QT_MOC_LITERAL(442, 21),  // "onTextMessageReceived"
        QT_MOC_LITERAL(464, 15),  // "onErrorOccurred"
        QT_MOC_LITERAL(480, 28),  // "QAbstractSocket::SocketError"
        QT_MOC_LITERAL(509, 13)   // "sendHeartbeat"
    },
    "WebSocketManager",
    "connected",
    "",
    "disconnected",
    "connectionError",
    "error",
    "userJoined",
    "userId",
    "userName",
    "UserRole",
    "role",
    "userLeft",
    "drawingOperationReceived",
    "DrawingOperation",
    "operation",
    "clearSceneReceived",
    "undoRequestReceived",
    "redoRequestReceived",
    "chatMessageReceived",
    "message",
    "userRoleChanged",
    "newRole",
    "joinedRoom",
    "roomId",
    "roomJoined",
    "roomName",
    "roomCreated",
    "roomLeft",
    "roomListReceived",
    "QList<std::pair<QString,QString>>",
    "rooms",
    "roomError",
    "errorMessage",
    "onConnected",
    "onDisconnected",
    "onTextMessageReceived",
    "onErrorOccurred",
    "QAbstractSocket::SocketError",
    "sendHeartbeat"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWebSocketManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      17,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  146,    2, 0x06,    1 /* Public */,
       3,    0,  147,    2, 0x06,    2 /* Public */,
       4,    1,  148,    2, 0x06,    3 /* Public */,
       6,    3,  151,    2, 0x06,    5 /* Public */,
      11,    1,  158,    2, 0x06,    9 /* Public */,
      12,    1,  161,    2, 0x06,   11 /* Public */,
      15,    0,  164,    2, 0x06,   13 /* Public */,
      16,    0,  165,    2, 0x06,   14 /* Public */,
      17,    0,  166,    2, 0x06,   15 /* Public */,
      18,    2,  167,    2, 0x06,   16 /* Public */,
      20,    2,  172,    2, 0x06,   19 /* Public */,
      22,    2,  177,    2, 0x06,   22 /* Public */,
      24,    2,  182,    2, 0x06,   25 /* Public */,
      26,    2,  187,    2, 0x06,   28 /* Public */,
      27,    1,  192,    2, 0x06,   31 /* Public */,
      28,    1,  195,    2, 0x06,   33 /* Public */,
      31,    1,  198,    2, 0x06,   35 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      33,    0,  201,    2, 0x08,   37 /* Private */,
      34,    0,  202,    2, 0x08,   38 /* Private */,
      35,    1,  203,    2, 0x08,   39 /* Private */,
      36,    1,  206,    2, 0x08,   41 /* Private */,
      38,    0,  209,    2, 0x08,   43 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 9,    7,    8,   10,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   19,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 9,    7,   21,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   23,    7,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   23,   25,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   23,   25,
    QMetaType::Void, QMetaType::QString,   23,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void, QMetaType::QString,   32,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   19,
    QMetaType::Void, 0x80000000 | 37,    5,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject WebSocketManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSWebSocketManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWebSocketManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWebSocketManagerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WebSocketManager, std::true_type>,
        // method 'connected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'disconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'connectionError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'userJoined'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<UserRole, std::false_type>,
        // method 'userLeft'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'drawingOperationReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const DrawingOperation &, std::false_type>,
        // method 'clearSceneReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'undoRequestReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'redoRequestReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'chatMessageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'userRoleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<UserRole, std::false_type>,
        // method 'joinedRoom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'roomJoined'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'roomCreated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'roomLeft'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'roomListReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QPair<QString,QString>> &, std::false_type>,
        // method 'roomError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTextMessageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onErrorOccurred'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>,
        // method 'sendHeartbeat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void WebSocketManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WebSocketManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connected(); break;
        case 1: _t->disconnected(); break;
        case 2: _t->connectionError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->userJoined((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<UserRole>>(_a[3]))); break;
        case 4: _t->userLeft((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->drawingOperationReceived((*reinterpret_cast< std::add_pointer_t<DrawingOperation>>(_a[1]))); break;
        case 6: _t->clearSceneReceived(); break;
        case 7: _t->undoRequestReceived(); break;
        case 8: _t->redoRequestReceived(); break;
        case 9: _t->chatMessageReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->userRoleChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<UserRole>>(_a[2]))); break;
        case 11: _t->joinedRoom((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 12: _t->roomJoined((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 13: _t->roomCreated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 14: _t->roomLeft((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->roomListReceived((*reinterpret_cast< std::add_pointer_t<QList<std::pair<QString,QString>>>>(_a[1]))); break;
        case 16: _t->roomError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->onConnected(); break;
        case 18: _t->onDisconnected(); break;
        case 19: _t->onTextMessageReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->onErrorOccurred((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 21: _t->sendHeartbeat(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WebSocketManager::*)();
            if (_t _q_method = &WebSocketManager::connected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WebSocketManager::*)();
            if (_t _q_method = &WebSocketManager::disconnected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WebSocketManager::*)(const QString & );
            if (_t _q_method = &WebSocketManager::connectionError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WebSocketManager::*)(const QString & , const QString & , UserRole );
            if (_t _q_method = &WebSocketManager::userJoined; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WebSocketManager::*)(const QString & );
            if (_t _q_method = &WebSocketManager::userLeft; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WebSocketManager::*)(const DrawingOperation & );
            if (_t _q_method = &WebSocketManager::drawingOperationReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (WebSocketManager::*)();
            if (_t _q_method = &WebSocketManager::clearSceneReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (WebSocketManager::*)();
            if (_t _q_method = &WebSocketManager::undoRequestReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (WebSocketManager::*)();
            if (_t _q_method = &WebSocketManager::redoRequestReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (WebSocketManager::*)(const QString & , const QString & );
            if (_t _q_method = &WebSocketManager::chatMessageReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (WebSocketManager::*)(const QString & , UserRole );
            if (_t _q_method = &WebSocketManager::userRoleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (WebSocketManager::*)(const QString & , const QString & );
            if (_t _q_method = &WebSocketManager::joinedRoom; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (WebSocketManager::*)(const QString & , const QString & );
            if (_t _q_method = &WebSocketManager::roomJoined; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (WebSocketManager::*)(const QString & , const QString & );
            if (_t _q_method = &WebSocketManager::roomCreated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (WebSocketManager::*)(const QString & );
            if (_t _q_method = &WebSocketManager::roomLeft; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (WebSocketManager::*)(const QList<QPair<QString,QString>> & );
            if (_t _q_method = &WebSocketManager::roomListReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (WebSocketManager::*)(const QString & );
            if (_t _q_method = &WebSocketManager::roomError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
    }
}

const QMetaObject *WebSocketManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebSocketManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWebSocketManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WebSocketManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void WebSocketManager::connected()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WebSocketManager::disconnected()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WebSocketManager::connectionError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WebSocketManager::userJoined(const QString & _t1, const QString & _t2, UserRole _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WebSocketManager::userLeft(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WebSocketManager::drawingOperationReceived(const DrawingOperation & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WebSocketManager::clearSceneReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void WebSocketManager::undoRequestReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void WebSocketManager::redoRequestReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void WebSocketManager::chatMessageReceived(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void WebSocketManager::userRoleChanged(const QString & _t1, UserRole _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void WebSocketManager::joinedRoom(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void WebSocketManager::roomJoined(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void WebSocketManager::roomCreated(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void WebSocketManager::roomLeft(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void WebSocketManager::roomListReceived(const QList<QPair<QString,QString>> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void WebSocketManager::roomError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}
QT_WARNING_POP
