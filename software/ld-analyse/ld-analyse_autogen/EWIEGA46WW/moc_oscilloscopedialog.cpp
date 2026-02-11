/****************************************************************************
** Meta object code from reading C++ file 'oscilloscopedialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../tools/ld-analyse/oscilloscopedialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'oscilloscopedialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.1. It"
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
struct qt_meta_tag_ZN18OscilloscopeDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto OscilloscopeDialog::qt_create_metaobjectdata<qt_meta_tag_ZN18OscilloscopeDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "OscilloscopeDialog",
        "scopeCoordsChanged",
        "",
        "xCoord",
        "yCoord",
        "scopeLevelSelect",
        "value",
        "on_previousPushButton_clicked",
        "on_nextPushButton_clicked",
        "on_xCoordSpinBox_valueChanged",
        "arg1",
        "on_yCoordSpinBox_valueChanged",
        "on_YCcheckBox_clicked",
        "on_YcheckBox_clicked",
        "on_CcheckBox_clicked",
        "on_dropoutsCheckBox_clicked",
        "mousePressEvent",
        "QMouseEvent*",
        "event",
        "mouseMoveEvent"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'scopeCoordsChanged'
        QtMocHelpers::SignalData<void(qint32, qint32)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Int, 4 },
        }}),
        // Signal 'scopeLevelSelect'
        QtMocHelpers::SignalData<void(qint32)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Slot 'on_previousPushButton_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_nextPushButton_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_xCoordSpinBox_valueChanged'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Slot 'on_yCoordSpinBox_valueChanged'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Slot 'on_YCcheckBox_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_YcheckBox_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_CcheckBox_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_dropoutsCheckBox_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'mousePressEvent'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(16, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
        // Slot 'mouseMoveEvent'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(19, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 17, 18 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<OscilloscopeDialog, qt_meta_tag_ZN18OscilloscopeDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject OscilloscopeDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18OscilloscopeDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18OscilloscopeDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN18OscilloscopeDialogE_t>.metaTypes,
    nullptr
} };

void OscilloscopeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<OscilloscopeDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->scopeCoordsChanged((*reinterpret_cast<std::add_pointer_t<qint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qint32>>(_a[2]))); break;
        case 1: _t->scopeLevelSelect((*reinterpret_cast<std::add_pointer_t<qint32>>(_a[1]))); break;
        case 2: _t->on_previousPushButton_clicked(); break;
        case 3: _t->on_nextPushButton_clicked(); break;
        case 4: _t->on_xCoordSpinBox_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_yCoordSpinBox_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_YCcheckBox_clicked(); break;
        case 7: _t->on_YcheckBox_clicked(); break;
        case 8: _t->on_CcheckBox_clicked(); break;
        case 9: _t->on_dropoutsCheckBox_clicked(); break;
        case 10: _t->mousePressEvent((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 11: _t->mouseMoveEvent((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (OscilloscopeDialog::*)(qint32 , qint32 )>(_a, &OscilloscopeDialog::scopeCoordsChanged, 0))
            return;
        if (QtMocHelpers::indexOfMethod<void (OscilloscopeDialog::*)(qint32 )>(_a, &OscilloscopeDialog::scopeLevelSelect, 1))
            return;
    }
}

const QMetaObject *OscilloscopeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OscilloscopeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN18OscilloscopeDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OscilloscopeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void OscilloscopeDialog::scopeCoordsChanged(qint32 _t1, qint32 _t2)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2);
}

// SIGNAL 1
void OscilloscopeDialog::scopeLevelSelect(qint32 _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 1, nullptr, _t1);
}
QT_WARNING_POP
