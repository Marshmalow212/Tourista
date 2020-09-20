#include "price.h"

Price::Price()
{
    pdb = QSqlDatabase::addDatabase("QSQLITE");
    pdb.setDatabaseName("E:/Tourista/Final/TOURISTA/DB/price.db");

}
bool Price::Cnt()
{
    if(pdb.open())return true;

    else return false;
}
void Price::Discnt()
{
    pdb.close();
}

