#ifndef SELECTION_H
#define SELECTION_H
#include <QSqlDatabase>

class Selection
{
private:
    QSqlDatabase sdb;
public:
    Selection();
    bool Cnt();
    void Discnt();
};

#endif // SELECTION_H
