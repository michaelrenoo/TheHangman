/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *gameTitleTextEdit;
    QPushButton *playGameButton;
    QPushButton *addWordsButton;
    QPushButton *scroreBoardButton;
    QLabel *gameLogoLabel;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setMaximumSize(QSize(800, 16777215));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gameTitleTextEdit = new QTextEdit(centralwidget);
        gameTitleTextEdit->setObjectName(QString::fromUtf8("gameTitleTextEdit"));
        gameTitleTextEdit->setGeometry(QRect(340, 90, 431, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Reference Sans Serif"));
        gameTitleTextEdit->setFont(font);
        gameTitleTextEdit->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        gameTitleTextEdit->setReadOnly(true);
        playGameButton = new QPushButton(centralwidget);
        playGameButton->setObjectName(QString::fromUtf8("playGameButton"));
        playGameButton->setGeometry(QRect(460, 250, 181, 51));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Reference Sans Serif"));
        font1.setPointSize(16);
        playGameButton->setFont(font1);
        playGameButton->setAutoFillBackground(false);
        addWordsButton = new QPushButton(centralwidget);
        addWordsButton->setObjectName(QString::fromUtf8("addWordsButton"));
        addWordsButton->setGeometry(QRect(460, 330, 181, 51));
        addWordsButton->setFont(font1);
        scroreBoardButton = new QPushButton(centralwidget);
        scroreBoardButton->setObjectName(QString::fromUtf8("scroreBoardButton"));
        scroreBoardButton->setGeometry(QRect(460, 410, 181, 51));
        scroreBoardButton->setFont(font1);
        gameLogoLabel = new QLabel(centralwidget);
        gameLogoLabel->setObjectName(QString::fromUtf8("gameLogoLabel"));
        gameLogoLabel->setGeometry(QRect(30, 90, 281, 431));
        gameLogoLabel->setAutoFillBackground(true);
        gameLogoLabel->setPixmap(QPixmap(QString::fromUtf8("../../Abbildungen/mainMenuImage.png")));
        gameLogoLabel->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(gameTitleTextEdit, playGameButton);
        QWidget::setTabOrder(playGameButton, addWordsButton);
        QWidget::setTabOrder(addWordsButton, scroreBoardButton);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        gameTitleTextEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Reference Sans Serif'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; font-size:36pt;\">The Hangman</span></p></body></html>", nullptr));
        playGameButton->setText(QCoreApplication::translate("MainWindow", "Play Game", nullptr));
        addWordsButton->setText(QCoreApplication::translate("MainWindow", "Add Words", nullptr));
        scroreBoardButton->setText(QCoreApplication::translate("MainWindow", "Score Board", nullptr));
        gameLogoLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
