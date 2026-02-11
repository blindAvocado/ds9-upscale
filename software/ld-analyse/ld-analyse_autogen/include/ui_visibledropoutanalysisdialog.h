/********************************************************************************
** Form generated from reading UI file 'visibledropoutanalysisdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISIBLEDROPOUTANALYSISDIALOG_H
#define UI_VISIBLEDROPOUTANALYSISDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VisibleDropOutAnalysisDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;

    void setupUi(QDialog *VisibleDropOutAnalysisDialog)
    {
        if (VisibleDropOutAnalysisDialog->objectName().isEmpty())
            VisibleDropOutAnalysisDialog->setObjectName("VisibleDropOutAnalysisDialog");
        VisibleDropOutAnalysisDialog->resize(913, 343);
        horizontalLayout_2 = new QHBoxLayout(VisibleDropOutAnalysisDialog);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");

        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(VisibleDropOutAnalysisDialog);

        QMetaObject::connectSlotsByName(VisibleDropOutAnalysisDialog);
    } // setupUi

    void retranslateUi(QDialog *VisibleDropOutAnalysisDialog)
    {
        VisibleDropOutAnalysisDialog->setWindowTitle(QCoreApplication::translate("VisibleDropOutAnalysisDialog", "Visible Dropout Loss Analysis", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VisibleDropOutAnalysisDialog: public Ui_VisibleDropOutAnalysisDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISIBLEDROPOUTANALYSISDIALOG_H
