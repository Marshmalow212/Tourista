#ifndef INFO_H
#define INFO_H
#include <QSqlDatabase>

class info
{
private:
    QSqlDatabase indb;
public:
    info();
    bool Cnt();
    void Discnt();
};

#endif // INFO_H
