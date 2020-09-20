#ifndef PRICE_H
#define PRICE_H
#include <QSqlDatabase>


class Price
{
private:
    QSqlDatabase pdb;
public:
    Price();
    bool Cnt();
    void Discnt();
};

#endif // PRICE_H
