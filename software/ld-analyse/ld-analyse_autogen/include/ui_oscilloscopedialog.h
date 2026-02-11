/********************************************************************************
** Form generated from reading UI file 'oscilloscopedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSCILLOSCOPEDIALOG_H
#define UI_OSCILLOSCOPEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OscilloscopeDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *scopeLabel;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QPushButton *previousPushButton;
    QPushButton *nextPushButton;
    QFrame *positionFrame;
    QHBoxLayout *horizontalLayout_2;
    QLabel *xCoordLabel;
    QSpinBox *xCoordSpinBox;
    QLabel *yCoordLabel;
    QSpinBox *yCoordSpinBox;
    QLabel *standardLineLabel;
    QLabel *fieldLineLabel;
    QSpacerItem *verticalSpacer;
    QCheckBox *YCcheckBox;
    QCheckBox *YcheckBox;
    QCheckBox *CcheckBox;
    QCheckBox *dropoutsCheckBox;

    void setupUi(QDialog *OscilloscopeDialog)
    {
        if (OscilloscopeDialog->objectName().isEmpty())
            OscilloscopeDialog->setObjectName("OscilloscopeDialog");
        OscilloscopeDialog->resize(480, 300);
        OscilloscopeDialog->setMinimumSize(QSize(480, 300));
        OscilloscopeDialog->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout = new QHBoxLayout(OscilloscopeDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        scopeLabel = new QLabel(OscilloscopeDialog);
        scopeLabel->setObjectName("scopeLabel");

        horizontalLayout->addWidget(scopeLabel);

        frame = new QFrame(OscilloscopeDialog);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(180, 130));
        frame->setMaximumSize(QSize(180, 16777215));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        previousPushButton = new QPushButton(frame);
        previousPushButton->setObjectName("previousPushButton");
        previousPushButton->setMinimumSize(QSize(50, 0));
        previousPushButton->setMaximumSize(QSize(32767, 16777215));
        previousPushButton->setAutoRepeat(true);

        verticalLayout->addWidget(previousPushButton);

        nextPushButton = new QPushButton(frame);
        nextPushButton->setObjectName("nextPushButton");
        nextPushButton->setMinimumSize(QSize(50, 0));
        nextPushButton->setMaximumSize(QSize(32767, 16777215));
        nextPushButton->setAutoRepeat(true);

        verticalLayout->addWidget(nextPushButton);

        positionFrame = new QFrame(frame);
        positionFrame->setObjectName("positionFrame");
        positionFrame->setFrameShape(QFrame::NoFrame);
        positionFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(positionFrame);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        xCoordLabel = new QLabel(positionFrame);
        xCoordLabel->setObjectName("xCoordLabel");

        horizontalLayout_2->addWidget(xCoordLabel);

        xCoordSpinBox = new QSpinBox(positionFrame);
        xCoordSpinBox->setObjectName("xCoordSpinBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(xCoordSpinBox->sizePolicy().hasHeightForWidth());
        xCoordSpinBox->setSizePolicy(sizePolicy);
        xCoordSpinBox->setMinimumSize(QSize(50, 28));
        xCoordSpinBox->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(xCoordSpinBox);

        yCoordLabel = new QLabel(positionFrame);
        yCoordLabel->setObjectName("yCoordLabel");

        horizontalLayout_2->addWidget(yCoordLabel);

        yCoordSpinBox = new QSpinBox(positionFrame);
        yCoordSpinBox->setObjectName("yCoordSpinBox");
        sizePolicy.setHeightForWidth(yCoordSpinBox->sizePolicy().hasHeightForWidth());
        yCoordSpinBox->setSizePolicy(sizePolicy);
        yCoordSpinBox->setMinimumSize(QSize(50, 28));
        yCoordSpinBox->setMaximumSize(QSize(100, 16777215));

        horizontalLayout_2->addWidget(yCoordSpinBox);


        verticalLayout->addWidget(positionFrame);

        standardLineLabel = new QLabel(frame);
        standardLineLabel->setObjectName("standardLineLabel");

        verticalLayout->addWidget(standardLineLabel);

        fieldLineLabel = new QLabel(frame);
        fieldLineLabel->setObjectName("fieldLineLabel");

        verticalLayout->addWidget(fieldLineLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        YCcheckBox = new QCheckBox(frame);
        YCcheckBox->setObjectName("YCcheckBox");
        YCcheckBox->setChecked(true);

        verticalLayout->addWidget(YCcheckBox);

        YcheckBox = new QCheckBox(frame);
        YcheckBox->setObjectName("YcheckBox");

        verticalLayout->addWidget(YcheckBox);

        CcheckBox = new QCheckBox(frame);
        CcheckBox->setObjectName("CcheckBox");

        verticalLayout->addWidget(CcheckBox);

        dropoutsCheckBox = new QCheckBox(frame);
        dropoutsCheckBox->setObjectName("dropoutsCheckBox");
        dropoutsCheckBox->setChecked(true);

        verticalLayout->addWidget(dropoutsCheckBox);


        horizontalLayout->addWidget(frame);


        retranslateUi(OscilloscopeDialog);

        QMetaObject::connectSlotsByName(OscilloscopeDialog);
    } // setupUi

    void retranslateUi(QDialog *OscilloscopeDialog)
    {
        OscilloscopeDialog->setWindowTitle(QCoreApplication::translate("OscilloscopeDialog", "Scan-line Oscilloscope", nullptr));
        scopeLabel->setText(QCoreApplication::translate("OscilloscopeDialog", "Graphics go here :)", nullptr));
        previousPushButton->setText(QCoreApplication::translate("OscilloscopeDialog", "Previous", nullptr));
        nextPushButton->setText(QCoreApplication::translate("OscilloscopeDialog", "Next", nullptr));
        xCoordLabel->setText(QCoreApplication::translate("OscilloscopeDialog", "X:", nullptr));
        yCoordLabel->setText(QCoreApplication::translate("OscilloscopeDialog", " Y:", nullptr));
        standardLineLabel->setText(QCoreApplication::translate("OscilloscopeDialog", "SECAM line 888", nullptr));
        fieldLineLabel->setText(QCoreApplication::translate("OscilloscopeDialog", "Field 8 line 888", nullptr));
        YCcheckBox->setText(QCoreApplication::translate("OscilloscopeDialog", "YC", nullptr));
        YcheckBox->setText(QCoreApplication::translate("OscilloscopeDialog", "Y", nullptr));
        CcheckBox->setText(QCoreApplication::translate("OscilloscopeDialog", "C", nullptr));
        dropoutsCheckBox->setText(QCoreApplication::translate("OscilloscopeDialog", "Dropouts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OscilloscopeDialog: public Ui_OscilloscopeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSCILLOSCOPEDIALOG_H
