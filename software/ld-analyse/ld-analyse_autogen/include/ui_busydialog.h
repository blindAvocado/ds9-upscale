/********************************************************************************
** Form generated from reading UI file 'busydialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSYDIALOG_H
#define UI_BUSYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_BusyDialog
{
public:
    QLabel *messageLabel;

    void setupUi(QDialog *BusyDialog)
    {
        if (BusyDialog->objectName().isEmpty())
            BusyDialog->setObjectName("BusyDialog");
        BusyDialog->setWindowModality(Qt::ApplicationModal);
        BusyDialog->resize(400, 60);
        BusyDialog->setMinimumSize(QSize(400, 60));
        BusyDialog->setMaximumSize(QSize(400, 60));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Graphics/16-analyse.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        BusyDialog->setWindowIcon(icon);
        BusyDialog->setModal(false);
        messageLabel = new QLabel(BusyDialog);
        messageLabel->setObjectName("messageLabel");
        messageLabel->setGeometry(QRect(10, 20, 381, 21));
        messageLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(BusyDialog);

        QMetaObject::connectSlotsByName(BusyDialog);
    } // setupUi

    void retranslateUi(QDialog *BusyDialog)
    {
        BusyDialog->setWindowTitle(QCoreApplication::translate("BusyDialog", "Please Wait", nullptr));
        messageLabel->setText(QCoreApplication::translate("BusyDialog", "Message goes here...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BusyDialog: public Ui_BusyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSYDIALOG_H
