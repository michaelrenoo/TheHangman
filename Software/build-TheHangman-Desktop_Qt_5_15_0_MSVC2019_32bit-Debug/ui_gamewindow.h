/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_gamewindow
{
public:
    QLabel *timeLimitLabel;
    QPushButton *hintButton;

    void setupUi(QDialog *gamewindow)
    {
        if (gamewindow->objectName().isEmpty())
            gamewindow->setObjectName(QString::fromUtf8("gamewindow"));
        gamewindow->resize(740, 521);
        timeLimitLabel = new QLabel(gamewindow);
        timeLimitLabel->setObjectName(QString::fromUtf8("timeLimitLabel"));
        timeLimitLabel->setGeometry(QRect(600, 20, 101, 31));
        QFont font;
        font.setPointSize(16);
        timeLimitLabel->setFont(font);
        hintButton = new QPushButton(gamewindow);
        hintButton->setObjectName(QString::fromUtf8("hintButton"));
        hintButton->setGeometry(QRect(600, 70, 101, 41));
        hintButton->setFont(font);

        retranslateUi(gamewindow);

        QMetaObject::connectSlotsByName(gamewindow);
    } // setupUi

    void retranslateUi(QDialog *gamewindow)
    {
        gamewindow->setWindowTitle(QCoreApplication::translate("gamewindow", "Dialog", nullptr));
        timeLimitLabel->setText(QString());
        hintButton->setText(QCoreApplication::translate("gamewindow", "Hint", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gamewindow: public Ui_gamewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
