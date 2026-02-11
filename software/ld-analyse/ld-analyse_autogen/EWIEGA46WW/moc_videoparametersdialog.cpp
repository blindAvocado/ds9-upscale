/****************************************************************************
** Meta object code from reading C++ file 'videoparametersdialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../tools/ld-analyse/videoparametersdialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'videoparametersdialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN21VideoParametersDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto VideoParametersDialog::qt_create_metaobjectdata<qt_meta_tag_ZN21VideoParametersDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "VideoParametersDialog",
        "videoParametersChanged",
        "",
        "LdDecodeMetaData::VideoParameters",
        "videoParameters",
        "levelSelected",
        "level",
        "on_blackLevelSpinBox_valueChanged",
        "value",
        "on_whiteLevelSpinBox_valueChanged",
        "on_activeVideoStartSpinBox_valueChanged",
        "on_activeVideoWidthSpinBox_valueChanged",
        "on_blackLevelResetButton_clicked",
        "on_blackLevelAltResetButton_clicked",
        "on_whiteLevelResetButton_clicked",
        "on_activeVideoStartResetButton_clicked",
        "on_activeVideoWidthResetButton_clicked",
        "on_aspectRatioButtonGroup_buttonClicked",
        "QAbstractButton*",
        "button"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'videoParametersChanged'
        QtMocHelpers::SignalData<void(const LdDecodeMetaData::VideoParameters &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'levelSelected'
        QtMocHelpers::SlotData<void(qint32)>(5, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 6 },
        }}),
        // Slot 'on_blackLevelSpinBox_valueChanged'
        QtMocHelpers::SlotData<void(int)>(7, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Slot 'on_whiteLevelSpinBox_valueChanged'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Slot 'on_activeVideoStartSpinBox_valueChanged'
        QtMocHelpers::SlotData<void(int)>(10, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Slot 'on_activeVideoWidthSpinBox_valueChanged'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 8 },
        }}),
        // Slot 'on_blackLevelResetButton_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_blackLevelAltResetButton_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_whiteLevelResetButton_clicked'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_activeVideoStartResetButton_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_activeVideoWidthResetButton_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_aspectRatioButtonGroup_buttonClicked'
        QtMocHelpers::SlotData<void(QAbstractButton *)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 18, 19 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<VideoParametersDialog, qt_meta_tag_ZN21VideoParametersDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject VideoParametersDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21VideoParametersDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21VideoParametersDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN21VideoParametersDialogE_t>.metaTypes,
    nullptr
} };

void VideoParametersDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<VideoParametersDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->videoParametersChanged((*reinterpret_cast<std::add_pointer_t<LdDecodeMetaData::VideoParameters>>(_a[1]))); break;
        case 1: _t->levelSelected((*reinterpret_cast<std::add_pointer_t<qint32>>(_a[1]))); break;
        case 2: _t->on_blackLevelSpinBox_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_whiteLevelSpinBox_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_activeVideoStartSpinBox_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_activeVideoWidthSpinBox_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_blackLevelResetButton_clicked(); break;
        case 7: _t->on_blackLevelAltResetButton_clicked(); break;
        case 8: _t->on_whiteLevelResetButton_clicked(); break;
        case 9: _t->on_activeVideoStartResetButton_clicked(); break;
        case 10: _t->on_activeVideoWidthResetButton_clicked(); break;
        case 11: _t->on_aspectRatioButtonGroup_buttonClicked((*reinterpret_cast<std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractButton* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (VideoParametersDialog::*)(const LdDecodeMetaData::VideoParameters & )>(_a, &VideoParametersDialog::videoParametersChanged, 0))
            return;
    }
}

const QMetaObject *VideoParametersDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VideoParametersDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN21VideoParametersDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int VideoParametersDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void VideoParametersDialog::videoParametersChanged(const LdDecodeMetaData::VideoParameters & _t1)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1);
}
QT_WARNING_POP
