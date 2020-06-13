#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include <QWidget>

namespace Ui {
class GameLogic;
}

class GameLogic : public QWidget
{
    Q_OBJECT

public:
    explicit GameLogic(QWidget *parent = nullptr);
    ~GameLogic();

private:
    Ui::GameLogic *ui;
};

#endif // GAMELOGIC_H
