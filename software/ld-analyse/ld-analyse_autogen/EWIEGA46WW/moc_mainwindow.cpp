/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../tools/ld-analyse/mainwindow.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN10MainWindowE_t {};
} // unnamed namespace

template <> constexpr inline auto MainWindow::qt_create_metaobjectdata<qt_meta_tag_ZN10MainWindowE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "MainWindow",
        "on_actionExit_triggered",
        "",
        "on_actionOpen_TBC_file_triggered",
        "on_actionReload_TBC_triggered",
        "on_actionSave_JSON_triggered",
        "on_actionLine_scope_triggered",
        "on_actionVectorscope_triggered",
        "on_actionAbout_ld_analyse_triggered",
        "on_actionVBI_triggered",
        "on_actionDropout_analysis_triggered",
        "on_actionVisible_Dropout_analysis_triggered",
        "on_actionSNR_analysis_triggered",
        "on_actionWhite_SNR_analysis_triggered",
        "on_actionSave_frame_as_PNG_triggered",
        "on_actionZoom_In_triggered",
        "on_actionZoom_Out_triggered",
        "on_actionZoom_1x_triggered",
        "on_actionZoom_2x_triggered",
        "on_actionZoom_3x_triggered",
        "on_actionClosed_Captions_triggered",
        "on_actionVideo_parameters_triggered",
        "on_actionChroma_decoder_configuration_triggered",
        "on_previousPushButton_clicked",
        "on_nextPushButton_clicked",
        "on_endPushButton_clicked",
        "on_startPushButton_clicked",
        "on_posNumberSpinBox_editingFinished",
        "on_posHorizontalSlider_valueChanged",
        "value",
        "on_videoPushButton_clicked",
        "on_aspectPushButton_clicked",
        "on_dropoutsPushButton_clicked",
        "on_sourcesPushButton_clicked",
        "on_viewPushButton_clicked",
        "on_fieldOrderPushButton_clicked",
        "on_zoomInPushButton_clicked",
        "on_zoomOutPushButton_clicked",
        "on_originalSizePushButton_clicked",
        "on_stretchFieldButton_clicked",
        "on_mouseModePushButton_clicked",
        "on_toggleAutoResize_toggled",
        "checked",
        "scopeCoordsChangedSignalHandler",
        "xCoord",
        "yCoord",
        "vectorscopeChangedSignalHandler",
        "mousePressEvent",
        "QMouseEvent*",
        "event",
        "mouseMoveEvent",
        "videoParametersChangedSignalHandler",
        "LdDecodeMetaData::VideoParameters",
        "videoParameters",
        "chromaDecoderConfigChangedSignalHandler",
        "on_busy",
        "infoMessage",
        "on_finishedLoading",
        "success",
        "on_finishedSaving",
        "resize_on_aspect"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_actionExit_triggered'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionOpen_TBC_file_triggered'
        QtMocHelpers::SlotData<void()>(3, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionReload_TBC_triggered'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSave_JSON_triggered'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionLine_scope_triggered'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionVectorscope_triggered'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionAbout_ld_analyse_triggered'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionVBI_triggered'
        QtMocHelpers::SlotData<void()>(9, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionDropout_analysis_triggered'
        QtMocHelpers::SlotData<void()>(10, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionVisible_Dropout_analysis_triggered'
        QtMocHelpers::SlotData<void()>(11, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSNR_analysis_triggered'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionWhite_SNR_analysis_triggered'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionSave_frame_as_PNG_triggered'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionZoom_In_triggered'
        QtMocHelpers::SlotData<void()>(15, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionZoom_Out_triggered'
        QtMocHelpers::SlotData<void()>(16, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionZoom_1x_triggered'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionZoom_2x_triggered'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionZoom_3x_triggered'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionClosed_Captions_triggered'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionVideo_parameters_triggered'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_actionChroma_decoder_configuration_triggered'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_previousPushButton_clicked'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_nextPushButton_clicked'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_endPushButton_clicked'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_startPushButton_clicked'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_posNumberSpinBox_editingFinished'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_posHorizontalSlider_valueChanged'
        QtMocHelpers::SlotData<void(int)>(28, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 29 },
        }}),
        // Slot 'on_videoPushButton_clicked'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_aspectPushButton_clicked'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_dropoutsPushButton_clicked'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_sourcesPushButton_clicked'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_viewPushButton_clicked'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_fieldOrderPushButton_clicked'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_zoomInPushButton_clicked'
        QtMocHelpers::SlotData<void()>(36, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_zoomOutPushButton_clicked'
        QtMocHelpers::SlotData<void()>(37, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_originalSizePushButton_clicked'
        QtMocHelpers::SlotData<void()>(38, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_stretchFieldButton_clicked'
        QtMocHelpers::SlotData<void()>(39, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_mouseModePushButton_clicked'
        QtMocHelpers::SlotData<void()>(40, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_toggleAutoResize_toggled'
        QtMocHelpers::SlotData<void(bool)>(41, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 42 },
        }}),
        // Slot 'scopeCoordsChangedSignalHandler'
        QtMocHelpers::SlotData<void(qint32, qint32)>(43, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 44 }, { QMetaType::Int, 45 },
        }}),
        // Slot 'vectorscopeChangedSignalHandler'
        QtMocHelpers::SlotData<void()>(46, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'mousePressEvent'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(47, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 48, 49 },
        }}),
        // Slot 'mouseMoveEvent'
        QtMocHelpers::SlotData<void(QMouseEvent *)>(50, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 48, 49 },
        }}),
        // Slot 'videoParametersChangedSignalHandler'
        QtMocHelpers::SlotData<void(const LdDecodeMetaData::VideoParameters &)>(51, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { 0x80000000 | 52, 53 },
        }}),
        // Slot 'chromaDecoderConfigChangedSignalHandler'
        QtMocHelpers::SlotData<void()>(54, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_busy'
        QtMocHelpers::SlotData<void(QString)>(55, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 56 },
        }}),
        // Slot 'on_finishedLoading'
        QtMocHelpers::SlotData<void(bool)>(57, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 58 },
        }}),
        // Slot 'on_finishedSaving'
        QtMocHelpers::SlotData<void(bool)>(59, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Bool, 58 },
        }}),
        // Slot 'resize_on_aspect'
        QtMocHelpers::SlotData<void()>(60, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<MainWindow, qt_meta_tag_ZN10MainWindowE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN10MainWindowE_t>.metaTypes,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MainWindow *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_actionExit_triggered(); break;
        case 1: _t->on_actionOpen_TBC_file_triggered(); break;
        case 2: _t->on_actionReload_TBC_triggered(); break;
        case 3: _t->on_actionSave_JSON_triggered(); break;
        case 4: _t->on_actionLine_scope_triggered(); break;
        case 5: _t->on_actionVectorscope_triggered(); break;
        case 6: _t->on_actionAbout_ld_analyse_triggered(); break;
        case 7: _t->on_actionVBI_triggered(); break;
        case 8: _t->on_actionDropout_analysis_triggered(); break;
        case 9: _t->on_actionVisible_Dropout_analysis_triggered(); break;
        case 10: _t->on_actionSNR_analysis_triggered(); break;
        case 11: _t->on_actionWhite_SNR_analysis_triggered(); break;
        case 12: _t->on_actionSave_frame_as_PNG_triggered(); break;
        case 13: _t->on_actionZoom_In_triggered(); break;
        case 14: _t->on_actionZoom_Out_triggered(); break;
        case 15: _t->on_actionZoom_1x_triggered(); break;
        case 16: _t->on_actionZoom_2x_triggered(); break;
        case 17: _t->on_actionZoom_3x_triggered(); break;
        case 18: _t->on_actionClosed_Captions_triggered(); break;
        case 19: _t->on_actionVideo_parameters_triggered(); break;
        case 20: _t->on_actionChroma_decoder_configuration_triggered(); break;
        case 21: _t->on_previousPushButton_clicked(); break;
        case 22: _t->on_nextPushButton_clicked(); break;
        case 23: _t->on_endPushButton_clicked(); break;
        case 24: _t->on_startPushButton_clicked(); break;
        case 25: _t->on_posNumberSpinBox_editingFinished(); break;
        case 26: _t->on_posHorizontalSlider_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 27: _t->on_videoPushButton_clicked(); break;
        case 28: _t->on_aspectPushButton_clicked(); break;
        case 29: _t->on_dropoutsPushButton_clicked(); break;
        case 30: _t->on_sourcesPushButton_clicked(); break;
        case 31: _t->on_viewPushButton_clicked(); break;
        case 32: _t->on_fieldOrderPushButton_clicked(); break;
        case 33: _t->on_zoomInPushButton_clicked(); break;
        case 34: _t->on_zoomOutPushButton_clicked(); break;
        case 35: _t->on_originalSizePushButton_clicked(); break;
        case 36: _t->on_stretchFieldButton_clicked(); break;
        case 37: _t->on_mouseModePushButton_clicked(); break;
        case 38: _t->on_toggleAutoResize_toggled((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 39: _t->scopeCoordsChangedSignalHandler((*reinterpret_cast<std::add_pointer_t<qint32>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qint32>>(_a[2]))); break;
        case 40: _t->vectorscopeChangedSignalHandler(); break;
        case 41: _t->mousePressEvent((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 42: _t->mouseMoveEvent((*reinterpret_cast<std::add_pointer_t<QMouseEvent*>>(_a[1]))); break;
        case 43: _t->videoParametersChangedSignalHandler((*reinterpret_cast<std::add_pointer_t<LdDecodeMetaData::VideoParameters>>(_a[1]))); break;
        case 44: _t->chromaDecoderConfigChangedSignalHandler(); break;
        case 45: _t->on_busy((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 46: _t->on_finishedLoading((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 47: _t->on_finishedSaving((*reinterpret_cast<std::add_pointer_t<bool>>(_a[1]))); break;
        case 48: _t->resize_on_aspect(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN10MainWindowE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 49)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 49;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 49)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 49;
    }
    return _id;
}
QT_WARNING_POP
