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
    QLabel *chancesLabel;
    QLabel *chanceValueLabel;
    QLabel *scoreLabel;
    QLabel *scoreValueLabel;
    QPushButton *backButton;
    QLabel *HMLabel1;
    QLabel *HMLabel2;
    QLabel *HMLabel3;
    QLabel *HMLabel4;
    QLabel *HMLabel5;
    QLabel *HMLabel7;
    QLabel *HMLabel6;
    QLabel *HMLabel8;
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
        gamewindow->setStyleSheet(QString::fromUtf8("background-color: #F1D1B5;"));
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
        hintButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #568EA6;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #305F72;\n"
"}"));
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
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #F18C8E;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: #F0B7A4;\n"
"}"));
        HMLabel1 = new QLabel(gamewindow);
        HMLabel1->setObjectName(QString::fromUtf8("HMLabel1"));
        HMLabel1->setGeometry(QRect(30, 500, 121, 21));
        HMLabel1->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 0)"));
        HMLabel2 = new QLabel(gamewindow);
        HMLabel2->setObjectName(QString::fromUtf8("HMLabel2"));
        HMLabel2->setEnabled(true);
        HMLabel2->setGeometry(QRect(40, 100, 21, 401));
        HMLabel2->setStyleSheet(QString::fromUtf8("background-color: brown;"));
        HMLabel3 = new QLabel(gamewindow);
        HMLabel3->setObjectName(QString::fromUtf8("HMLabel3"));
        HMLabel3->setGeometry(QRect(60, 100, 171, 16));
        HMLabel3->setStyleSheet(QString::fromUtf8("background-color: brown;"));
        HMLabel4 = new QLabel(gamewindow);
        HMLabel4->setObjectName(QString::fromUtf8("HMLabel4"));
        HMLabel4->setGeometry(QRect(210, 110, 16, 71));
        HMLabel4->setStyleSheet(QString::fromUtf8("background-color:brown;"));
        HMLabel5 = new QLabel(gamewindow);
        HMLabel5->setObjectName(QString::fromUtf8("HMLabel5"));
        HMLabel5->setGeometry(QRect(180, 170, 80, 80));
        QFont font4;
        font4.setPointSize(65);
        HMLabel5->setFont(font4);
        HMLabel5->setAlignment(Qt::AlignCenter);
        HMLabel7 = new QLabel(gamewindow);
        HMLabel7->setObjectName(QString::fromUtf8("HMLabel7"));
        HMLabel7->setGeometry(QRect(210, 240, 16, 151));
        HMLabel7->setStyleSheet(QString::fromUtf8("background-color: black;"));
        HMLabel6 = new QLabel(gamewindow);
        HMLabel6->setObjectName(QString::fromUtf8("HMLabel6"));
        HMLabel6->setGeometry(QRect(130, 270, 181, 16));
        HMLabel6->setStyleSheet(QString::fromUtf8("background-color: black;"));
        HMLabel8 = new QLabel(gamewindow);
        HMLabel8->setObjectName(QString::fromUtf8("HMLabel8"));
        HMLabel8->setGeometry(QRect(150, 370, 141, 101));
        QFont font5;
        font5.setPointSize(75);
        HMLabel8->setFont(font5);
        HMLabel8->setAlignment(Qt::AlignCenter);
        puzzleWordLabel = new QLabel(gamewindow);
        puzzleWordLabel->setObjectName(QString::fromUtf8("puzzleWordLabel"));
        puzzleWordLabel->setGeometry(QRect(360, 100, 350, 100));
        QFont font6;
        font6.setPointSize(35);
        font6.setUnderline(true);
        puzzleWordLabel->setFont(font6);
        puzzleWordLabel->setAlignment(Qt::AlignCenter);
        ButtonA = new QPushButton(gamewindow);
        ButtonA->setObjectName(QString::fromUtf8("ButtonA"));
        ButtonA->setGeometry(QRect(370, 230, 42, 42));
        ButtonA->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonB = new QPushButton(gamewindow);
        ButtonB->setObjectName(QString::fromUtf8("ButtonB"));
        ButtonB->setGeometry(QRect(430, 230, 42, 42));
        ButtonB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonC = new QPushButton(gamewindow);
        ButtonC->setObjectName(QString::fromUtf8("ButtonC"));
        ButtonC->setGeometry(QRect(490, 230, 42, 42));
        ButtonC->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonD = new QPushButton(gamewindow);
        ButtonD->setObjectName(QString::fromUtf8("ButtonD"));
        ButtonD->setGeometry(QRect(550, 230, 42, 42));
        ButtonD->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonE = new QPushButton(gamewindow);
        ButtonE->setObjectName(QString::fromUtf8("ButtonE"));
        ButtonE->setGeometry(QRect(610, 230, 42, 42));
        ButtonE->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonF = new QPushButton(gamewindow);
        ButtonF->setObjectName(QString::fromUtf8("ButtonF"));
        ButtonF->setGeometry(QRect(670, 230, 42, 42));
        ButtonF->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonG = new QPushButton(gamewindow);
        ButtonG->setObjectName(QString::fromUtf8("ButtonG"));
        ButtonG->setGeometry(QRect(410, 290, 42, 42));
        ButtonG->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonH = new QPushButton(gamewindow);
        ButtonH->setObjectName(QString::fromUtf8("ButtonH"));
        ButtonH->setGeometry(QRect(470, 290, 42, 42));
        ButtonH->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonJ = new QPushButton(gamewindow);
        ButtonJ->setObjectName(QString::fromUtf8("ButtonJ"));
        ButtonJ->setGeometry(QRect(590, 290, 42, 42));
        ButtonJ->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonK = new QPushButton(gamewindow);
        ButtonK->setObjectName(QString::fromUtf8("ButtonK"));
        ButtonK->setGeometry(QRect(650, 290, 42, 42));
        ButtonK->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonL = new QPushButton(gamewindow);
        ButtonL->setObjectName(QString::fromUtf8("ButtonL"));
        ButtonL->setGeometry(QRect(380, 350, 42, 42));
        ButtonL->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonI = new QPushButton(gamewindow);
        ButtonI->setObjectName(QString::fromUtf8("ButtonI"));
        ButtonI->setGeometry(QRect(530, 290, 42, 42));
        ButtonI->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonM = new QPushButton(gamewindow);
        ButtonM->setObjectName(QString::fromUtf8("ButtonM"));
        ButtonM->setGeometry(QRect(440, 350, 42, 42));
        ButtonM->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonN = new QPushButton(gamewindow);
        ButtonN->setObjectName(QString::fromUtf8("ButtonN"));
        ButtonN->setGeometry(QRect(500, 350, 42, 42));
        ButtonN->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonP = new QPushButton(gamewindow);
        ButtonP->setObjectName(QString::fromUtf8("ButtonP"));
        ButtonP->setGeometry(QRect(620, 350, 42, 42));
        ButtonP->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonQ = new QPushButton(gamewindow);
        ButtonQ->setObjectName(QString::fromUtf8("ButtonQ"));
        ButtonQ->setGeometry(QRect(410, 410, 42, 42));
        ButtonQ->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonR = new QPushButton(gamewindow);
        ButtonR->setObjectName(QString::fromUtf8("ButtonR"));
        ButtonR->setGeometry(QRect(470, 410, 42, 42));
        ButtonR->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonO = new QPushButton(gamewindow);
        ButtonO->setObjectName(QString::fromUtf8("ButtonO"));
        ButtonO->setGeometry(QRect(560, 350, 42, 42));
        ButtonO->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonU = new QPushButton(gamewindow);
        ButtonU->setObjectName(QString::fromUtf8("ButtonU"));
        ButtonU->setGeometry(QRect(650, 410, 42, 42));
        ButtonU->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonT = new QPushButton(gamewindow);
        ButtonT->setObjectName(QString::fromUtf8("ButtonT"));
        ButtonT->setGeometry(QRect(590, 410, 42, 42));
        ButtonT->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonS = new QPushButton(gamewindow);
        ButtonS->setObjectName(QString::fromUtf8("ButtonS"));
        ButtonS->setGeometry(QRect(530, 410, 42, 42));
        ButtonS->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonY = new QPushButton(gamewindow);
        ButtonY->setObjectName(QString::fromUtf8("ButtonY"));
        ButtonY->setGeometry(QRect(560, 470, 42, 42));
        ButtonY->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonW = new QPushButton(gamewindow);
        ButtonW->setObjectName(QString::fromUtf8("ButtonW"));
        ButtonW->setGeometry(QRect(440, 470, 42, 42));
        ButtonW->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonZ = new QPushButton(gamewindow);
        ButtonZ->setObjectName(QString::fromUtf8("ButtonZ"));
        ButtonZ->setGeometry(QRect(620, 470, 42, 42));
        ButtonZ->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonX = new QPushButton(gamewindow);
        ButtonX->setObjectName(QString::fromUtf8("ButtonX"));
        ButtonX->setGeometry(QRect(500, 470, 42, 42));
        ButtonX->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));
        ButtonV = new QPushButton(gamewindow);
        ButtonV->setObjectName(QString::fromUtf8("ButtonV"));
        ButtonV->setGeometry(QRect(380, 470, 42, 42));
        ButtonV->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: white;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	background-color: blue;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:20px;\n"
