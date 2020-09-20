#include "selection.h"

Selection::Selection()
{
    sdb = QSqlDatabase::addDatabase("QSQLITE");
    sdb.setDatabaseName("E:/Tourista/Final/TOURISTA/DB/Places.db");

}
bool Selection::Cnt()
{
    if(sdb.open())return true;

    else return false;
}
void Selection::Discnt()
{
    sdb.close();
}
