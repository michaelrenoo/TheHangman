/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
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
    QLabel *chancesLabel;
    QLabel *chanceValueLabel;
    QLabel *scoreLabel;
    QLabel *scoreValueLabel;
    QPushButton *backButton;
    QLabel *baseHMLabel;
    QLabel *firstHMLabel;
    QLabel *secondHMLabel;
    QLabel *thirdHMLabel;
    QLabel *fourthHMLabel;
    QLabel *fifthHMLabel;
    QLabel *sixthHMLabel;
    QLabel *seventhHMLabel;
    QLabel *puzzleWordLabel;
    QPushButton *ButtonA;
    QPushButton *ButtonB;
    QPushButton *ButtonC;
    QPushButton *ButtonD;
    QPushButton *ButtonE;
    QPushButton *ButtonF;
    QPushButton *ButtonG;
    QPushButton *ButtonH;
    QPushButton *ButtonJ;
    QPushButton *ButtonK;
    QPushButton *ButtonL;
    QPushButton *ButtonI;
    QPushButton *ButtonM;
    QPushButton *ButtonN;
    QPushButton *ButtonP;
    QPushButton *ButtonQ;
    QPushButton *ButtonR;
    QPushButton *ButtonO;
    QPushButton *ButtonU;
    QPushButton *ButtonT;
    QPushButton *ButtonS;
    QPushButton *ButtonY;
    QPushButton *ButtonW;
    QPushButton *ButtonZ;
    QPushButton *ButtonX;
    QPushButton *ButtonV;

    void setupUi(QDialog *gamewindow)
    {
        if (gamewindow->objectName().isEmpty())
            gamewindow->setObjectName(QString::fromUtf8("gamewindow"));
        gamewindow->setEnabled(true);
        gamewindow->resize(800, 600);
        timeLimitLabel = new QLabel(gamewindow);
        timeLimitLabel->setObjectName(QString::fromUtf8("timeLimitLabel"));
        timeLimitLabel->setGeometry(QRect(430, 30, 101, 21));
        QFont font;
        font.setPointSize(16);
        timeLimitLabel->setFont(font);
        hintButton = new QPushButton(gamewindow);
        hintButton->setObjectName(QString::fromUtf8("hintButton"));
        hintButton->setGeometry(QRect(30, 20, 101, 41));
        hintButton->setFont(font);
        chancesLabel = new QLabel(gamewindow);
        chancesLabel->setObjectName(QString::fromUtf8("chancesLabel"));
        chancesLabel->setEnabled(true);
        chancesLabel->setGeometry(QRect(230, 30, 101, 21));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        chancesLabel->setFont(font1);
        chanceValueLabel = new QLabel(gamewindow);
        chanceValueLabel->setObjectName(QString::fromUtf8("chanceValueLabel"));
        chanceValueLabel->setGeometry(QRect(330, 30, 21, 21));
        chanceValueLabel->setFont(font);
        scoreLabel = new QLabel(gamewindow);
        scoreLabel->setObjectName(QString::fromUtf8("scoreLabel"));
        scoreLabel->setGeometry(QRect(600, 30, 81, 20));
        QFont font2;
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        scoreLabel->setFont(font2);
        scoreValueLabel = new QLabel(gamewindow);
        scoreValueLabel->setObjectName(QString::fromUtf8("scoreValueLabel"));
        scoreValueLabel->setGeometry(QRect(690, 30, 61, 20));
        scoreValueLabel->setFont(font);
        backButton = new QPushButton(gamewindow);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(30, 540, 101, 41));
        QFont font3;
        font3.setPointSize(14);
        backButton->setFont(font3);
        baseHMLabel = new QLabel(gamewindow);
        baseHMLabel->setObjectName(QString::fromUtf8("baseHMLabel"));
        baseHMLabel->setGeometry(QRect(30, 500, 121, 21));
        baseHMLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 0)"));
        firstHMLabel = new QLabel(gamewindow);
        firstHMLabel->setObjectName(QString::fromUtf8("firstHMLabel"));
        firstHMLabel->setEnabled(true);
        firstHMLabel->setGeometry(QRect(40, 100, 21, 401));
        firstHMLabel->setStyleSheet(QString::fromUtf8("background-color: brown;"));
        secondHMLabel = new QLabel(gamewindow);
        secondHMLabel->setObjectName(QString::fromUtf8("secondHMLabel"));
        secondHMLabel->setGeometry(QRect(60, 100, 171, 16));
        secondHMLabel->setStyleSheet(QString::fromUtf8("background-color: brown;"));
        thirdHMLabel = new QLabel(gamewindow);
        thirdHMLabel->setObjectName(QString::fromUtf8("thirdHMLabel"));
        thirdHMLabel->setGeometry(QRect(210, 110, 16, 71));
        thirdHMLabel->setStyleSheet(QString::fromUtf8("background-color:brown;"));
        fourthHMLabel = new QLabel(gamewindow);
        fourthHMLabel->setObjectName(QString::fromUtf8("fourthHMLabel"));
        fourthHMLabel->setGeometry(QRect(180, 170, 80, 80));
        QFont font4;
        font4.setPointSize(65);
        fourthHMLabel->setFont(font4);
        fourthHMLabel->setAlignment(Qt::AlignCenter);
        fifthHMLabel = new QLabel(gamewindow);
        fifthHMLabel->setObjectName(QString::fromUtf8("fifthHMLabel"));
        fifthHMLabel->setGeometry(QRect(210, 240, 16, 151));
        fifthHMLabel->setStyleSheet(QString::fromUtf8("background-color: black;"));
        sixthHMLabel = new QLabel(gamewindow);
        sixthHMLabel->setObjectName(QString::fromUtf8("sixthHMLabel"));
        sixthHMLabel->setGeometry(QRect(130, 270, 181, 16));
        sixthHMLabel->setStyleSheet(QString::fromUtf8("background-color: black;"));
        seventhHMLabel = new QLabel(gamewindow);
        seventhHMLabel->setObjectName(QString::fromUtf8("seventhHMLabel"));
        seventhHMLabel->setGeometry(QRect(150, 370, 141, 101));
        QFont font5;
        font5.setPointSize(75);
        seventhHMLabel->setFont(font5);
        seventhHMLabel->setAlignment(Qt::AlignCenter);
        puzzleWordLabel = new QLabel(gamewindow);
        puzzleWordLabel->setObjectName(QString::fromUtf8("puzzleWordLabel"));
        puzzleWordLabel->setGeometry(QRect(410, 130, 301, 51));
        QFont font6;
        font6.setPointSize(35);
        font6.setUnderline(true);
        puzzleWordLabel->setFont(font6);
        ButtonA = new QPushButton(gamewindow);
        ButtonA->setObjectName(QString::fromUtf8("ButtonA"));
        ButtonA->setGeometry(QRect(370, 230, 42, 42));
        ButtonA->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"/* Idea and source: https://stackoverflow.com/questions/12734319/change-rectangular-qt-button-to-round */"));
        ButtonB = new QPushButton(gamewindow);
        ButtonB->setObjectName(QString::fromUtf8("ButtonB"));
        ButtonB->setGeometry(QRect(430, 230, 42, 42));
        ButtonB->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        ButtonC = new QPushButton(gamewindow);
        ButtonC->setObjectName(QString::fromUtf8("ButtonC"));
        ButtonC->setGeometry(QRect(490, 230, 42, 42));
        ButtonC->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        ButtonD = new QPushButton(gamewindow);
        ButtonD->setObjectName(QString::fromUtf8("ButtonD"));
        ButtonD->setGeometry(QRect(550, 230, 42, 42));
        ButtonD->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        ButtonE = new QPushButton(gamewindow);
        ButtonE->setObjectName(QString::fromUtf8("ButtonE"));
        ButtonE->setGeometry(QRect(610, 230, 42, 42));
        ButtonE->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        ButtonF = new QPushButton(gamewindow);
        ButtonF->setObjectName(QString::fromUtf8("ButtonF"));
        ButtonF->setGeometry(QRect(670, 230, 42, 42));
        ButtonF->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        ButtonG = new QPushButton(gamewindow);
        ButtonG->setObjectName(QString::fromUtf8("ButtonG"));
        ButtonG->setGeometry(QRect(410, 290, 42, 42));
        ButtonG->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        ButtonH = new QPushButton(gamewindow);
        ButtonH->setObjectName(QString::fromUtf8("ButtonH"));
        ButtonH->setGeometry(QRect(470, 290, 42, 42));
        ButtonH->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        ButtonJ = new QPushButton(gamewindow);
        ButtonJ->setObjectName(QString::fromUtf8("ButtonJ"));
        ButtonJ->setGeometry(QRect(590, 290, 42, 42));
        ButtonJ->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        ButtonK = new QPushButton(gamewindow);
        ButtonK->setObjectName(QString::fromUtf8("ButtonK"));
        ButtonK->setGeometry(QRect(650, 290, 42, 42));
        ButtonK->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        ButtonL = new QPushButton(gamewindow);
        ButtonL->setObjectName(QString::fromUtf8("ButtonL"));
        ButtonL->setGeometry(QRect(380, 350, 42, 42));
        ButtonL->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        ButtonI = new QPushButton(gamewindow);
        ButtonI->setObjectName(QString::fromUtf8("ButtonI"));
        ButtonI->setGeometry(QRect(530, 290, 42, 42));
        ButtonI->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        ButtonM = new QPushButton(gamewindow);
        ButtonM->setObjectName(QString::fromUtf8("ButtonM"));
        ButtonM->setGeometry(QRect(440, 350, 42, 42));
        ButtonM->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        ButtonN = new QPushButton(gamewindow);
        ButtonN->setObjectName(QString::fromUtf8("ButtonN"));
        ButtonN->setGeometry(QRect(500, 350, 42, 42));
        ButtonN->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        ButtonP = new QPushButton(gamewindow);
        ButtonP->setObjectName(QString::fromUtf8("ButtonP"));
        ButtonP->setGeometry(QRect(620, 350, 42, 42));
        ButtonP->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        ButtonQ = new QPushButton(gamewindow);
        ButtonQ->setObjectName(QString::fromUtf8("ButtonQ"));
        ButtonQ->setGeometry(QRect(410, 410, 42, 42));
        ButtonQ->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        ButtonR = new QPushButton(gamewindow);
        ButtonR->setObjectName(QString::fromUtf8("ButtonR"));
        ButtonR->setGeometry(QRect(470, 410, 42, 42));
        ButtonR->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        ButtonO = new QPushButton(gamewindow);
        ButtonO->setObjectName(QString::fromUtf8("ButtonO"));
        ButtonO->setGeometry(QRect(560, 350, 42, 42));
        ButtonO->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        ButtonU = new QPushButton(gamewindow);
        ButtonU->setObjectName(QString::fromUtf8("ButtonU"));
        ButtonU->setGeometry(QRect(650, 410, 42, 42));
        ButtonU->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        ButtonT = new QPushButton(gamewindow);
        ButtonT->setObjectName(QString::fromUtf8("ButtonT"));
        ButtonT->setGeometry(QRect(590, 410, 42, 42));
        ButtonT->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        ButtonS = new QPushButton(gamewindow);
        ButtonS->setObjectName(QString::fromUtf8("ButtonS"));
        ButtonS->setGeometry(QRect(530, 410, 42, 42));
        ButtonS->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        ButtonY = new QPushButton(gamewindow);
        ButtonY->setObjectName(QString::fromUtf8("ButtonY"));
        ButtonY->setGeometry(QRect(560, 470, 42, 42));
        ButtonY->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        ButtonW = new QPushButton(gamewindow);
        ButtonW->setObjectName(QString::fromUtf8("ButtonW"));
        ButtonW->setGeometry(QRect(440, 470, 42, 42));
        ButtonW->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        ButtonZ = new QPushButton(gamewindow);
        ButtonZ->setObjectName(QString::fromUtf8("ButtonZ"));
        ButtonZ->setGeometry(QRect(620, 470, 42, 42));
        ButtonZ->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        ButtonX = new QPushButton(gamewindow);
        ButtonX->setObjectName(QString::fromUtf8("ButtonX"));
        ButtonX->setGeometry(QRect(500, 470, 42, 42));
        ButtonX->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));
        ButtonV = new QPushButton(gamewindow);
        ButtonV->setObjectName(QString::fromUtf8("ButtonV"));
        ButtonV->setGeometry(QRect(380, 470, 42, 42));
        ButtonV->setStyleSheet(QString::fromUtf8("background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;"));

        retranslateUi(gamewindow);

        QMetaObject::connectSlotsByName(gamewindow);
    } // setupUi

    void retranslateUi(QDialog *gamewindow)
    {
        gamewindow->setWindowTitle(QCoreApplication::translate("gamewindow", "Dialog", nullptr));
        timeLimitLabel->setText(QCoreApplication::translate("gamewindow", "time limitx", nullptr));
        hintButton->setText(QCoreApplication::translate("gamewindow", "Hint", nullptr));
        chancesLabel->setText(QCoreApplication::translate("gamewindow", "Chances:", nullptr));
        chanceValueLabel->setText(QCoreApplication::translate("gamewindow", "X", nullptr));
        scoreLabel->setText(QCoreApplication::translate("gamewindow", "SCORE:", nullptr));
        scoreValueLabel->setText(QCoreApplication::translate("gamewindow", "X", nullptr));
        backButton->setText(QCoreApplication::translate("gamewindow", "<- Give Up", nullptr));
        baseHMLabel->setText(QString());
        firstHMLabel->setText(QString());
        secondHMLabel->setText(QString());
        thirdHMLabel->setText(QString());
        fourthHMLabel->setText(QCoreApplication::translate("gamewindow", "O", nullptr));
        fifthHMLabel->setText(QString());
        sixthHMLabel->setText(QString());
        seventhHMLabel->setText(QCoreApplication::translate("gamewindow", "/\\", nullptr));
        puzzleWordLabel->setText(QCoreApplication::translate("gamewindow", "Puzzle Word", nullptr));
        ButtonA->setText(QCoreApplication::translate("gamewindow", "A", nullptr));
        ButtonB->setText(QCoreApplication::translate("gamewindow", "B", nullptr));
        ButtonC->setText(QCoreApplication::translate("gamewindow", "C", nullptr));
        ButtonD->setText(QCoreApplication::translate("gamewindow", "D", nullptr));
        ButtonE->setText(QCoreApplication::translate("gamewindow", "E", nullptr));
        ButtonF->setText(QCoreApplication::translate("gamewindow", "F", nullptr));
        ButtonG->setText(QCoreApplication::translate("gamewindow", "G", nullptr));
        ButtonH->setText(QCoreApplication::translate("gamewindow", "H", nullptr));
        ButtonJ->setText(QCoreApplication::translate("gamewindow", "J", nullptr));
        ButtonK->setText(QCoreApplication::translate("gamewindow", "K", nullptr));
        ButtonL->setText(QCoreApplication::translate("gamewindow", "L", nullptr));
        ButtonI->setText(QCoreApplication::translate("gamewindow", "I", nullptr));
        ButtonM->setText(QCoreApplication::translate("gamewindow", "M", nullptr));
        ButtonN->setText(QCoreApplication::translate("gamewindow", "N", nullptr));
        ButtonP->setText(QCoreApplication::translate("gamewindow", "P", nullptr));
        ButtonQ->setText(QCoreApplication::translate("gamewindow", "Q", nullptr));
        ButtonR->setText(QCoreApplication::translate("gamewindow", "R", nullptr));
        ButtonO->setText(QCoreApplication::translate("gamewindow", "O", nullptr));
        ButtonU->setText(QCoreApplication::translate("gamewindow", "U", nullptr));
        ButtonT->setText(QCoreApplication::translate("gamewindow", "T", nullptr));
        ButtonS->setText(QCoreApplication::translate("gamewindow", "S", nullptr));
        ButtonY->setText(QCoreApplication::translate("gamewindow", "Y", nullptr));
        ButtonW->setText(QCoreApplication::translate("gamewindow", "W", nullptr));
        ButtonZ->setText(QCoreApplication::translate("gamewindow", "Z", nullptr));
        ButtonX->setText(QCoreApplication::translate("gamewindow", "X", nullptr));
        ButtonV->setText(QCoreApplication::translate("gamewindow", "V", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gamewindow: public Ui_gamewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
