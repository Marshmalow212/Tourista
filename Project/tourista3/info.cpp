#include "info.h"
#include <QSqlDatabase>

info::info()
{
    indb = QSqlDatabase::addDatabase("QSQLITE");
    indb.setDatabaseName("E:/Tourista/Final/TOURISTA/DB/Info.db");

}
bool info::Cnt()
{
    if(indb.open())return true;

    else return false;
}
void info::Discnt()
{
    indb.close();
}
