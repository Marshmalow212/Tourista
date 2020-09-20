#include "databaseconnection.h"

databaseconnection::databaseconnection()
{
    tdb = QSqlDatabase::addDatabase("QSQLITE");
    tdb.setDatabaseName("E:/Tourista/Final/TOURISTA/DB/Transport.db");

}
bool databaseconnection::Cnt()
{
    if(tdb.open())
    {
        return true;
    }
    else return false;
}
void databaseconnection::Discnt()
{
   tdb.close();
}

