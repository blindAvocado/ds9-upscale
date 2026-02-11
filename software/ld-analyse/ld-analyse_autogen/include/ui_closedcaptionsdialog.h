/********************************************************************************
** Form generated from reading UI file 'closedcaptionsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOSEDCAPTIONSDIALOG_H
#define UI_CLOSEDCAPTIONSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClosedCaptionsDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *captionTextEdit;

    void setupUi(QDialog *ClosedCaptionsDialog)
    {
        if (ClosedCaptionsDialog->objectName().isEmpty())
            ClosedCaptionsDialog->setObjectName("ClosedCaptionsDialog");
        ClosedCaptionsDialog->resize(482, 516);
        ClosedCaptionsDialog->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Graphics/16-analyse.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ClosedCaptionsDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(ClosedCaptionsDialog);
        verticalLayout->setObjectName("verticalLayout");
        captionTextEdit = new QTextEdit(ClosedCaptionsDialog);
        captionTextEdit->setObjectName("captionTextEdit");
        captionTextEdit->setEnabled(true);
        captionTextEdit->setFocusPolicy(Qt::NoFocus);
        captionTextEdit->setAcceptDrops(false);

        verticalLayout->addWidget(captionTextEdit);


        retranslateUi(ClosedCaptionsDialog);

        QMetaObject::connectSlotsByName(ClosedCaptionsDialog);
    } // setupUi

    void retranslateUi(QDialog *ClosedCaptionsDialog)
    {
        ClosedCaptionsDialog->setWindowTitle(QCoreApplication::translate("ClosedCaptionsDialog", "Closed Captions", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClosedCaptionsDialog: public Ui_ClosedCaptionsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOSEDCAPTIONSDIALOG_H
