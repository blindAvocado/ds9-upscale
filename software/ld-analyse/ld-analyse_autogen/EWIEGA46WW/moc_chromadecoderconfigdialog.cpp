/****************************************************************************
** Meta object code from reading C++ file 'chromadecoderconfigdialog.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../tools/ld-analyse/chromadecoderconfigdialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chromadecoderconfigdialog.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN25ChromaDecoderConfigDialogE_t {};
} // unnamed namespace

template <> constexpr inline auto ChromaDecoderConfigDialog::qt_create_metaobjectdata<qt_meta_tag_ZN25ChromaDecoderConfigDialogE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "ChromaDecoderConfigDialog",
        "chromaDecoderConfigChanged",
        "",
        "updateSourceMode",
        "TbcSource::SourceMode",
        "mode",
        "on_chromaGainHorizontalSlider_valueChanged",
        "value",
        "on_chromaPhaseHorizontalSlider_valueChanged",
        "on_enableYNRCheckBox_clicked",
        "on_enableYCCombineCheckBox_clicked",
        "on_palFilterButtonGroup_buttonClicked",
        "QAbstractButton*",
        "button",
        "on_thresholdHorizontalSlider_valueChanged",
        "on_showFFTsCheckBox_clicked",
        "on_simplePALCheckBox_clicked",
        "on_ntscFilterButtonGroup_buttonClicked",
        "on_phaseCompCheckBox_clicked",
        "on_adaptiveCheckBox_clicked",
        "on_showMapCheckBox_clicked",
        "on_adaptThresholdHorizontalSlider_valueChanged",
        "on_chromaWeightHorizontalSlider_valueChanged",
        "on_cNRHorizontalSlider_valueChanged",
        "on_yNRHorizontalSlider_valueChanged"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'chromaDecoderConfigChanged'
        QtMocHelpers::SignalData<void()>(1, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'updateSourceMode'
        QtMocHelpers::SlotData<void(TbcSource::SourceMode)>(3, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 4, 5 },
        }}),
        // Slot 'on_chromaGainHorizontalSlider_valueChanged'
        QtMocHelpers::SlotData<void(int)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'on_chromaPhaseHorizontalSlider_valueChanged'
        QtMocHelpers::SlotData<void(int)>(8, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'on_enableYNRCheckBox_clicked'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_enableYCCombineCheckBox_clicked'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_palFilterButtonGroup_buttonClicked'
        QtMocHelpers::SlotData<void(QAbstractButton *)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'on_thresholdHorizontalSlider_valueChanged'
        QtMocHelpers::SlotData<void(int)>(14, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'on_showFFTsCheckBox_clicked'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_simplePALCheckBox_clicked'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_ntscFilterButtonGroup_buttonClicked'
        QtMocHelpers::SlotData<void(QAbstractButton *)>(17, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 12, 13 },
        }}),
        // Slot 'on_phaseCompCheckBox_clicked'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_adaptiveCheckBox_clicked'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_showMapCheckBox_clicked'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_adaptThresholdHorizontalSlider_valueChanged'
        QtMocHelpers::SlotData<void(int)>(21, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'on_chromaWeightHorizontalSlider_valueChanged'
        QtMocHelpers::SlotData<void(int)>(22, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'on_cNRHorizontalSlider_valueChanged'
        QtMocHelpers::SlotData<void(int)>(23, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
        // Slot 'on_yNRHorizontalSlider_valueChanged'
        QtMocHelpers::SlotData<void(int)>(24, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 7 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<ChromaDecoderConfigDialog, qt_meta_tag_ZN25ChromaDecoderConfigDialogE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject ChromaDecoderConfigDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25ChromaDecoderConfigDialogE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25ChromaDecoderConfigDialogE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN25ChromaDecoderConfigDialogE_t>.metaTypes,
    nullptr
} };

void ChromaDecoderConfigDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<ChromaDecoderConfigDialog *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->chromaDecoderConfigChanged(); break;
        case 1: _t->updateSourceMode((*reinterpret_cast<std::add_pointer_t<TbcSource::SourceMode>>(_a[1]))); break;
        case 2: _t->on_chromaGainHorizontalSlider_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_chromaPhaseHorizontalSlider_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->on_enableYNRCheckBox_clicked(); break;
        case 5: _t->on_enableYCCombineCheckBox_clicked(); break;
        case 6: _t->on_palFilterButtonGroup_buttonClicked((*reinterpret_cast<std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 7: _t->on_thresholdHorizontalSlider_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->on_showFFTsCheckBox_clicked(); break;
        case 9: _t->on_simplePALCheckBox_clicked(); break;
        case 10: _t->on_ntscFilterButtonGroup_buttonClicked((*reinterpret_cast<std::add_pointer_t<QAbstractButton*>>(_a[1]))); break;
        case 11: _t->on_phaseCompCheckBox_clicked(); break;
        case 12: _t->on_adaptiveCheckBox_clicked(); break;
        case 13: _t->on_showMapCheckBox_clicked(); break;
        case 14: _t->on_adaptThresholdHorizontalSlider_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->on_chromaWeightHorizontalSlider_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->on_cNRHorizontalSlider_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->on_yNRHorizontalSlider_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractButton* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractButton* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (ChromaDecoderConfigDialog::*)()>(_a, &ChromaDecoderConfigDialog::chromaDecoderConfigChanged, 0))
            return;
    }
}

const QMetaObject *ChromaDecoderConfigDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChromaDecoderConfigDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN25ChromaDecoderConfigDialogE_t>.strings))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ChromaDecoderConfigDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void ChromaDecoderConfigDialog::chromaDecoderConfigChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
