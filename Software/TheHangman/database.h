#ifndef DATABASE_H
#define DATABASE_H

#include <QMultiMap>
#include <QTimer>
#include <vector>

using namespace std; 

class database
{
private:
    QVector<QString> textDatabase;
    QVector<QString> hintDatabase;
    QTimer timer;
    
public:
    database();
    QString getRandomText();
};

#endif // DATABASE_H
