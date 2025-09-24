/****************************************************************************
** Meta object code from reading C++ file 'drawingtool.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../drawingtool.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'drawingtool.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDrawingToolENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSDrawingToolENDCLASS = QtMocHelpers::stringData(
    "DrawingTool",
    "toolChanged",
    "",
    "DrawingTool::ToolType",
    "newTool",
    "contentModified",
    "sceneCleared",
    "drawingOperationCreated",
    "DrawingOperation",
    "operation",
    "clearSceneRequested",
    "undoRequested",
    "redoRequested"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDrawingToolENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[12];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[8];
    char stringdata5[16];
    char stringdata6[13];
    char stringdata7[24];
    char stringdata8[17];
    char stringdata9[10];
    char stringdata10[20];
    char stringdata11[14];
    char stringdata12[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDrawingToolENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDrawingToolENDCLASS_t qt_meta_stringdata_CLASSDrawingToolENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "DrawingTool"
        QT_MOC_LITERAL(12, 11),  // "toolChanged"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 21),  // "DrawingTool::ToolType"
        QT_MOC_LITERAL(47, 7),  // "newTool"
        QT_MOC_LITERAL(55, 15),  // "contentModified"
        QT_MOC_LITERAL(71, 12),  // "sceneCleared"
        QT_MOC_LITERAL(84, 23),  // "drawingOperationCreated"
        QT_MOC_LITERAL(108, 16),  // "DrawingOperation"
        QT_MOC_LITERAL(125, 9),  // "operation"
        QT_MOC_LITERAL(135, 19),  // "clearSceneRequested"
        QT_MOC_LITERAL(155, 13),  // "undoRequested"
        QT_MOC_LITERAL(169, 13)   // "redoRequested"
    },
    "DrawingTool",
    "toolChanged",
    "",
    "DrawingTool::ToolType",
    "newTool",
    "contentModified",
    "sceneCleared",
    "drawingOperationCreated",
    "DrawingOperation",
    "operation",
    "clearSceneRequested",
    "undoRequested",
    "redoRequested"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDrawingToolENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x06,    1 /* Public */,
       5,    0,   59,    2, 0x06,    3 /* Public */,
       6,    0,   60,    2, 0x06,    4 /* Public */,
       7,    1,   61,    2, 0x06,    5 /* Public */,
      10,    0,   64,    2, 0x06,    7 /* Public */,
      11,    0,   65,    2, 0x06,    8 /* Public */,
      12,    0,   66,    2, 0x06,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject DrawingTool::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSDrawingToolENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDrawingToolENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDrawingToolENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DrawingTool, std::true_type>,
        // method 'toolChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<DrawingTool::ToolType, std::false_type>,
        // method 'contentModified'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sceneCleared'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'drawingOperationCreated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const DrawingOperation &, std::false_type>,
        // method 'clearSceneRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'undoRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'redoRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void DrawingTool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DrawingTool *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->toolChanged((*reinterpret_cast< std::add_pointer_t<DrawingTool::ToolType>>(_a[1]))); break;
        case 1: _t->contentModified(); break;
        case 2: _t->sceneCleared(); break;
        case 3: _t->drawingOperationCreated((*reinterpret_cast< std::add_pointer_t<DrawingOperation>>(_a[1]))); break;
        case 4: _t->clearSceneRequested(); break;
        case 5: _t->undoRequested(); break;
        case 6: _t->redoRequested(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DrawingTool::*)(DrawingTool::ToolType );
            if (_t _q_method = &DrawingTool::toolChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DrawingTool::*)();
            if (_t _q_method = &DrawingTool::contentModified; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DrawingTool::*)();
            if (_t _q_method = &DrawingTool::sceneCleared; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DrawingTool::*)(const DrawingOperation & );
            if (_t _q_method = &DrawingTool::drawingOperationCreated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DrawingTool::*)();
            if (_t _q_method = &DrawingTool::clearSceneRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DrawingTool::*)();
            if (_t _q_method = &DrawingTool::undoRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DrawingTool::*)();
            if (_t _q_method = &DrawingTool::redoRequested; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
    }
}

const QMetaObject *DrawingTool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DrawingTool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDrawingToolENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DrawingTool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void DrawingTool::toolChanged(DrawingTool::ToolType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void DrawingTool::contentModified()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void DrawingTool::sceneCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void DrawingTool::drawingOperationCreated(const DrawingOperation & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void DrawingTool::clearSceneRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void DrawingTool::undoRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void DrawingTool::redoRequested()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