" border-color: red;\n"
" max-width:40px;\n"
" max-height:40px;\n"
" min-width:40px;\n"
" min-height:40px;\n"
"}"));

        retranslateUi(gamewindow);

        QMetaObject::connectSlotsByName(gamewindow);
    } // setupUi

    void retranslateUi(QDialog *gamewindow)
    {
        gamewindow->setWindowTitle(QCoreApplication::translate("gamewindow", "The Hangman - Game", nullptr));
        timeLimitLabel->setText(QCoreApplication::translate("gamewindow", "time limitx", nullptr));
        hintButton->setText(QCoreApplication::translate("gamewindow", "Hint", nullptr));
        chancesLabel->setText(QCoreApplication::translate("gamewindow", "Chances:", nullptr));
        chanceValueLabel->setText(QCoreApplication::translate("gamewindow", "X", nullptr));
        scoreLabel->setText(QCoreApplication::translate("gamewindow", "SCORE:", nullptr));
        scoreValueLabel->setText(QCoreApplication::translate("gamewindow", "X", nullptr));
        backButton->setText(QCoreApplication::translate("gamewindow", "<- Give Up", nullptr));
        HMLabel1->setText(QString());
        HMLabel2->setText(QString());
        HMLabel3->setText(QString());
        HMLabel4->setText(QString());
        HMLabel5->setText(QCoreApplication::translate("gamewindow", "O", nullptr));
        HMLabel7->setText(QString());
        HMLabel6->setText(QString());
        HMLabel8->setText(QCoreApplication::translate("gamewindow", "/\\", nullptr));
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
