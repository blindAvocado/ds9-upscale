/********************************************************************************
** Form generated from reading UI file 'chromadecoderconfigdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHROMADECODERCONFIGDIALOG_H
#define UI_CHROMADECODERCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChromaDecoderConfigDialog
{
public:
    QVBoxLayout *outerVerticalLayout;
    QLabel *chromaGainLabel;
    QSlider *chromaGainHorizontalSlider;
    QLabel *chromaGainValueLabel;
    QLabel *chromaPhaseLabel;
    QSlider *chromaPhaseHorizontalSlider;
    QLabel *chromaPhaseValueLabel;
    QLabel *yNRLabel;
    QSlider *yNRHorizontalSlider;
    QLabel *yNRValueLabel;
    QCheckBox *enableYNRCheckBox;
    QCheckBox *enableYCCombineCheckBox;
    QSpacerItem *verticalSpacer_1;
    QTabWidget *standardTabs;
    QWidget *palTab;
    QVBoxLayout *palVerticalLayout;
    QLabel *palFilterLabel;
    QRadioButton *palMonoRadioButton;
    QRadioButton *palFilterPalColourRadioButton;
    QRadioButton *palFilterTransform2DRadioButton;
    QRadioButton *palFilterTransform3DRadioButton;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer_2;
    QLabel *thresholdLabel;
    QSlider *thresholdHorizontalSlider;
    QLabel *thresholdValueLabel;
    QSpacerItem *verticalSpacer_3;
    QCheckBox *showFFTsCheckBox;
    QCheckBox *simplePALCheckBox;
    QSpacerItem *verticalSpacer_4;
    QWidget *ntscTab;
    QVBoxLayout *ntscVerticalLayout;
    QLabel *ntscFilterLabel;
    QRadioButton *ntscMonoRadioButton;
    QRadioButton *ntscFilter1DRadioButton;
    QRadioButton *ntscFilter2DRadioButton;
    QRadioButton *ntscFilter3DRadioButton;
    QSpacerItem *verticalSpacer_9;
    QCheckBox *phaseCompCheckBox;
    QCheckBox *adaptiveCheckBox;
    QCheckBox *showMapCheckBox;
    QSpacerItem *verticalSpacer_5;
    QLabel *adaptThresholdLabel;
    QSlider *adaptThresholdHorizontalSlider;
    QLabel *adaptThresholdValueLabel;
    QSpacerItem *verticalSpacer_10;
    QLabel *chromaWeightLabel;
    QSlider *chromaWeightHorizontalSlider;
    QLabel *chromaWeightValueLabel;
    QSpacerItem *verticalSpacer_11;
    QLabel *cNRLabel;
    QSlider *cNRHorizontalSlider;
    QLabel *cNRValueLabel;
    QSpacerItem *verticalSpacer;
    QButtonGroup *ntscFilterButtonGroup;
    QButtonGroup *palFilterButtonGroup;

    void setupUi(QDialog *ChromaDecoderConfigDialog)
    {
        if (ChromaDecoderConfigDialog->objectName().isEmpty())
            ChromaDecoderConfigDialog->setObjectName("ChromaDecoderConfigDialog");
        ChromaDecoderConfigDialog->resize(460, 637);
        outerVerticalLayout = new QVBoxLayout(ChromaDecoderConfigDialog);
        outerVerticalLayout->setObjectName("outerVerticalLayout");
        outerVerticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        chromaGainLabel = new QLabel(ChromaDecoderConfigDialog);
        chromaGainLabel->setObjectName("chromaGainLabel");

        outerVerticalLayout->addWidget(chromaGainLabel);

        chromaGainHorizontalSlider = new QSlider(ChromaDecoderConfigDialog);
        chromaGainHorizontalSlider->setObjectName("chromaGainHorizontalSlider");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chromaGainHorizontalSlider->sizePolicy().hasHeightForWidth());
        chromaGainHorizontalSlider->setSizePolicy(sizePolicy);
        chromaGainHorizontalSlider->setMinimumSize(QSize(400, 0));
        chromaGainHorizontalSlider->setMaximum(200);
        chromaGainHorizontalSlider->setOrientation(Qt::Horizontal);

        outerVerticalLayout->addWidget(chromaGainHorizontalSlider);

        chromaGainValueLabel = new QLabel(ChromaDecoderConfigDialog);
        chromaGainValueLabel->setObjectName("chromaGainValueLabel");
        chromaGainValueLabel->setAlignment(Qt::AlignCenter);

        outerVerticalLayout->addWidget(chromaGainValueLabel);

        chromaPhaseLabel = new QLabel(ChromaDecoderConfigDialog);
        chromaPhaseLabel->setObjectName("chromaPhaseLabel");

        outerVerticalLayout->addWidget(chromaPhaseLabel);

        chromaPhaseHorizontalSlider = new QSlider(ChromaDecoderConfigDialog);
        chromaPhaseHorizontalSlider->setObjectName("chromaPhaseHorizontalSlider");
        chromaPhaseHorizontalSlider->setMaximum(200);
        chromaPhaseHorizontalSlider->setOrientation(Qt::Horizontal);

        outerVerticalLayout->addWidget(chromaPhaseHorizontalSlider);

        chromaPhaseValueLabel = new QLabel(ChromaDecoderConfigDialog);
        chromaPhaseValueLabel->setObjectName("chromaPhaseValueLabel");
        chromaPhaseValueLabel->setAlignment(Qt::AlignCenter);

        outerVerticalLayout->addWidget(chromaPhaseValueLabel);

        yNRLabel = new QLabel(ChromaDecoderConfigDialog);
        yNRLabel->setObjectName("yNRLabel");

        outerVerticalLayout->addWidget(yNRLabel);

        yNRHorizontalSlider = new QSlider(ChromaDecoderConfigDialog);
        yNRHorizontalSlider->setObjectName("yNRHorizontalSlider");
        yNRHorizontalSlider->setOrientation(Qt::Horizontal);

        outerVerticalLayout->addWidget(yNRHorizontalSlider);

        yNRValueLabel = new QLabel(ChromaDecoderConfigDialog);
        yNRValueLabel->setObjectName("yNRValueLabel");
        yNRValueLabel->setAlignment(Qt::AlignCenter);

        outerVerticalLayout->addWidget(yNRValueLabel);

        enableYNRCheckBox = new QCheckBox(ChromaDecoderConfigDialog);
        enableYNRCheckBox->setObjectName("enableYNRCheckBox");

        outerVerticalLayout->addWidget(enableYNRCheckBox);

        enableYCCombineCheckBox = new QCheckBox(ChromaDecoderConfigDialog);
        enableYCCombineCheckBox->setObjectName("enableYCCombineCheckBox");

        outerVerticalLayout->addWidget(enableYCCombineCheckBox);

        verticalSpacer_1 = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        outerVerticalLayout->addItem(verticalSpacer_1);

        standardTabs = new QTabWidget(ChromaDecoderConfigDialog);
        standardTabs->setObjectName("standardTabs");
        palTab = new QWidget();
        palTab->setObjectName("palTab");
        palVerticalLayout = new QVBoxLayout(palTab);
        palVerticalLayout->setObjectName("palVerticalLayout");
        palFilterLabel = new QLabel(palTab);
        palFilterLabel->setObjectName("palFilterLabel");

        palVerticalLayout->addWidget(palFilterLabel);

        palMonoRadioButton = new QRadioButton(palTab);
        palFilterButtonGroup = new QButtonGroup(ChromaDecoderConfigDialog);
        palFilterButtonGroup->setObjectName("palFilterButtonGroup");
        palFilterButtonGroup->addButton(palMonoRadioButton);
        palMonoRadioButton->setObjectName("palMonoRadioButton");

        palVerticalLayout->addWidget(palMonoRadioButton);

        palFilterPalColourRadioButton = new QRadioButton(palTab);
        palFilterButtonGroup->addButton(palFilterPalColourRadioButton);
        palFilterPalColourRadioButton->setObjectName("palFilterPalColourRadioButton");

        palVerticalLayout->addWidget(palFilterPalColourRadioButton);

        palFilterTransform2DRadioButton = new QRadioButton(palTab);
        palFilterButtonGroup->addButton(palFilterTransform2DRadioButton);
        palFilterTransform2DRadioButton->setObjectName("palFilterTransform2DRadioButton");

        palVerticalLayout->addWidget(palFilterTransform2DRadioButton);

        palFilterTransform3DRadioButton = new QRadioButton(palTab);
        palFilterButtonGroup->addButton(palFilterTransform3DRadioButton);
        palFilterTransform3DRadioButton->setObjectName("palFilterTransform3DRadioButton");

        palVerticalLayout->addWidget(palFilterTransform3DRadioButton);

        verticalSpacer_7 = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        palVerticalLayout->addItem(verticalSpacer_7);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        palVerticalLayout->addItem(verticalSpacer_2);

        thresholdLabel = new QLabel(palTab);
        thresholdLabel->setObjectName("thresholdLabel");

        palVerticalLayout->addWidget(thresholdLabel);

        thresholdHorizontalSlider = new QSlider(palTab);
        thresholdHorizontalSlider->setObjectName("thresholdHorizontalSlider");
        thresholdHorizontalSlider->setMaximum(100);
        thresholdHorizontalSlider->setOrientation(Qt::Horizontal);

        palVerticalLayout->addWidget(thresholdHorizontalSlider);

        thresholdValueLabel = new QLabel(palTab);
        thresholdValueLabel->setObjectName("thresholdValueLabel");
        thresholdValueLabel->setAlignment(Qt::AlignCenter);

        palVerticalLayout->addWidget(thresholdValueLabel);

        verticalSpacer_3 = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        palVerticalLayout->addItem(verticalSpacer_3);

        showFFTsCheckBox = new QCheckBox(palTab);
        showFFTsCheckBox->setObjectName("showFFTsCheckBox");

        palVerticalLayout->addWidget(showFFTsCheckBox);

        simplePALCheckBox = new QCheckBox(palTab);
        simplePALCheckBox->setObjectName("simplePALCheckBox");

        palVerticalLayout->addWidget(simplePALCheckBox);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        palVerticalLayout->addItem(verticalSpacer_4);

        standardTabs->addTab(palTab, QString());
        ntscTab = new QWidget();
        ntscTab->setObjectName("ntscTab");
        ntscVerticalLayout = new QVBoxLayout(ntscTab);
        ntscVerticalLayout->setObjectName("ntscVerticalLayout");
        ntscFilterLabel = new QLabel(ntscTab);
        ntscFilterLabel->setObjectName("ntscFilterLabel");

        ntscVerticalLayout->addWidget(ntscFilterLabel);

        ntscMonoRadioButton = new QRadioButton(ntscTab);
        ntscFilterButtonGroup = new QButtonGroup(ChromaDecoderConfigDialog);
        ntscFilterButtonGroup->setObjectName("ntscFilterButtonGroup");
        ntscFilterButtonGroup->addButton(ntscMonoRadioButton);
        ntscMonoRadioButton->setObjectName("ntscMonoRadioButton");

        ntscVerticalLayout->addWidget(ntscMonoRadioButton);

        ntscFilter1DRadioButton = new QRadioButton(ntscTab);
        ntscFilterButtonGroup->addButton(ntscFilter1DRadioButton);
        ntscFilter1DRadioButton->setObjectName("ntscFilter1DRadioButton");

        ntscVerticalLayout->addWidget(ntscFilter1DRadioButton);

        ntscFilter2DRadioButton = new QRadioButton(ntscTab);
        ntscFilterButtonGroup->addButton(ntscFilter2DRadioButton);
        ntscFilter2DRadioButton->setObjectName("ntscFilter2DRadioButton");

        ntscVerticalLayout->addWidget(ntscFilter2DRadioButton);

        ntscFilter3DRadioButton = new QRadioButton(ntscTab);
        ntscFilterButtonGroup->addButton(ntscFilter3DRadioButton);
        ntscFilter3DRadioButton->setObjectName("ntscFilter3DRadioButton");

        ntscVerticalLayout->addWidget(ntscFilter3DRadioButton);

        verticalSpacer_9 = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        ntscVerticalLayout->addItem(verticalSpacer_9);

        phaseCompCheckBox = new QCheckBox(ntscTab);
        phaseCompCheckBox->setObjectName("phaseCompCheckBox");

        ntscVerticalLayout->addWidget(phaseCompCheckBox);

        adaptiveCheckBox = new QCheckBox(ntscTab);
        adaptiveCheckBox->setObjectName("adaptiveCheckBox");

        ntscVerticalLayout->addWidget(adaptiveCheckBox);

        showMapCheckBox = new QCheckBox(ntscTab);
        showMapCheckBox->setObjectName("showMapCheckBox");

        ntscVerticalLayout->addWidget(showMapCheckBox);

        verticalSpacer_5 = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        ntscVerticalLayout->addItem(verticalSpacer_5);

        adaptThresholdLabel = new QLabel(ntscTab);
        adaptThresholdLabel->setObjectName("adaptThresholdLabel");

        ntscVerticalLayout->addWidget(adaptThresholdLabel);

        adaptThresholdHorizontalSlider = new QSlider(ntscTab);
        adaptThresholdHorizontalSlider->setObjectName("adaptThresholdHorizontalSlider");
        adaptThresholdHorizontalSlider->setOrientation(Qt::Horizontal);

        ntscVerticalLayout->addWidget(adaptThresholdHorizontalSlider);

        adaptThresholdValueLabel = new QLabel(ntscTab);
        adaptThresholdValueLabel->setObjectName("adaptThresholdValueLabel");
        adaptThresholdValueLabel->setAlignment(Qt::AlignCenter);

        ntscVerticalLayout->addWidget(adaptThresholdValueLabel);

        verticalSpacer_10 = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        ntscVerticalLayout->addItem(verticalSpacer_10);

        chromaWeightLabel = new QLabel(ntscTab);
        chromaWeightLabel->setObjectName("chromaWeightLabel");

        ntscVerticalLayout->addWidget(chromaWeightLabel);

        chromaWeightHorizontalSlider = new QSlider(ntscTab);
        chromaWeightHorizontalSlider->setObjectName("chromaWeightHorizontalSlider");
        chromaWeightHorizontalSlider->setOrientation(Qt::Horizontal);

        ntscVerticalLayout->addWidget(chromaWeightHorizontalSlider);

        chromaWeightValueLabel = new QLabel(ntscTab);
        chromaWeightValueLabel->setObjectName("chromaWeightValueLabel");
        chromaWeightValueLabel->setAlignment(Qt::AlignCenter);

        ntscVerticalLayout->addWidget(chromaWeightValueLabel);

        verticalSpacer_11 = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        ntscVerticalLayout->addItem(verticalSpacer_11);

        cNRLabel = new QLabel(ntscTab);
        cNRLabel->setObjectName("cNRLabel");

        ntscVerticalLayout->addWidget(cNRLabel);

        cNRHorizontalSlider = new QSlider(ntscTab);
        cNRHorizontalSlider->setObjectName("cNRHorizontalSlider");
        cNRHorizontalSlider->setOrientation(Qt::Horizontal);

        ntscVerticalLayout->addWidget(cNRHorizontalSlider);

        cNRValueLabel = new QLabel(ntscTab);
        cNRValueLabel->setObjectName("cNRValueLabel");
        cNRValueLabel->setAlignment(Qt::AlignCenter);

        ntscVerticalLayout->addWidget(cNRValueLabel);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        ntscVerticalLayout->addItem(verticalSpacer);

        standardTabs->addTab(ntscTab, QString());

        outerVerticalLayout->addWidget(standardTabs);


        retranslateUi(ChromaDecoderConfigDialog);

        standardTabs->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ChromaDecoderConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *ChromaDecoderConfigDialog)
    {
        ChromaDecoderConfigDialog->setWindowTitle(QCoreApplication::translate("ChromaDecoderConfigDialog", "Chroma Decoder Configuration", nullptr));
        chromaGainLabel->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "Chroma gain:", nullptr));
        chromaGainValueLabel->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "1.0", nullptr));
        chromaPhaseLabel->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "Chroma phase:", nullptr));
        chromaPhaseValueLabel->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "0.0\302\260", nullptr));
        yNRLabel->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "Luma noise reduction:", nullptr));
        yNRValueLabel->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "0.00 IRE", nullptr));
        enableYNRCheckBox->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "Enable luma noise reduction", nullptr));
        enableYCCombineCheckBox->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "Combine Y/C -> CVBS", nullptr));
        palFilterLabel->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "Chroma filter:", nullptr));
        palMonoRadioButton->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "Mono", nullptr));
        palFilterPalColourRadioButton->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "PalColour 2D", nullptr));
        palFilterTransform2DRadioButton->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "Transform PAL 2D", nullptr));
        palFilterTransform3DRadioButton->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "Transform PAL 3D", nullptr));
        thresholdLabel->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "Transform threshold:", nullptr));
        thresholdValueLabel->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "0.4", nullptr));
        showFFTsCheckBox->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "Overlay FFT visualisation", nullptr));
        simplePALCheckBox->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "Use Simple PAL decoder", nullptr));
        standardTabs->setTabText(standardTabs->indexOf(palTab), QCoreApplication::translate("ChromaDecoderConfigDialog", "PAL", nullptr));
        ntscFilterLabel->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "Chroma filter:", nullptr));
        ntscMonoRadioButton->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "Mono", nullptr));
        ntscFilter1DRadioButton->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "1D", nullptr));
        ntscFilter2DRadioButton->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "2D", nullptr));
        ntscFilter3DRadioButton->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "3D", nullptr));
        phaseCompCheckBox->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "Phase compensating decoder", nullptr));
        adaptiveCheckBox->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "Enable adaptive filter", nullptr));
        showMapCheckBox->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "Overlay adaptive filter visualisation", nullptr));
        adaptThresholdLabel->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "Adaptive Filter Threshold:", nullptr));
        adaptThresholdValueLabel->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "1.0", nullptr));
        chromaWeightLabel->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "Chroma Weight:", nullptr));
        chromaWeightValueLabel->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "1.0", nullptr));
        cNRLabel->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "Chroma noise reduction:", nullptr));
        cNRValueLabel->setText(QCoreApplication::translate("ChromaDecoderConfigDialog", "0.00 IRE", nullptr));
        standardTabs->setTabText(standardTabs->indexOf(ntscTab), QCoreApplication::translate("ChromaDecoderConfigDialog", "NTSC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChromaDecoderConfigDialog: public Ui_ChromaDecoderConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHROMADECODERCONFIGDIALOG_H
