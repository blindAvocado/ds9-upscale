/********************************************************************************
** Form generated from reading UI file 'vbidialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VBIDIALOG_H
#define UI_VBIDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VbiDialog
{
public:
    QGridLayout *gridLayout_1;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *leadInLabel;
    QLabel *userCodeLabel;
    QLabel *leadOutLabel;
    QLabel *label_7;
    QLabel *label;
    QLabel *discTypeLabel;
    QLabel *label_6;
    QLabel *pictureNumberLabel;
    QLabel *chapterNumberLabel;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_8;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *clvTimeCodeLabel;
    QLabel *pictureStopCodeLabel;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_19;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QLabel *label_16;
    QLabel *soundModeLabel;
    QLabel *programmeDumpLabel;
    QLabel *discSideLabel;
    QLabel *label_15;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_13;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *fmFmMultiplexLabel;
    QLabel *label_14;
    QLabel *parityCorrectLabel;
    QLabel *digitalLabel;
    QLabel *discSizeLabel;
    QLabel *label_12;
    QLabel *label_18;
    QLabel *teletextLabel;
    QLabel *label_17;
    QLabel *cxLabel;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QLabel *label_23;
    QLabel *cxLabelAm2;
    QLabel *label_26;
    QLabel *discSizeLabelAm2;
    QLabel *label_24;
    QLabel *discSideLabelAm2;
    QLabel *label_25;
    QLabel *teletextLabelAm2;
    QLabel *label_22;
    QLabel *copyAllowedLabelAm2;
    QLabel *label_27;
    QLabel *standardVideoLabelAm2;
    QLabel *label_20;
    QLabel *soundModeLabelAm2;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_3;
    QGridLayout *gridLayout_4;
    QLabel *label_51;
    QLabel *videoIdDataLabel;
    QLabel *label_52;
    QLabel *aspectRatioLabel;
    QLabel *label_53;
    QLabel *cgmsLabel;
    QLabel *label_54;
    QLabel *apsLabel;
    QLabel *label_55;
    QLabel *analogPreRecordedLabel;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QDialog *VbiDialog)
    {
        if (VbiDialog->objectName().isEmpty())
            VbiDialog->setObjectName("VbiDialog");
        VbiDialog->resize(360, 486);
        VbiDialog->setMinimumSize(QSize(360, 470));
        VbiDialog->setMaximumSize(QSize(360, 490));
        gridLayout_1 = new QGridLayout(VbiDialog);
        gridLayout_1->setObjectName("gridLayout_1");
        gridLayout_1->setSizeConstraint(QLayout::SetFixedSize);
        widget = new QWidget(VbiDialog);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        leadInLabel = new QLabel(widget);
        leadInLabel->setObjectName("leadInLabel");

        gridLayout->addWidget(leadInLabel, 5, 1, 1, 1);

        userCodeLabel = new QLabel(widget);
        userCodeLabel->setObjectName("userCodeLabel");

        gridLayout->addWidget(userCodeLabel, 9, 1, 1, 1);

        leadOutLabel = new QLabel(widget);
        leadOutLabel->setObjectName("leadOutLabel");

        gridLayout->addWidget(leadOutLabel, 8, 1, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_7, 2, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        discTypeLabel = new QLabel(widget);
        discTypeLabel->setObjectName("discTypeLabel");

        gridLayout->addWidget(discTypeLabel, 0, 1, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_6, 10, 0, 1, 1);

        pictureNumberLabel = new QLabel(widget);
        pictureNumberLabel->setObjectName("pictureNumberLabel");

        gridLayout->addWidget(pictureNumberLabel, 1, 1, 1, 1);

        chapterNumberLabel = new QLabel(widget);
        chapterNumberLabel->setObjectName("chapterNumberLabel");

        gridLayout->addWidget(chapterNumberLabel, 3, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_8, 3, 0, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_4, 9, 0, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_3, 8, 0, 1, 1);

        clvTimeCodeLabel = new QLabel(widget);
        clvTimeCodeLabel->setObjectName("clvTimeCodeLabel");

        gridLayout->addWidget(clvTimeCodeLabel, 2, 1, 1, 1);

        pictureStopCodeLabel = new QLabel(widget);
        pictureStopCodeLabel->setObjectName("pictureStopCodeLabel");

        gridLayout->addWidget(pictureStopCodeLabel, 10, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);


        gridLayout_1->addWidget(widget, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 15, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_1->addItem(verticalSpacer_2, 1, 0, 1, 1);

        label_19 = new QLabel(VbiDialog);
        label_19->setObjectName("label_19");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy);
        label_19->setMinimumSize(QSize(400, 0));
        label_19->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_1->addWidget(label_19, 2, 0, 1, 1);

        tabWidget = new QTabWidget(VbiDialog);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName("gridLayout_2");
        label_16 = new QLabel(tab);
        label_16->setObjectName("label_16");
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_16, 6, 0, 1, 1);

        soundModeLabel = new QLabel(tab);
        soundModeLabel->setObjectName("soundModeLabel");

        gridLayout_2->addWidget(soundModeLabel, 7, 1, 1, 1);

        programmeDumpLabel = new QLabel(tab);
        programmeDumpLabel->setObjectName("programmeDumpLabel");

        gridLayout_2->addWidget(programmeDumpLabel, 4, 1, 1, 1);

        discSideLabel = new QLabel(tab);
        discSideLabel->setObjectName("discSideLabel");

        gridLayout_2->addWidget(discSideLabel, 2, 1, 1, 1);

        label_15 = new QLabel(tab);
        label_15->setObjectName("label_15");
        label_15->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_15, 5, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 10, 0, 1, 1);

        label_13 = new QLabel(tab);
        label_13->setObjectName("label_13");
        label_13->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_13, 3, 0, 1, 1);

        label_10 = new QLabel(tab);
        label_10->setObjectName("label_10");
        label_10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        label_11 = new QLabel(tab);
        label_11->setObjectName("label_11");
        label_11->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_11, 1, 0, 1, 1);

        fmFmMultiplexLabel = new QLabel(tab);
        fmFmMultiplexLabel->setObjectName("fmFmMultiplexLabel");

        gridLayout_2->addWidget(fmFmMultiplexLabel, 5, 1, 1, 1);

        label_14 = new QLabel(tab);
        label_14->setObjectName("label_14");
        label_14->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_14, 4, 0, 1, 1);

        parityCorrectLabel = new QLabel(tab);
        parityCorrectLabel->setObjectName("parityCorrectLabel");

        gridLayout_2->addWidget(parityCorrectLabel, 9, 1, 1, 1);

        digitalLabel = new QLabel(tab);
        digitalLabel->setObjectName("digitalLabel");

        gridLayout_2->addWidget(digitalLabel, 6, 1, 1, 1);

        discSizeLabel = new QLabel(tab);
        discSizeLabel->setObjectName("discSizeLabel");

        gridLayout_2->addWidget(discSizeLabel, 1, 1, 1, 1);

        label_12 = new QLabel(tab);
        label_12->setObjectName("label_12");
        label_12->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_12, 2, 0, 1, 1);

        label_18 = new QLabel(tab);
        label_18->setObjectName("label_18");
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_18, 9, 0, 1, 1);

        teletextLabel = new QLabel(tab);
        teletextLabel->setObjectName("teletextLabel");

        gridLayout_2->addWidget(teletextLabel, 3, 1, 1, 1);

        label_17 = new QLabel(tab);
        label_17->setObjectName("label_17");
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_17, 7, 0, 1, 1);

        cxLabel = new QLabel(tab);
        cxLabel->setObjectName("cxLabel");

        gridLayout_2->addWidget(cxLabel, 0, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName("gridLayout_3");
        label_23 = new QLabel(tab_2);
        label_23->setObjectName("label_23");
        label_23->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_23, 0, 0, 1, 1);

        cxLabelAm2 = new QLabel(tab_2);
        cxLabelAm2->setObjectName("cxLabelAm2");

        gridLayout_3->addWidget(cxLabelAm2, 0, 1, 1, 1);

        label_26 = new QLabel(tab_2);
        label_26->setObjectName("label_26");
        label_26->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_26, 1, 0, 1, 1);

        discSizeLabelAm2 = new QLabel(tab_2);
        discSizeLabelAm2->setObjectName("discSizeLabelAm2");

        gridLayout_3->addWidget(discSizeLabelAm2, 1, 1, 1, 1);

        label_24 = new QLabel(tab_2);
        label_24->setObjectName("label_24");
        label_24->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_24, 2, 0, 1, 1);

        discSideLabelAm2 = new QLabel(tab_2);
        discSideLabelAm2->setObjectName("discSideLabelAm2");

        gridLayout_3->addWidget(discSideLabelAm2, 2, 1, 1, 1);

        label_25 = new QLabel(tab_2);
        label_25->setObjectName("label_25");
        label_25->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_25, 3, 0, 1, 1);

        teletextLabelAm2 = new QLabel(tab_2);
        teletextLabelAm2->setObjectName("teletextLabelAm2");

        gridLayout_3->addWidget(teletextLabelAm2, 3, 1, 1, 1);

        label_22 = new QLabel(tab_2);
        label_22->setObjectName("label_22");
        label_22->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_22, 4, 0, 1, 1);

        copyAllowedLabelAm2 = new QLabel(tab_2);
        copyAllowedLabelAm2->setObjectName("copyAllowedLabelAm2");

        gridLayout_3->addWidget(copyAllowedLabelAm2, 4, 1, 1, 1);

        label_27 = new QLabel(tab_2);
        label_27->setObjectName("label_27");
        label_27->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_27, 5, 0, 1, 1);

        standardVideoLabelAm2 = new QLabel(tab_2);
        standardVideoLabelAm2->setObjectName("standardVideoLabelAm2");

        gridLayout_3->addWidget(standardVideoLabelAm2, 5, 1, 1, 1);

        label_20 = new QLabel(tab_2);
        label_20->setObjectName("label_20");
        label_20->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_20, 6, 0, 1, 1);

        soundModeLabelAm2 = new QLabel(tab_2);
        soundModeLabelAm2->setObjectName("soundModeLabelAm2");

        gridLayout_3->addWidget(soundModeLabelAm2, 6, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_3->addItem(verticalSpacer_3, 7, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        gridLayout_4 = new QGridLayout(tab_3);
        gridLayout_4->setObjectName("gridLayout_4");
        label_51 = new QLabel(tab_3);
        label_51->setObjectName("label_51");
        label_51->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_51, 0, 0, 1, 1);

        videoIdDataLabel = new QLabel(tab_3);
        videoIdDataLabel->setObjectName("videoIdDataLabel");

        gridLayout_4->addWidget(videoIdDataLabel, 0, 1, 1, 1);

        label_52 = new QLabel(tab_3);
        label_52->setObjectName("label_52");
        label_52->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_52, 1, 0, 1, 1);

        aspectRatioLabel = new QLabel(tab_3);
        aspectRatioLabel->setObjectName("aspectRatioLabel");

        gridLayout_4->addWidget(aspectRatioLabel, 1, 1, 1, 1);

        label_53 = new QLabel(tab_3);
        label_53->setObjectName("label_53");
        label_53->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_53, 2, 0, 1, 1);

        cgmsLabel = new QLabel(tab_3);
        cgmsLabel->setObjectName("cgmsLabel");

        gridLayout_4->addWidget(cgmsLabel, 2, 1, 1, 1);

        label_54 = new QLabel(tab_3);
        label_54->setObjectName("label_54");
        label_54->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_54, 3, 0, 1, 1);

        apsLabel = new QLabel(tab_3);
        apsLabel->setObjectName("apsLabel");

        gridLayout_4->addWidget(apsLabel, 3, 1, 1, 1);

        label_55 = new QLabel(tab_3);
        label_55->setObjectName("label_55");
        label_55->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label_55, 4, 0, 1, 1);

        analogPreRecordedLabel = new QLabel(tab_3);
        analogPreRecordedLabel->setObjectName("analogPreRecordedLabel");

        gridLayout_4->addWidget(analogPreRecordedLabel, 4, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_4->addItem(verticalSpacer_5, 5, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());

        gridLayout_1->addWidget(tabWidget, 3, 0, 1, 1);


        retranslateUi(VbiDialog);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(VbiDialog);
    } // setupUi

    void retranslateUi(QDialog *VbiDialog)
    {
        VbiDialog->setWindowTitle(QCoreApplication::translate("VbiDialog", "Decoded VBI", nullptr));
        leadInLabel->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        userCodeLabel->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        leadOutLabel->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("VbiDialog", "CLV time code:", nullptr));
        label->setText(QCoreApplication::translate("VbiDialog", "Disc type:", nullptr));
        discTypeLabel->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("VbiDialog", "Picture stop code:", nullptr));
        pictureNumberLabel->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        chapterNumberLabel->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("VbiDialog", "Lead in:", nullptr));
        label_5->setText(QCoreApplication::translate("VbiDialog", "Picture number:", nullptr));
        label_8->setText(QCoreApplication::translate("VbiDialog", "Chapter number:", nullptr));
        label_4->setText(QCoreApplication::translate("VbiDialog", "User code:", nullptr));
        label_3->setText(QCoreApplication::translate("VbiDialog", "Lead out:", nullptr));
        clvTimeCodeLabel->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        pictureStopCodeLabel->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        label_19->setText(QCoreApplication::translate("VbiDialog", "Programme Status:", nullptr));
        label_16->setText(QCoreApplication::translate("VbiDialog", "Digital:", nullptr));
        soundModeLabel->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        programmeDumpLabel->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        discSideLabel->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        label_15->setText(QCoreApplication::translate("VbiDialog", "FM/FM Multiplex:", nullptr));
        label_13->setText(QCoreApplication::translate("VbiDialog", "Teletext:", nullptr));
        label_10->setText(QCoreApplication::translate("VbiDialog", "CX:", nullptr));
        label_11->setText(QCoreApplication::translate("VbiDialog", "Disc size:", nullptr));
        fmFmMultiplexLabel->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("VbiDialog", "Programme dump:", nullptr));
        parityCorrectLabel->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        digitalLabel->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        discSizeLabel->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        label_12->setText(QCoreApplication::translate("VbiDialog", "Disc side:", nullptr));
        label_18->setText(QCoreApplication::translate("VbiDialog", "Parity correct:", nullptr));
        teletextLabel->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        label_17->setText(QCoreApplication::translate("VbiDialog", "Sound mode:", nullptr));
        cxLabel->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("VbiDialog", "Original", nullptr));
        label_23->setText(QCoreApplication::translate("VbiDialog", "CX:", nullptr));
        cxLabelAm2->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        label_26->setText(QCoreApplication::translate("VbiDialog", "Disc size:", nullptr));
        discSizeLabelAm2->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        label_24->setText(QCoreApplication::translate("VbiDialog", "Disc side:", nullptr));
        discSideLabelAm2->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        label_25->setText(QCoreApplication::translate("VbiDialog", "Teletext:", nullptr));
        teletextLabelAm2->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        label_22->setText(QCoreApplication::translate("VbiDialog", "Copy allowed:", nullptr));
        copyAllowedLabelAm2->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        label_27->setText(QCoreApplication::translate("VbiDialog", "Standard Video:", nullptr));
        standardVideoLabelAm2->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        label_20->setText(QCoreApplication::translate("VbiDialog", "Sound mode:", nullptr));
        soundModeLabelAm2->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("VbiDialog", "Amendment 2", nullptr));
        label_51->setText(QCoreApplication::translate("VbiDialog", "Data:", nullptr));
        videoIdDataLabel->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        label_52->setText(QCoreApplication::translate("VbiDialog", "Aspect Ratio:", nullptr));
        aspectRatioLabel->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        label_53->setText(QCoreApplication::translate("VbiDialog", "CGMS-A:", nullptr));
        cgmsLabel->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        label_54->setText(QCoreApplication::translate("VbiDialog", "APS Trigger:", nullptr));
        apsLabel->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        label_55->setText(QCoreApplication::translate("VbiDialog", "Pre-Recorded Analogue Source:", nullptr));
        analogPreRecordedLabel->setText(QCoreApplication::translate("VbiDialog", "TextLabel", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("VbiDialog", "VIDEO ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VbiDialog: public Ui_VbiDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VBIDIALOG_H
