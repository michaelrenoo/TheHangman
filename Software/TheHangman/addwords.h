#ifndef ADDWORDS_H
#define ADDWORDS_H

#include <QDialog>

namespace Ui {
class addwords;
}

class addwords : public QDialog
{
    Q_OBJECT

public:
    explicit addwords(QWidget *parent = nullptr);
    ~addwords();

private:
    Ui::addwords *ui;
};

#endif // ADDWORDS_H
