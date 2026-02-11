/********************************************************************************
** Form generated from reading UI file 'whitesnranalysisdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WHITESNRANALYSISDIALOG_H
#define UI_WHITESNRANALYSISDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_WhiteSnrAnalysisDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;

    void setupUi(QDialog *WhiteSnrAnalysisDialog)
    {
        if (WhiteSnrAnalysisDialog->objectName().isEmpty())
            WhiteSnrAnalysisDialog->setObjectName("WhiteSnrAnalysisDialog");
        WhiteSnrAnalysisDialog->resize(913, 343);
        horizontalLayout = new QHBoxLayout(WhiteSnrAnalysisDialog);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");

        horizontalLayout_2->addLayout(verticalLayout);


        horizontalLayout->addLayout(horizontalLayout_2);


        retranslateUi(WhiteSnrAnalysisDialog);

        QMetaObject::connectSlotsByName(WhiteSnrAnalysisDialog);
    } // setupUi

    void retranslateUi(QDialog *WhiteSnrAnalysisDialog)
    {
        WhiteSnrAnalysisDialog->setWindowTitle(QCoreApplication::translate("WhiteSnrAnalysisDialog", "White SNR Analysis", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WhiteSnrAnalysisDialog: public Ui_WhiteSnrAnalysisDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WHITESNRANALYSISDIALOG_H
