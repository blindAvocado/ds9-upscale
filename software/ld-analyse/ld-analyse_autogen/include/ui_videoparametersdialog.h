/********************************************************************************
** Form generated from reading UI file 'videoparametersdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIDEOPARAMETERSDIALOG_H
#define UI_VIDEOPARAMETERSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VideoParametersDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *blackLevelLabel;
    QSpinBox *blackLevelSpinBox;
    QPushButton *blackLevelResetButton;
    QPushButton *blackLevelAltResetButton;
    QLabel *whiteLevelLabel;
    QSpinBox *whiteLevelSpinBox;
    QPushButton *whiteLevelResetButton;
    QLabel *activeVideoStartlLabel;
    QSpinBox *activeVideoStartSpinBox;
    QPushButton *activeVideoStartResetButton;
    QLabel *activeVideoWidthlLabel;
    QSpinBox *activeVideoWidthSpinBox;
    QPushButton *activeVideoWidthResetButton;
    QLabel *aspectRatioLabel;
    QSpacerItem *verticalSpacer_1;
    QWidget *aspectRatioWidget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *aspectRatio43RadioButton;
    QRadioButton *aspectRatio169RadioButton;
    QSpacerItem *horizontalSpacer;
    QButtonGroup *aspectRatioButtonGroup;

    void setupUi(QDialog *VideoParametersDialog)
    {
        if (VideoParametersDialog->objectName().isEmpty())
            VideoParametersDialog->setObjectName("VideoParametersDialog");
        VideoParametersDialog->resize(452, 177);
        gridLayout = new QGridLayout(VideoParametersDialog);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout->setHorizontalSpacing(12);
        blackLevelLabel = new QLabel(VideoParametersDialog);
        blackLevelLabel->setObjectName("blackLevelLabel");
        blackLevelLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(blackLevelLabel, 0, 0, 1, 1);

        blackLevelSpinBox = new QSpinBox(VideoParametersDialog);
        blackLevelSpinBox->setObjectName("blackLevelSpinBox");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(blackLevelSpinBox->sizePolicy().hasHeightForWidth());
        blackLevelSpinBox->setSizePolicy(sizePolicy);
        blackLevelSpinBox->setMinimumSize(QSize(70, 30));
        blackLevelSpinBox->setMaximum(32767);
        blackLevelSpinBox->setSingleStep(256);
        blackLevelSpinBox->setValue(16384);
        blackLevelSpinBox->setDisplayIntegerBase(16);

        gridLayout->addWidget(blackLevelSpinBox, 0, 1, 1, 1);

        blackLevelResetButton = new QPushButton(VideoParametersDialog);
        blackLevelResetButton->setObjectName("blackLevelResetButton");
        blackLevelResetButton->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(blackLevelResetButton, 0, 2, 1, 1);

        blackLevelAltResetButton = new QPushButton(VideoParametersDialog);
        blackLevelAltResetButton->setObjectName("blackLevelAltResetButton");
        blackLevelAltResetButton->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(blackLevelAltResetButton, 0, 3, 1, 1);

        whiteLevelLabel = new QLabel(VideoParametersDialog);
        whiteLevelLabel->setObjectName("whiteLevelLabel");
        whiteLevelLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(whiteLevelLabel, 1, 0, 1, 1);

        whiteLevelSpinBox = new QSpinBox(VideoParametersDialog);
        whiteLevelSpinBox->setObjectName("whiteLevelSpinBox");
        sizePolicy.setHeightForWidth(whiteLevelSpinBox->sizePolicy().hasHeightForWidth());
        whiteLevelSpinBox->setSizePolicy(sizePolicy);
        whiteLevelSpinBox->setMinimumSize(QSize(70, 30));
        whiteLevelSpinBox->setMinimum(32768);
        whiteLevelSpinBox->setMaximum(65535);
        whiteLevelSpinBox->setSingleStep(256);
        whiteLevelSpinBox->setValue(54016);
        whiteLevelSpinBox->setDisplayIntegerBase(16);

        gridLayout->addWidget(whiteLevelSpinBox, 1, 1, 1, 1);

        whiteLevelResetButton = new QPushButton(VideoParametersDialog);
        whiteLevelResetButton->setObjectName("whiteLevelResetButton");
        whiteLevelResetButton->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(whiteLevelResetButton, 1, 2, 1, 1);

        activeVideoStartlLabel = new QLabel(VideoParametersDialog);
        activeVideoStartlLabel->setObjectName("activeVideoStartlLabel");
        activeVideoStartlLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(activeVideoStartlLabel, 2, 0, 1, 1);

        activeVideoStartSpinBox = new QSpinBox(VideoParametersDialog);
        activeVideoStartSpinBox->setObjectName("activeVideoStartSpinBox");
        sizePolicy.setHeightForWidth(activeVideoStartSpinBox->sizePolicy().hasHeightForWidth());
        activeVideoStartSpinBox->setSizePolicy(sizePolicy);
        activeVideoStartSpinBox->setMinimumSize(QSize(70, 30));
        activeVideoStartSpinBox->setMinimum(0);
        activeVideoStartSpinBox->setMaximum(1134);
        activeVideoStartSpinBox->setSingleStep(1);
        activeVideoStartSpinBox->setValue(16);
        activeVideoStartSpinBox->setDisplayIntegerBase(10);

        gridLayout->addWidget(activeVideoStartSpinBox, 2, 1, 1, 1);

        activeVideoStartResetButton = new QPushButton(VideoParametersDialog);
        activeVideoStartResetButton->setObjectName("activeVideoStartResetButton");
        activeVideoStartResetButton->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(activeVideoStartResetButton, 2, 2, 1, 1);

        activeVideoWidthlLabel = new QLabel(VideoParametersDialog);
        activeVideoWidthlLabel->setObjectName("activeVideoWidthlLabel");
        activeVideoWidthlLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(activeVideoWidthlLabel, 3, 0, 1, 1);

        activeVideoWidthSpinBox = new QSpinBox(VideoParametersDialog);
        activeVideoWidthSpinBox->setObjectName("activeVideoWidthSpinBox");
        sizePolicy.setHeightForWidth(activeVideoWidthSpinBox->sizePolicy().hasHeightForWidth());
        activeVideoWidthSpinBox->setSizePolicy(sizePolicy);
        activeVideoWidthSpinBox->setMinimumSize(QSize(70, 30));
        activeVideoWidthSpinBox->setMinimum(1);
        activeVideoWidthSpinBox->setMaximum(1135);
        activeVideoWidthSpinBox->setSingleStep(1);
        activeVideoWidthSpinBox->setValue(1);
        activeVideoWidthSpinBox->setDisplayIntegerBase(10);

        gridLayout->addWidget(activeVideoWidthSpinBox, 3, 1, 1, 1);

        activeVideoWidthResetButton = new QPushButton(VideoParametersDialog);
        activeVideoWidthResetButton->setObjectName("activeVideoWidthResetButton");
        activeVideoWidthResetButton->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(activeVideoWidthResetButton, 3, 2, 1, 1);

        aspectRatioLabel = new QLabel(VideoParametersDialog);
        aspectRatioLabel->setObjectName("aspectRatioLabel");
        aspectRatioLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(aspectRatioLabel, 4, 0, 1, 1);

        verticalSpacer_1 = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_1, 2, 0, 1, 1);

        aspectRatioWidget = new QWidget(VideoParametersDialog);
        aspectRatioWidget->setObjectName("aspectRatioWidget");
        horizontalLayout = new QHBoxLayout(aspectRatioWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        aspectRatio43RadioButton = new QRadioButton(aspectRatioWidget);
        aspectRatioButtonGroup = new QButtonGroup(VideoParametersDialog);
        aspectRatioButtonGroup->setObjectName("aspectRatioButtonGroup");
        aspectRatioButtonGroup->addButton(aspectRatio43RadioButton);
        aspectRatio43RadioButton->setObjectName("aspectRatio43RadioButton");
        aspectRatio43RadioButton->setChecked(true);

        horizontalLayout->addWidget(aspectRatio43RadioButton);

        aspectRatio169RadioButton = new QRadioButton(aspectRatioWidget);
        aspectRatioButtonGroup->addButton(aspectRatio169RadioButton);
        aspectRatio169RadioButton->setObjectName("aspectRatio169RadioButton");

        horizontalLayout->addWidget(aspectRatio169RadioButton);

        horizontalSpacer = new QSpacerItem(0, 0, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addWidget(aspectRatioWidget, 4, 1, 1, 3);


        retranslateUi(VideoParametersDialog);

        QMetaObject::connectSlotsByName(VideoParametersDialog);
    } // setupUi

    void retranslateUi(QDialog *VideoParametersDialog)
    {
        VideoParametersDialog->setWindowTitle(QCoreApplication::translate("VideoParametersDialog", "Video Parameters", nullptr));
        blackLevelLabel->setText(QCoreApplication::translate("VideoParametersDialog", "Black level:", nullptr));
        blackLevelSpinBox->setPrefix(QCoreApplication::translate("VideoParametersDialog", "0x", nullptr));
        blackLevelResetButton->setText(QCoreApplication::translate("VideoParametersDialog", "Reset NTSC", nullptr));
        blackLevelAltResetButton->setText(QCoreApplication::translate("VideoParametersDialog", "Reset NTSC-J", nullptr));
        whiteLevelLabel->setText(QCoreApplication::translate("VideoParametersDialog", "White level:", nullptr));
        whiteLevelSpinBox->setPrefix(QCoreApplication::translate("VideoParametersDialog", "0x", nullptr));
        whiteLevelResetButton->setText(QCoreApplication::translate("VideoParametersDialog", "Reset", nullptr));
        activeVideoStartlLabel->setText(QCoreApplication::translate("VideoParametersDialog", "Active video start:", nullptr));
        activeVideoStartSpinBox->setPrefix(QString());
        activeVideoStartResetButton->setText(QCoreApplication::translate("VideoParametersDialog", "Reset", nullptr));
        activeVideoWidthlLabel->setText(QCoreApplication::translate("VideoParametersDialog", "Active video width:", nullptr));
        activeVideoWidthSpinBox->setPrefix(QString());
        activeVideoWidthResetButton->setText(QCoreApplication::translate("VideoParametersDialog", "Reset", nullptr));
        aspectRatioLabel->setText(QCoreApplication::translate("VideoParametersDialog", "Display aspect ratio:", nullptr));
        aspectRatio43RadioButton->setText(QCoreApplication::translate("VideoParametersDialog", "4:3", nullptr));
        aspectRatio169RadioButton->setText(QCoreApplication::translate("VideoParametersDialog", "16:9", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VideoParametersDialog: public Ui_VideoParametersDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIDEOPARAMETERSDIALOG_H
