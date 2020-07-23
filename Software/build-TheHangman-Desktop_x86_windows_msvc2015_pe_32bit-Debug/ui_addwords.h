/********************************************************************************
** Form generated from reading UI file 'addwords.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDWORDS_H
#define UI_ADDWORDS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_addwords
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QPlainTextEdit *addWordText;
    QPlainTextEdit *addHintText;
    QLabel *label_3;

    void setupUi(QDialog *addwords)
    {
        if (addwords->objectName().isEmpty())
            addwords->setObjectName(QString::fromUtf8("addwords"));
        addwords->resize(800, 600);
        addwords->setStyleSheet(QString::fromUtf8("background-color: #F1D1B5;"));
        buttonBox = new QDialogButtonBox(addwords);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(400, 490, 341, 32));
        buttonBox->setStyleSheet(QString::fromUtf8("background-color: #568EA6;"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(addwords);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 20, 111, 41));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);
        label_2 = new QLabel(addwords);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(460, 20, 111, 41));
        label_2->setFont(font);
        addWordText = new QPlainTextEdit(addwords);
        addWordText->setObjectName(QString::fromUtf8("addWordText"));
        addWordText->setGeometry(QRect(80, 70, 281, 351));
        addWordText->setStyleSheet(QString::fromUtf8("background-color: #F0FFFF;"));
        addHintText = new QPlainTextEdit(addwords);
        addHintText->setObjectName(QString::fromUtf8("addHintText"));
        addHintText->setGeometry(QRect(460, 70, 301, 351));
        addHintText->setStyleSheet(QString::fromUtf8("background-color: #F0FFFF;"));
        label_3 = new QLabel(addwords);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(80, 500, 371, 16));
        QFont font1;
        font1.setPointSize(10);
        label_3->setFont(font1);

        retranslateUi(addwords);
        QObject::connect(buttonBox, SIGNAL(accepted()), addwords, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), addwords, SLOT(reject()));

        QMetaObject::connectSlotsByName(addwords);
    } // setupUi

    void retranslateUi(QDialog *addwords)
    {
        addwords->setWindowTitle(QCoreApplication::translate("addwords", "The Hangman - Add Words", nullptr));
        label->setText(QCoreApplication::translate("addwords", "Word:", nullptr));
        label_2->setText(QCoreApplication::translate("addwords", "Hint:", nullptr));
        addWordText->setPlainText(QString());
        addHintText->setPlainText(QString());
        label_3->setText(QCoreApplication::translate("addwords", "New item must be splitted with comma and enter!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addwords: public Ui_addwords {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDWORDS_H
