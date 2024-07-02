/****************************************************************************
** Meta object code from reading C++ file 'menu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../menu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Menu_t {
    QByteArrayData data[10];
    char stringdata0[108];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Menu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Menu_t qt_meta_stringdata_Menu = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Menu"
QT_MOC_LITERAL(1, 5, 7), // "showMin"
QT_MOC_LITERAL(2, 13, 0), // ""
QT_MOC_LITERAL(3, 14, 7), // "showMax"
QT_MOC_LITERAL(4, 22, 10), // "showNormal"
QT_MOC_LITERAL(5, 33, 9), // "showClose"
QT_MOC_LITERAL(6, 43, 14), // "toRealTimePage"
QT_MOC_LITERAL(7, 58, 17), // "toRecordQueryPage"
QT_MOC_LITERAL(8, 76, 13), // "toControlPage"
QT_MOC_LITERAL(9, 90, 17) // "toFaultDetectPage"

    },
    "Menu\0showMin\0\0showMax\0showNormal\0"
    "showClose\0toRealTimePage\0toRecordQueryPage\0"
    "toControlPage\0toFaultDetectPage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Menu[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    0,   58,    2, 0x06 /* Public */,
       7,    0,   59,    2, 0x06 /* Public */,
       8,    0,   60,    2, 0x06 /* Public */,
       9,    0,   61,    2, 0x06 /* Public */,

 // signals: parameters
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

void Menu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Menu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showMin(); break;
        case 1: _t->showMax(); break;
        case 2: _t->showNormal(); break;
        case 3: _t->showClose(); break;
        case 4: _t->toRealTimePage(); break;
        case 5: _t->toRecordQueryPage(); break;
        case 6: _t->toControlPage(); break;
        case 7: _t->toFaultDetectPage(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Menu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Menu::showMin)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Menu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Menu::showMax)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Menu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Menu::showNormal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Menu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Menu::showClose)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Menu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Menu::toRealTimePage)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Menu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Menu::toRecordQueryPage)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Menu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Menu::toControlPage)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Menu::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Menu::toFaultDetectPage)) {
                *result = 7;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Menu::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Menu.data,
    qt_meta_data_Menu,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Menu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Menu::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Menu.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Menu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void Menu::showMin()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Menu::showMax()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Menu::showNormal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Menu::showClose()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Menu::toRealTimePage()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Menu::toRecordQueryPage()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Menu::toControlPage()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Menu::toFaultDetectPage()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
