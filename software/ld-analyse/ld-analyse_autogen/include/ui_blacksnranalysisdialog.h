/********************************************************************************
** Form generated from reading UI file 'blacksnranalysisdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BLACKSNRANALYSISDIALOG_H
#define UI_BLACKSNRANALYSISDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BlackSnrAnalysisDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;

    void setupUi(QDialog *BlackSnrAnalysisDialog)
    {
        if (BlackSnrAnalysisDialog->objectName().isEmpty())
            BlackSnrAnalysisDialog->setObjectName("BlackSnrAnalysisDialog");
        BlackSnrAnalysisDialog->resize(913, 343);
        verticalLayout_2 = new QVBoxLayout(BlackSnrAnalysisDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");

        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(BlackSnrAnalysisDialog);

        QMetaObject::connectSlotsByName(BlackSnrAnalysisDialog);
    } // setupUi

    void retranslateUi(QDialog *BlackSnrAnalysisDialog)
    {
        BlackSnrAnalysisDialog->setWindowTitle(QCoreApplication::translate("BlackSnrAnalysisDialog", "Black SNR Analysis", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BlackSnrAnalysisDialog: public Ui_BlackSnrAnalysisDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BLACKSNRANALYSISDIALOG_H
