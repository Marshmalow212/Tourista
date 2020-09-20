#ifndef DATABASECONNECTION_H
#define DATABASECONNECTION_H
#include <QSqlDatabase>


class databaseconnection
{
private:
    QSqlDatabase tdb;
public:
    databaseconnection();
    bool Cnt();
    void Discnt();
};

#endif // DATABASECONNECTION_H
