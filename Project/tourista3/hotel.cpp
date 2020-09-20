#include "hotel.h"

hotel::hotel()
{
    hldb = QSqlDatabase::addDatabase("QSQLITE");
    hldb.setDatabaseName("E:/Tourista/Final/TOURISTA/DB/Hotel.db");

}
bool hotel::cnt()
{
    if(hldb.open())return true;

    else return false;

}
void hotel::discnt()
{
    hldb.close();
}

