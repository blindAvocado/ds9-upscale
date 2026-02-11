/********************************************************************************
** Form generated from reading UI file 'vectorscopedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VECTORSCOPEDIALOG_H
#define UI_VECTORSCOPEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VectorscopeDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *scopeLabel;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *fieldSelectLabel;
    QRadioButton *fieldSelectAllRadioButton;
    QRadioButton *fieldSelectFirstRadioButton;
    QRadioButton *fieldSelectSecondRadioButton;
    QSpacerItem *verticalSpacer;
    QCheckBox *defocusCheckBox;
    QCheckBox *blendColorCheckBox;
    QSpacerItem *verticalSpacer_2;
    QLabel *graticuleLabel;
    QRadioButton *graticuleNoneRadioButton;
    QRadioButton *graticule75RadioButton;
    QRadioButton *graticule100RadioButton;
    QButtonGroup *fieldSelectButtonGroup;
    QButtonGroup *graticuleButtonGroup;

    void setupUi(QDialog *VectorscopeDialog)
    {
        if (VectorscopeDialog->objectName().isEmpty())
            VectorscopeDialog->setObjectName("VectorscopeDialog");
        VectorscopeDialog->resize(520, 300);
        VectorscopeDialog->setMinimumSize(QSize(520, 300));
        VectorscopeDialog->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout = new QHBoxLayout(VectorscopeDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        scopeLabel = new QLabel(VectorscopeDialog);
        scopeLabel->setObjectName("scopeLabel");

        horizontalLayout->addWidget(scopeLabel);

        frame = new QFrame(VectorscopeDialog);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(120, 0));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        fieldSelectLabel = new QLabel(frame);
        fieldSelectLabel->setObjectName("fieldSelectLabel");

        verticalLayout->addWidget(fieldSelectLabel);

        fieldSelectAllRadioButton = new QRadioButton(frame);
        fieldSelectButtonGroup = new QButtonGroup(VectorscopeDialog);
        fieldSelectButtonGroup->setObjectName("fieldSelectButtonGroup");
        fieldSelectButtonGroup->addButton(fieldSelectAllRadioButton);
        fieldSelectAllRadioButton->setObjectName("fieldSelectAllRadioButton");
        fieldSelectAllRadioButton->setChecked(true);

        verticalLayout->addWidget(fieldSelectAllRadioButton);

        fieldSelectFirstRadioButton = new QRadioButton(frame);
        fieldSelectButtonGroup->addButton(fieldSelectFirstRadioButton);
        fieldSelectFirstRadioButton->setObjectName("fieldSelectFirstRadioButton");

        verticalLayout->addWidget(fieldSelectFirstRadioButton);

        fieldSelectSecondRadioButton = new QRadioButton(frame);
        fieldSelectButtonGroup->addButton(fieldSelectSecondRadioButton);
        fieldSelectSecondRadioButton->setObjectName("fieldSelectSecondRadioButton");

        verticalLayout->addWidget(fieldSelectSecondRadioButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout->addItem(verticalSpacer);

        defocusCheckBox = new QCheckBox(frame);
        defocusCheckBox->setObjectName("defocusCheckBox");

        verticalLayout->addWidget(defocusCheckBox);

        blendColorCheckBox = new QCheckBox(frame);
        blendColorCheckBox->setObjectName("blendColorCheckBox");

        verticalLayout->addWidget(blendColorCheckBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        graticuleLabel = new QLabel(frame);
        graticuleLabel->setObjectName("graticuleLabel");

        verticalLayout->addWidget(graticuleLabel);

        graticuleNoneRadioButton = new QRadioButton(frame);
        graticuleButtonGroup = new QButtonGroup(VectorscopeDialog);
        graticuleButtonGroup->setObjectName("graticuleButtonGroup");
        graticuleButtonGroup->addButton(graticuleNoneRadioButton);
        graticuleNoneRadioButton->setObjectName("graticuleNoneRadioButton");

        verticalLayout->addWidget(graticuleNoneRadioButton);

        graticule75RadioButton = new QRadioButton(frame);
        graticuleButtonGroup->addButton(graticule75RadioButton);
        graticule75RadioButton->setObjectName("graticule75RadioButton");
        graticule75RadioButton->setChecked(true);

        verticalLayout->addWidget(graticule75RadioButton);

        graticule100RadioButton = new QRadioButton(frame);
        graticuleButtonGroup->addButton(graticule100RadioButton);
        graticule100RadioButton->setObjectName("graticule100RadioButton");

        verticalLayout->addWidget(graticule100RadioButton);


        horizontalLayout->addWidget(frame);


        retranslateUi(VectorscopeDialog);

        QMetaObject::connectSlotsByName(VectorscopeDialog);
    } // setupUi

    void retranslateUi(QDialog *VectorscopeDialog)
    {
        VectorscopeDialog->setWindowTitle(QCoreApplication::translate("VectorscopeDialog", "Vectorscope", nullptr));
        scopeLabel->setText(QCoreApplication::translate("VectorscopeDialog", "Graphics go here :)", nullptr));
        fieldSelectLabel->setText(QCoreApplication::translate("VectorscopeDialog", "Field:", nullptr));
        fieldSelectAllRadioButton->setText(QCoreApplication::translate("VectorscopeDialog", "All", nullptr));
        fieldSelectFirstRadioButton->setText(QCoreApplication::translate("VectorscopeDialog", "Field 1", nullptr));
        fieldSelectSecondRadioButton->setText(QCoreApplication::translate("VectorscopeDialog", "Field 2", nullptr));
#if QT_CONFIG(tooltip)
        defocusCheckBox->setToolTip(QCoreApplication::translate("VectorscopeDialog", "<html><head/><body><p>Blur the display to make small points more visible</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        defocusCheckBox->setText(QCoreApplication::translate("VectorscopeDialog", "Defocus", nullptr));
#if QT_CONFIG(tooltip)
        blendColorCheckBox->setToolTip(QCoreApplication::translate("VectorscopeDialog", "<html><head/><body><p>Blend overlapping data points</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        blendColorCheckBox->setText(QCoreApplication::translate("VectorscopeDialog", "Blend colors", nullptr));
        graticuleLabel->setText(QCoreApplication::translate("VectorscopeDialog", "Graticule:", nullptr));
        graticuleNoneRadioButton->setText(QCoreApplication::translate("VectorscopeDialog", "None", nullptr));
        graticule75RadioButton->setText(QCoreApplication::translate("VectorscopeDialog", "75% bars", nullptr));
        graticule100RadioButton->setText(QCoreApplication::translate("VectorscopeDialog", "100% bars", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VectorscopeDialog: public Ui_VectorscopeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VECTORSCOPEDIALOG_H
