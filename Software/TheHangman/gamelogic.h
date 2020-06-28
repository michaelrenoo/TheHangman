#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include <QWidget>
#include <QTimer>
#include <database.h>


namespace Ui {
class GameLogic;
}

class GameLogic : public QWidget
{
    Q_OBJECT

public:
    explicit GameLogic(QWidget *parent = nullptr);
    ~GameLogic();

public slots:
    void timeLimit();

private:
    Ui::GameLogic *ui;
    QTimer *timer;
    database data;
    int timeNumber;

};

#endif // GAMELOGIC_H

//time limit: https://www.youtube.com/watch?v=zywq2kpcXP4
