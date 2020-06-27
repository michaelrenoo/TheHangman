#ifndef ADDWORDS_H
#define ADDWORDS_H

#include <QDialog>
#include <database.h>
#include <QMessageBox>
#include <QDebug>
#include <QDir>

namespace Ui {
class addwords;
}

class addwords : public QDialog
{
    Q_OBJECT

public:
    explicit addwords(QWidget *parent = nullptr);
    ~addwords();
    void showDatabase();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::addwords *ui;
    database data;
};

#endif // ADDWORDS_H

//for read and write to file: https://www.youtube.com/watch?v=tY6nW3Wm3NE&list=PLS1QulWo1RIZiBcTr5urECberTITj7gjA&index=22
