#ifndef SCOREBOARD_H
#define SCOREBOARD_H

#include <QDialog>
#include <database.h>

namespace Ui {
class scoreboard;
}

class scoreboard : public QDialog
{
    Q_OBJECT

public:
    explicit scoreboard(QWidget *parent = nullptr);
    ~scoreboard();

private slots:  // Called when signal is given
    void on_buttonBox_clicked();

private:
    Ui::scoreboard *ui;
    database data;
    QString scoreData;
    int firstScore;
    int secondScore;
    int thirdScore;
    vector<int> scores;
};

#endif // SCOREBOARD_H
