/********************************************************************************
** Form generated from reading UI file 'addwords.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
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
        addwords->resize(699, 490);
        buttonBox = new QDialogButtonBox(addwords);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(320, 440, 341, 32));
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
        label_2->setGeometry(QRect(440, 20, 111, 41));
        label_2->setFont(font);
        addWordText = new QPlainTextEdit(addwords);
        addWordText->setObjectName(QString::fromUtf8("addWordText"));
        addWordText->setGeometry(QRect(20, 70, 281, 351));
        addHintText = new QPlainTextEdit(addwords);
        addHintText->setObjectName(QString::fromUtf8("addHintText"));
        addHintText->setGeometry(QRect(380, 70, 301, 351));
        label_3 = new QLabel(addwords);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 450, 371, 16));
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
        addwords->setWindowTitle(QCoreApplication::translate("addwords", "Dialog", nullptr));
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
