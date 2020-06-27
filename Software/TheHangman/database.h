#ifndef DATABASE_H
#define DATABASE_H

#include <QVector>
#include <QFile>
#include <QTextStream>

using namespace std; 

class database
{
private:
    QVector<QString> wordDatabase;
    QVector<QString> hintDatabase;
    
public:
    database();
    QString getRandomText();
    void addWord(QString woxrd);
    void addHint(QString hint);
    QVector<QString> getWordDatabase();
};

#endif // DATABASE_H
