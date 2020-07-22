#include "addwords.h"
#include "ui_addwords.h"

addwords::addwords(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addwords)
{
    ui->setupUi(this);
}

addwords::~addwords()
{
    delete ui;
}

void addwords::showDatabase()
{
    QString wordsDatabasePath = qApp->applicationDirPath(); //location of the file , assuming in application dir
    wordsDatabasePath.append("/WordsDatabase(TheHangman).txt");
    QFile wordsDatbaseFile(wordsDatabasePath);
    if (!wordsDatbaseFile.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "title", "file is not opened");
    }
    QTextStream inWord(&wordsDatbaseFile);
    QString word = inWord.readAll();
    ui->addWordText->setPlainText(word);
    wordsDatbaseFile.close();

    QString hintsDatabasePath = qApp->applicationDirPath(); //location of the file , assuming in application dir
    hintsDatabasePath.append("/HintsDatabase(TheHangman).txt");
    QFile hintsDatabaseFile (hintsDatabasePath);
    if (!hintsDatabaseFile.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this, "title", "file is not opened");
    }
    QTextStream inHint (&hintsDatabaseFile);
    QString hint = inHint.readAll();
    ui->addHintText->setPlainText(hint);
    hintsDatabaseFile.close();
}

void addwords::on_buttonBox_accepted()
{
    QString wordsDatabasePath = qApp->applicationDirPath(); //location of the file , assuming in application dir. source: https://forum.qt.io/topic/72651/qiodevice-write-device-not-open-when-file-is-open/3
    wordsDatabasePath.append("/WordsDatabase(TheHangman).txt"); //source: https://forum.qt.io/topic/72651/qiodevice-write-device-not-open-when-file-is-open/3
    QFile wordsDatbaseFile(wordsDatabasePath); //source: https://forum.qt.io/topic/72651/qiodevice-write-device-not-open-when-file-is-open/3
    if (!wordsDatbaseFile.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "Warning", "File cannot be opened/found\nPlease make sure there are both .txt files in the game directory.");
    }
    QTextStream outWord(&wordsDatbaseFile);
    QString word = ui->addWordText->toPlainText();
    outWord << word;
    wordsDatbaseFile.flush();
    wordsDatbaseFile.close();

    QString hintsDatabasePath = qApp->applicationDirPath();  //location of the file , assuming in application dir
    hintsDatabasePath.append("/HintsDatabase(TheHangman).txt");
    QFile hintsDatabaseFile (hintsDatabasePath);
    if (!hintsDatabaseFile.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this, "Warning", "File cannot be opened/found\nPlease make sure there are both .txt files in the game directory.");
    }
    QTextStream outHint (&hintsDatabaseFile);
    QString hint = ui->addHintText->toPlainText();
    outHint << hint;
    hintsDatabaseFile.flush();
    hintsDatabaseFile.close();

    data.addWord(word);
    data.addHint(hint);
    foreach(QString word, data.getWordDatabase()){  //https://stackoverflow.com/questions/771008/for-loop-vs-qts-foreach-in-c
        qDebug() << word;
    }
    this->close();
}

void addwords::on_buttonBox_rejected()
{
    this->close();
}
