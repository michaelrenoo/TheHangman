/********************************************************************************
** Form generated from reading UI file 'scoreboard.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCOREBOARD_H
#define UI_SCOREBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_scoreboard
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *scoreboardLabel;
    QPlainTextEdit *scoreText;

    void setupUi(QDialog *scoreboard)
    {
        if (scoreboard->objectName().isEmpty())
            scoreboard->setObjectName(QString::fromUtf8("scoreboard"));
        scoreboard->resize(800, 600);
        scoreboard->setStyleSheet(QString::fromUtf8("background-color: #F1D1B5;"));
        buttonBox = new QDialogButtonBox(scoreboard);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(400, 490, 341, 32));
        buttonBox->setStyleSheet(QString::fromUtf8("background-color: rgb(86, 142, 166);"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);
        scoreboardLabel = new QLabel(scoreboard);
        scoreboardLabel->setObjectName(QString::fromUtf8("scoreboardLabel"));
        scoreboardLabel->setGeometry(QRect(280, 40, 231, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Reference Sans Serif"));
        font.setPointSize(24);
        scoreboardLabel->setFont(font);
        scoreboardLabel->setAlignment(Qt::AlignCenter);
        scoreText = new QPlainTextEdit(scoreboard);
        scoreText->setObjectName(QString::fromUtf8("scoreText"));
        scoreText->setGeometry(QRect(250, 100, 301, 381));
        QFont font1;
        font1.setPointSize(40);
        scoreText->setFont(font1);
        scoreText->setStyleSheet(QString::fromUtf8("background-color: #F0FFFF;"));
        scoreText->setReadOnly(true);

        retranslateUi(scoreboard);
        QObject::connect(buttonBox, SIGNAL(accepted()), scoreboard, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), scoreboard, SLOT(reject()));

        QMetaObject::connectSlotsByName(scoreboard);
    } // setupUi

    void retranslateUi(QDialog *scoreboard)
    {
        scoreboard->setWindowTitle(QCoreApplication::translate("scoreboard", "The Hangman - Scoreboard", nullptr));
        scoreboardLabel->setText(QCoreApplication::translate("scoreboard", "SCOREBOARD", nullptr));
        scoreText->setPlainText(QCoreApplication::translate("scoreboard", "	230\n"
"	175\n"
"	110\n"
"	75", nullptr));
    } // retranslateUi

};

namespace Ui {
    class scoreboard: public Ui_scoreboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCOREBOARD_H
