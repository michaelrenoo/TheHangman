/********************************************************************************
** Form generated from reading UI file 'hintdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HINTDIALOG_H
#define UI_HINTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_hintdialog
{
public:
    QLabel *hintLabel;

    void setupUi(QDialog *hintdialog)
    {
        if (hintdialog->objectName().isEmpty())
            hintdialog->setObjectName(QString::fromUtf8("hintdialog"));
        hintdialog->resize(400, 300);
        hintLabel = new QLabel(hintdialog);
        hintLabel->setObjectName(QString::fromUtf8("hintLabel"));
        hintLabel->setGeometry(QRect(30, 20, 331, 241));
        QFont font;
        font.setPointSize(12);
        hintLabel->setFont(font);

        retranslateUi(hintdialog);

        QMetaObject::connectSlotsByName(hintdialog);
    } // setupUi

    void retranslateUi(QDialog *hintdialog)
    {
        hintdialog->setWindowTitle(QCoreApplication::translate("hintdialog", "Dialog", nullptr));
        hintLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class hintdialog: public Ui_hintdialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HINTDIALOG_H
