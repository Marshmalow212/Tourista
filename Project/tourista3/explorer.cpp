#include "explorer.h"
#include "ui_explorer.h"
#include <QSqlDatabase>
#include <QTabWidget>
#include "selection.h"
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QString>
#include <QComboBox>
#include <QTableView>
#include <QDebug>
#include <QHeaderView>
#include <QColumnView>
#include "databaseconnection.h"
#include "hotel.h"
#include <QTabBar>
#include <QIntegerForSize>
#include "databaseconnection.h"
#include <QSqlRecord>
#define COX "Cox's Bazar"


Explorer::Explorer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Explorer)
{
    ui->setupUi(this);
    QPixmap bkgnd(":/resources/img/backi.png");
           bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
           QPalette palette;
           palette.setBrush(QPalette::Background, bkgnd);
           this->setPalette(palette);
}

Explorer::~Explorer()
{
    delete ui;
}

void Explorer::on_tabWidget_currentChanged(int index)
{
    //qDebug()<<index<<endl;
    if(index == 1)
    {
            Selection sdb;
            QSqlQuery s;
            QSqlQueryModel *sm = new QSqlQueryModel;
            sdb.Cnt();
            s.exec("Select Division from Places");
            sm->setQuery(s);
            ui->divinfocombo->setModel(sm);
            sdb.Discnt();
    }
    else if(index == 2)
    {
            Selection sdb;
            QSqlQuery s;
            QSqlQueryModel *sm = new QSqlQueryModel;
            sdb.Cnt();
            s.exec("Select Division from Places");
            sm->setQuery(s);
            ui->tdcombo->setModel(sm);
            sdb.Discnt();

    }
    else if(index == 3)
    {

        Selection sdb;
        QSqlQuery s;
        QSqlQueryModel *sm = new QSqlQueryModel;
        sdb.Cnt();
        s.exec("Select Division from Places");
        sm->setQuery(s);
        ui->hdcombo->setModel(sm);
        sdb.Discnt();

    }


}

void Explorer::on_divinfocombo_currentTextChanged(const QString &arg1)
{
   QString div = ui->divinfocombo->currentText();
   Selection sdb;
   QSqlQuery s;
   QSqlQueryModel *sm = new QSqlQueryModel;
   sdb.Cnt();
   s.exec("Select "+div+" from Places");
   sm->setQuery(s);
   ui->plinfocombo->setModel(sm);
   sdb.Discnt();

}

void Explorer::on_plinfocombo_currentTextChanged(const QString &arg1)
{
    QString pl = ui->plinfocombo->currentText();
    Selection sdb;
    QSqlQuery s;
    QSqlQueryModel *sm = new QSqlQueryModel;
   if(pl==COX)
   {
       sdb.Cnt();
       qDebug()<<pl<<endl;
       s.exec("Select * from Placeinfo Where Place = 'Cox Bazar'");
       sm->setQuery(s);
       ui->placestable->setModel(sm);
       int len = sm->columnCount();
       ui->placestable->setColumnHidden((len-2),true);
       ui->placestable->setColumnHidden((len-1),true);
       QByteArray file1 = sm->record(0).value(len-2).toByteArray();
       QByteArray file2 = sm->record(0).value(len-1).toByteArray();
       QPixmap gallery = QPixmap();
       QPixmap gallery2 = QPixmap();
       gallery.loadFromData(file1);
       gallery2.loadFromData(file2);
       ui->gallerylbl->setPixmap(gallery);
       ui->gallerylbl->show();
       ui->gallerylbl->setScaledContents(true);
       ui->gallerylbl_2->setPixmap(gallery2);
       ui->gallerylbl_2->show();
       ui->gallerylbl_2->setScaledContents(true);

       for(int i=0;i<len;i++){ui->placestable->setColumnWidth(i,200);}
       ui->placestable->resizeRowsToContents();
       sdb.Discnt();
   }
   else {
       sdb.Cnt();
       qDebug()<<pl<<endl;
       s.exec("Select * from Placeinfo Where Place = '"+pl+"'");
       sm->setQuery(s);
       ui->placestable->setModel(sm);
       int len = sm->columnCount();
       ui->placestable->setColumnHidden((len-2),true);
       ui->placestable->setColumnHidden((len-1),true);
       QByteArray file1 = sm->record(0).value(len-2).toByteArray();
       QByteArray file2 = sm->record(0).value(len-1).toByteArray();
       QPixmap gallery = QPixmap();
       QPixmap gallery2 = QPixmap();
       gallery.loadFromData(file1);
       gallery2.loadFromData(file2);
       ui->gallerylbl->setPixmap(gallery);
       ui->gallerylbl->show();
       ui->gallerylbl->setScaledContents(true);
       ui->gallerylbl_2->setPixmap(gallery2);
       ui->gallerylbl_2->show();
       ui->gallerylbl_2->setScaledContents(true);

       for(int i=0;i<len;i++){ui->placestable->setColumnWidth(i,200);}
       ui->placestable->resizeRowsToContents();
       sdb.Discnt();
   }


}
QString td;
void Explorer::on_tdcombo_currentTextChanged(const QString &arg1)
{
    td = ui->tdcombo->currentText();
    Selection sdb;
    QSqlQuery s;
    QSqlQueryModel *sm = new QSqlQueryModel;
    sdb.Cnt();
    s.exec("Select "+td+" from Places");
    sm->setQuery(s);
    ui->tpcombo->setModel(sm);
    sdb.Discnt();
}

