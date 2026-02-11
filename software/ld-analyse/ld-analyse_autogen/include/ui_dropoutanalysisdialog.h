/********************************************************************************
** Form generated from reading UI file 'dropoutanalysisdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DROPOUTANALYSISDIALOG_H
#define UI_DROPOUTANALYSISDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DropoutAnalysisDialog
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;

    void setupUi(QDialog *DropoutAnalysisDialog)
    {
        if (DropoutAnalysisDialog->objectName().isEmpty())
            DropoutAnalysisDialog->setObjectName("DropoutAnalysisDialog");
        DropoutAnalysisDialog->resize(913, 343);
        horizontalLayout_2 = new QHBoxLayout(DropoutAnalysisDialog);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");

        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(DropoutAnalysisDialog);

        QMetaObject::connectSlotsByName(DropoutAnalysisDialog);
    } // setupUi

    void retranslateUi(QDialog *DropoutAnalysisDialog)
    {
        DropoutAnalysisDialog->setWindowTitle(QCoreApplication::translate("DropoutAnalysisDialog", "Dropout Loss Analysis", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DropoutAnalysisDialog: public Ui_DropoutAnalysisDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DROPOUTANALYSISDIALOG_H
