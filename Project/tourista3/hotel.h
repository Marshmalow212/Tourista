#ifndef HOTEL_H
#define HOTEL_H
#include <QSqlDatabase>


class hotel
{
private:
    QSqlDatabase hldb;
public:
    hotel();
    bool cnt();
    void discnt();
};

#endif // HOTEL_H