void Explorer::on_tpcombo_currentTextChanged(const QString &arg1)
{
    databaseconnection tdb;
    QSqlQuery q;
    QSqlQueryModel *qm = new QSqlQueryModel;
    tdb.Cnt();
    q.exec("select Type from Transport");
    qm->setQuery(q);
    ui->ttcombo->setModel(qm);
    tdb.Discnt();

}

void Explorer::on_ttcombo_currentTextChanged(const QString &arg1)
{
    QString type = ui->ttcombo->currentText();
    databaseconnection tdb;
    QSqlQuery q;
    QSqlQueryModel *qm = new QSqlQueryModel;
    if(type == "Bus")
    {
        tdb.Cnt();
        q.exec("Select BSn from Transport");
        qm->setQuery(q);
        ui->tscombo->setModel(qm);
        tdb.Discnt();
    }
    else if(type == "Train")
    {
        tdb.Cnt();
        q.exec("Select TSn from Transport");
        qm->setQuery(q);
        ui->tscombo->setModel(qm);
        tdb.Discnt();
    }
}

void Explorer::on_tscombo_currentTextChanged(const QString &arg1)
{
    QString stn = ui->tscombo->currentText();
    databaseconnection tdb;
    QSqlQuery t;
    QSqlQueryModel *tm = new QSqlQueryModel;
    tdb.Cnt();
    t.exec("Select Company,Category,Facilities,Time,Price From bus Where Station = '"+stn+"'");
    tm->setQuery(t);
    ui->transtable->setModel(tm);
    for(int i=0;i<5;i++){ui->transtable->setColumnWidth(i,200);}
    ui->transtable->resizeRowsToContents();
    tdb.Discnt();

}

void Explorer::on_hdcombo_currentTextChanged(const QString &arg1)
{
    QString hp = ui->hdcombo->currentText();
    Selection sdb;
    QSqlQuery s;
    QSqlQueryModel *sm = new QSqlQueryModel;
    sdb.Cnt();
    s.exec("Select "+hp+" from Places");
    sm->setQuery(s);
    ui->hpcombo->setModel(sm);
    sdb.Discnt();

}


void Explorer::on_hpcombo_currentTextChanged(const QString &arg1)
{
    QString place = ui->hpcombo->currentText();
    hotel sdb;
    QSqlQuery s;
    QSqlQueryModel *sm = new QSqlQueryModel;
    if(place == "Cox's Bazar")
    {
        sdb.cnt();
        s.exec("Select Hotel,Bed,Facilities,Price from HInfo Where Place = 'Cox' ");
        sm->setQuery(s);
        ui->hottable->setModel(sm);
        for(int i=0;i<sm->columnCount();i++){ui->hottable->setColumnWidth(i,200);}
        ui->hottable->resizeRowsToContents();
        sdb.discnt();
    }
    else
    {
        sdb.cnt();
        s.exec("Select Hotel,Bed,Facilities,Price from HInfo Where Place = '"+place+"' ");
        sm->setQuery(s);
        ui->hottable->setModel(sm);
        for(int i=0;i<sm->columnCount();i++){ui->hottable->setColumnWidth(i,200);}
        ui->hottable->resizeRowsToContents();
        sdb.discnt();
    }
}
