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
    "joinedRoom",
    "roomId",
    "userId",
    "userJoined",
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
    "onConnected",
    "onDisconnected",
    "onTextMessageReceived",
    "onErrorOccurred",
    "QAbstractSocket::SocketError",
    "sendHeartbeat"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSWebSocketManagerENDCLASS_t {
    uint offsetsAndSizes[60];
    char stringdata0[17];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[16];
    char stringdata5[6];
    char stringdata6[11];
    char stringdata7[7];
    char stringdata8[7];
    char stringdata9[11];
    char stringdata10[9];
    char stringdata11[9];
    char stringdata12[5];
    char stringdata13[9];
    char stringdata14[25];
    char stringdata15[17];
    char stringdata16[10];
    char stringdata17[19];
    char stringdata18[20];
    char stringdata19[20];
    char stringdata20[20];
    char stringdata21[8];
    char stringdata22[16];
    char stringdata23[8];
    char stringdata24[12];
    char stringdata25[15];
    char stringdata26[22];
    char stringdata27[16];
    char stringdata28[29];
    char stringdata29[14];
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
        QT_MOC_LITERAL(63, 10),  // "joinedRoom"
        QT_MOC_LITERAL(74, 6),  // "roomId"
        QT_MOC_LITERAL(81, 6),  // "userId"
        QT_MOC_LITERAL(88, 10),  // "userJoined"
        QT_MOC_LITERAL(99, 8),  // "userName"
        QT_MOC_LITERAL(108, 8),  // "UserRole"
        QT_MOC_LITERAL(117, 4),  // "role"
        QT_MOC_LITERAL(122, 8),  // "userLeft"
        QT_MOC_LITERAL(131, 24),  // "drawingOperationReceived"
        QT_MOC_LITERAL(156, 16),  // "DrawingOperation"
        QT_MOC_LITERAL(173, 9),  // "operation"
        QT_MOC_LITERAL(183, 18),  // "clearSceneReceived"
        QT_MOC_LITERAL(202, 19),  // "undoRequestReceived"
        QT_MOC_LITERAL(222, 19),  // "redoRequestReceived"
        QT_MOC_LITERAL(242, 19),  // "chatMessageReceived"
        QT_MOC_LITERAL(262, 7),  // "message"
        QT_MOC_LITERAL(270, 15),  // "userRoleChanged"
        QT_MOC_LITERAL(286, 7),  // "newRole"
        QT_MOC_LITERAL(294, 11),  // "onConnected"
        QT_MOC_LITERAL(306, 14),  // "onDisconnected"
        QT_MOC_LITERAL(321, 21),  // "onTextMessageReceived"
        QT_MOC_LITERAL(343, 15),  // "onErrorOccurred"
        QT_MOC_LITERAL(359, 28),  // "QAbstractSocket::SocketError"
        QT_MOC_LITERAL(388, 13)   // "sendHeartbeat"
    },
    "WebSocketManager",
    "connected",
    "",
    "disconnected",
    "connectionError",
    "error",
    "joinedRoom",
    "roomId",
    "userId",
    "userJoined",
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
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  116,    2, 0x06,    1 /* Public */,
       3,    0,  117,    2, 0x06,    2 /* Public */,
       4,    1,  118,    2, 0x06,    3 /* Public */,
       6,    2,  121,    2, 0x06,    5 /* Public */,
       9,    3,  126,    2, 0x06,    8 /* Public */,
      13,    1,  133,    2, 0x06,   12 /* Public */,
      14,    1,  136,    2, 0x06,   14 /* Public */,
      17,    0,  139,    2, 0x06,   16 /* Public */,
      18,    0,  140,    2, 0x06,   17 /* Public */,
      19,    0,  141,    2, 0x06,   18 /* Public */,
      20,    2,  142,    2, 0x06,   19 /* Public */,
      22,    2,  147,    2, 0x06,   22 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      24,    0,  152,    2, 0x08,   25 /* Private */,
      25,    0,  153,    2, 0x08,   26 /* Private */,
      26,    1,  154,    2, 0x08,   27 /* Private */,
      27,    1,  157,    2, 0x08,   29 /* Private */,
      29,    0,  160,    2, 0x08,   31 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 11,    8,   10,   12,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    8,   21,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 11,    8,   23,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, 0x80000000 | 28,    5,
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
        // method 'joinedRoom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
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
        case 3: _t->joinedRoom((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->userJoined((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<UserRole>>(_a[3]))); break;
        case 5: _t->userLeft((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->drawingOperationReceived((*reinterpret_cast< std::add_pointer_t<DrawingOperation>>(_a[1]))); break;
        case 7: _t->clearSceneReceived(); break;
        case 8: _t->undoRequestReceived(); break;
        case 9: _t->redoRequestReceived(); break;
        case 10: _t->chatMessageReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 11: _t->userRoleChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<UserRole>>(_a[2]))); break;
        case 12: _t->onConnected(); break;
        case 13: _t->onDisconnected(); break;
        case 14: _t->onTextMessageReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->onErrorOccurred((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 16: _t->sendHeartbeat(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 15:
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
            using _t = void (WebSocketManager::*)(const QString & , const QString & );
            if (_t _q_method = &WebSocketManager::joinedRoom; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WebSocketManager::*)(const QString & , const QString & , UserRole );
            if (_t _q_method = &WebSocketManager::userJoined; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WebSocketManager::*)(const QString & );
            if (_t _q_method = &WebSocketManager::userLeft; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (WebSocketManager::*)(const DrawingOperation & );
            if (_t _q_method = &WebSocketManager::drawingOperationReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (WebSocketManager::*)();
            if (_t _q_method = &WebSocketManager::clearSceneReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (WebSocketManager::*)();
            if (_t _q_method = &WebSocketManager::undoRequestReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (WebSocketManager::*)();
            if (_t _q_method = &WebSocketManager::redoRequestReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (WebSocketManager::*)(const QString & , const QString & );
            if (_t _q_method = &WebSocketManager::chatMessageReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (WebSocketManager::*)(const QString & , UserRole );
            if (_t _q_method = &WebSocketManager::userRoleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
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
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
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
void WebSocketManager::joinedRoom(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void WebSocketManager::userJoined(const QString & _t1, const QString & _t2, UserRole _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WebSocketManager::userLeft(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void WebSocketManager::drawingOperationReceived(const DrawingOperation & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WebSocketManager::clearSceneReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void WebSocketManager::undoRequestReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void WebSocketManager::redoRequestReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void WebSocketManager::chatMessageReceived(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void WebSocketManager::userRoleChanged(const QString & _t1, UserRole _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}
QT_WARNING_POP
