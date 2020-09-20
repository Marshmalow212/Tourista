#include "Tourista.h"
#include "ui_Tourista.h"
#include<QPixmap>
#include "databaseconnection.h"
#include <QDebug>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QComboBox>
#include <QAction>
#include <QSqlQueryModel>
#include <QString>
#include <QWidget>
#include "selection.h"
#include <QLineEdit>
#include "info.h"
#include <QMessageBox>
#include "hotel.h"
#include "price.h"
#include <QSqlRecord>
#include "payment.h"
#include <QApplication>
#include <QtCore>

Tourista::Tourista(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Tourista)
{
    ui->setupUi(this);
    QPixmap bkgnd(":/resources/img/backii.png");
           bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
           QPalette palette;
           palette.setBrush(QPalette::Background, bkgnd);
           this->setPalette(palette);
    QPixmap pix(":/resources/img/register_297979.png");
    ui->icon_1->setIcon(pix);

    //ui->comboBox->addItems({"Division","Dhaka","Chittagong","Sylhet","Khulna","Rajshahi","Rangpur","Barishal"});
    //ui->comboBox_4->addItems({"BUS","TRAIN","AIR"});
    //ui->comboBox_6->addItems({"Non AC","AC"});
    //ui->comboBox_8->addItems({"Non AC","AC"});
    //ui->comboBox_9->addItems({"Single","Double"});
    Selection sdb;
    QSqlQuery s;
    QSqlQueryModel *sel = new QSqlQueryModel;
    sdb.Cnt();
    s.prepare("Select Division From Places");
    s.exec();
    sel->setQuery(s);
    ui->comboBox->setModel(sel);
    sdb.Discnt();

}

Tourista::~Tourista()
{
    delete ui;
}
QString emaillog;

void Tourista::on_pushButton_clicked(){ui->stackedWidget->setCurrentIndex(1);
                                       }

void Tourista::on_pushButton_2_clicked()
{
    //QString email = ui->lineEdit_9->text();
    info idb;
    QSqlQuery i;
    QString Address = ui->lineEdit_6->text();
    QString Phone = ui->lineEdit_7->text();

    idb.Cnt();
    i.exec("Update Info Set Address = '"+Address+"',Phone = '"+Phone+"' Where Email = '"+emaillog+"'");
    idb.Discnt();

    ui->stackedWidget->setCurrentIndex(4);

}

void Tourista::on_pushButton_18_clicked(){ui->stackedWidget->setCurrentIndex(2);}

void Tourista::on_pushButton_24_clicked(){ui->stackedWidget->setCurrentIndex(1);}

void Tourista::on_pushButton_14_clicked()
{
   ui->textBrowser->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_7->clear();

    ui->stackedWidget->setCurrentIndex(1);
}

void Tourista::on_pushButton_15_clicked()
{
    ui->textBrowser->clear();
     ui->lineEdit_6->clear();
     ui->lineEdit_7->clear();
    ui->stackedWidget->setCurrentIndex(1);
}


void Tourista::on_comboBox_currentTextChanged(const QString &arg1)
{
    QString div = ui->comboBox->currentText();
    Selection sdb;
    QSqlQuery s;
    QSqlQueryModel *sel = new QSqlQueryModel;

        sdb.Cnt();
        s.prepare("Select "+div+" From Places");
        s.exec();
        sel->setQuery(s);
        ui->comboBox_2->setModel(sel);
        sdb.Discnt();

}

void Tourista::on_checkBox_stateChanged(int arg1)
{
    databaseconnection tdb;
    QSqlQuery q;
    QSqlQueryModel *qm = new QSqlQueryModel;
    tdb.Cnt();
    qDebug()<<"Connected"<<endl;
    q.prepare("Select Type From Transport");
    q.exec();
    qm->setQuery(q);
    ui->comboBox_4->setModel(qm);
    tdb.Discnt();
    qDebug()<<"Disconnected"<<endl;
}

void Tourista::on_comboBox_4_currentTextChanged(const QString &arg1)
{
    databaseconnection tdb;
    QSqlQuery co,ca;
    QSqlQueryModel *com = new QSqlQueryModel;
    QSqlQueryModel *cat = new QSqlQueryModel;
    QString tp = ui->comboBox_4->currentText();
        tdb.Cnt();
        qDebug()<<"Connected"<<endl;
        co.prepare("Select "+tp+" From Transport");
        co.exec();
        com->setQuery(co);
        ui->comboBox_5->setModel(com);
        tdb.Discnt();

        qDebug()<<"Disconnected"<<endl;



    tdb.Cnt();
    ca.prepare("Select Category From Transport");
    ca.exec();
    cat->setQuery(ca);
    ui->comboBox_6->setModel(cat);
    tdb.Discnt();


}

QString plc;

void Tourista::on_comboBox_2_currentTextChanged(const QString &arg1)
{


}

void Tourista::on_pushButton_17_clicked()
{
    info indb;
    QSqlQuery q;
    QString name = ui->lineEdit->text();
    QString email = ui->lineEdit_5->text();
    QString pass = ui->lineEdit_2->text();

        indb.Cnt();
        if(q.exec("Select Name,Email From Info Where Name = '"+name+"' OR Email = '"+email+"'"))
        {
                int f=0;
                while(q.next())f++;
                if(f>0)
                {
                   QMessageBox::warning(this,"Error","Name or Email has already taken!");
                }
                else
                {
                    q.exec("Insert Into Info (Name,Email,Password) Values ('"+name+"','"+email+"','"+pass+"')");
                    QMessageBox::information(this,"Confirmation","Subscribtion Succesful");
                }


        }

         indb.Discnt();

         ui->lineEdit->clear();
         ui->lineEdit_5->clear();
         ui->lineEdit_2->clear();

}

void Tourista::on_checkBox_2_stateChanged(int arg1)
{
    plc= ui->comboBox_2->currentText();
    hotel hldb;
    QSqlQuery h;
    QSqlQueryModel *hl = new QSqlQueryModel;
    //qDebug()<<"From Combo Box 2"<<plc<<endl;

    if(plc == "Cox's Bazar")
    {
        hldb.cnt();
        h.prepare("Select Hotels from Hotel where Place = 'Cox' ");
        h.exec();
        hl->setQuery(h);
        ui->comboBox_7->setModel(hl);
        hldb.discnt();
    }
    else {
        hldb.cnt();
        h.prepare("Select Hotels from Hotel where Place = '"+plc+"' ");
        h.exec();
        hl->setQuery(h);
        ui->comboBox_7->setModel(hl);
        hldb.discnt();

    }

}

void Tourista::on_comboBox_7_currentTextChanged(const QString &arg1)
{
    QString hn = ui->comboBox_7->currentText();
    hotel hldb;
    QSqlQuery h;
    QSqlQueryModel *hl = new QSqlQueryModel;
    hldb.cnt();
    h.prepare("Select Bed From Hotel");
    h.exec();
    hl->setQuery(h);
    ui->comboBox_9->setModel(hl);
    hldb.discnt();
}

void Tourista::on_comboBox_9_activated(int index)
{
    hotel hldb;
    QSqlQuery h;
    QSqlQueryModel *hl = new QSqlQueryModel;
    hldb.cnt();
    h.prepare("Select Type From Hotel");
    h.exec();
    hl->setQuery(h);
    ui->comboBox_8->setModel(hl);
    hldb.discnt();
}

void Tourista::on_comboBox_6_currentIndexChanged(const QString &arg1)
{
    databaseconnection tdb;
    QSqlQuery q;
    QSqlQueryModel *qm = new QSqlQueryModel;
    tdb.Cnt();
    q.prepare("Select Time From Transport");
    q.exec();
    qm->setQuery(q);
    ui->comboBox_10->setModel(qm);
    tdb.Discnt();


}
static int serial = 0;

void Tourista::on_pushButton_3_clicked()
{
    Price pdb;
    QSqlQuery p;
    QSqlQueryModel *pm = new QSqlQueryModel;

    QString tt = ui->comboBox_4->currentText();
    QString bc = ui->comboBox_5->currentText();
    QString bca = ui->comboBox_6->currentText();
    QString time = ui->comboBox_10->currentText();
    QString A="ACEC",B="NACEC",C="ACBC",D="NACBC";
    if(tt == "Bus")
    {
            pdb.Cnt();
            p.exec("Select TP From TPrice Where TC = '"+bc+"' AND TCA ='"+bca+"' AND  TT = '"+time+"'");
            pm->setQuery(p);
            QString ps = pm->record(0).value(0).toString();
            qDebug()<<ps<<endl;
            ui->textBrowser_3->setText(ps);
            pdb.Discnt();

    }
    pdb.Cnt();
    p.exec("Select Token From TPrice Where TC = '"+bc+"' AND TCA ='"+bca+"' AND  TT = '"+time+"'");
    pm->setQuery(p);
    QString token = pm->record(0).value(0).toString();
    QString Serial = QString::number(serial);
    token = token + Serial;
    qDebug()<<token<<endl;
    ui->textBrowser_2->setText(token);
    pdb.Discnt();
    serial++;

}

void Tourista::on_pushButton_16_clicked()
{
    expwin = new Explorer;
    expwin->show();
}

void Tourista::on_pushButton_8_clicked()
{
    expwin = new Explorer;
    expwin->show();

}

void Tourista::on_pushButton_12_clicked()
{
    expwin = new Explorer;
    expwin->show();
}




void Tourista::on_pushButton_7_clicked()
{
    info indb;
    QSqlQuery q;

    emaillog = ui->lineEdit_9->text();
    QString pass = ui->lineEdit_8->text();

    indb.Cnt();
    if(q.exec("Select Email,Password From Info Where Email = '"+emaillog+"' AND Password = '"+pass+"'"))
    {
        int f=0;
        while(q.next())f++;
        if(f>0)
        {
            QMessageBox::information(this,"Confirmation","Authentication successful");
            ui->stackedWidget->setCurrentIndex(3);
        }
        else
        {
            QMessageBox::warning(this,"Error","Authentication Unsuccessful");
        }
    }
    indb.Discnt();

    ui->lineEdit_9->clear();
    ui->lineEdit_8->clear();

    Selection sdb;
    QSqlQuery s;
    QSqlQueryModel *sm = new QSqlQueryModel;
    sdb.Cnt();
    s.exec("Select Division From Places");
    sm->setQuery(s);
    ui->comboBox_11->setModel(sm);
    sdb.Discnt();

    info idb;
    QSqlQuery i;
    QSqlQueryModel im;
    idb.Cnt();
    i.exec("Select Name,Address,Phone From Info Where Email ='"+emaillog+"'");
    im .setQuery(i);
    idb.Discnt();
    QString Name = im.record(0).value(0).toString();
    QString Address = im.record(0).value(1).toString();
    QString Phone = im.record(0).value(2).toString();
    ui->textBrowser->setText(Name);
    ui->lineEdit_6->setText(Address);
    ui->lineEdit_7->setText(Phone);

    Selection sldb;
    QSqlQuery sl;
    QSqlQueryModel *slm = new QSqlQueryModel;
    sldb.Cnt();
    sl.exec("Select Division From Places");
    slm->setQuery(sl);
    ui->comboBox_11->setModel(slm);
    sldb.Discnt();

}
static int s = 0;

void Tourista::on_pushButton_4_clicked()
{
    QString hotel = ui->comboBox_7->currentText();
    QString bed = ui->comboBox_9->currentText();
    QString rt = ui->comboBox_8->currentText();
    QString rc = ui->lineEdit_4->text();
    QString ts = ui-> lineEdit_3->text();
    Price pdb;
    QSqlQuery p;
    QSqlQueryModel *pm = new QSqlQueryModel;
    if(rt == "Non AC")
    {
        pdb.Cnt();
        p.exec("Select NAC From HPrice Where Hotel ='"+hotel+"' AND Bed = '"+bed+"'");
        pm->setQuery(p);
        QString pq = pm->record(0).value(0).toString();
        pdb.Discnt();
        int ipq = pq.toInt();
        int t = rc.toInt();
        int c = rc.toInt();
        int tp =ipq*t*c;
        QString ps = QString::number(tp);
        ui->textBrowser_4->setText(ps);



    }
    else {
        pdb.Cnt();
        p.exec("Select "+rt+" From HPrice Where Hotel ='"+hotel+"' AND Bed = '"+bed+"'");
        pm->setQuery(p);
        QString pq = pm->record(0).value(0).toString();
        pdb.Discnt();
        int ipq = pq.toInt();
        int t = rc.toInt();
        int c = rc.toInt();
        int tp =ipq*t*c;
        QString ps = QString::number(tp);
        ui->textBrowser_4->setText(ps);
    }
    pdb.Cnt();
    p.exec("Select Token From HPrice Where Hotel ='"+hotel+"' AND Bed = '"+bed+"'");
    pm->setQuery(p);
    QString pq = pm->record(0).value(0).toString();
    QString token ="";

    QString S = QString::number(s);
    token = token + pq + rt + S;
    pdb.Discnt();
    ui->textBrowser_6->setText(token);
    s++;

}

void Tourista::on_textBrowser_4_textChanged()
{
    int trans = ui->textBrowser_3->toPlainText().toInt();
    int hotel = ui->textBrowser_4->toPlainText().toInt();
    int total = trans + hotel;
    QString totals = QString::number(total);
    ui->textBrowser_5->setText(totals);
}

void Tourista::on_comboBox_4_activated(const QString &arg1)
{
    databaseconnection tdb;
    QSqlQuery t;
    QSqlQueryModel *tm = new QSqlQueryModel;
    tdb.Cnt();
    t.exec("Select BSn From Transport");
    tm->setQuery(t);
    ui->comboBox_12->setModel(tm);
    tdb.Discnt();
}

void Tourista::on_submitbtn_clicked()
{
    QString Name = ui->textBrowser->toPlainText();
    QString Address = ui->lineEdit_6->text();
    QString Phone = ui->lineEdit_7->text();
    QString From = ui->comboBox_11->currentText();
    QString To = ui->comboBox->currentText();
    QString Place = ui->comboBox_2->currentText();
    QString date1 = ui->dateEdit_2->text();
    QString TType = ui->comboBox_4->currentText();
    QString Tstation = ui->comboBox_12->currentText();
    QString Tcompany = ui->comboBox_5->currentText();
    QString Tcat = ui->comboBox_6->currentText();
    QString Ttime = ui->comboBox_10->currentText();
    QString Ttoken = ui->textBrowser_2->toPlainText();
    QString Tcost = ui->textBrowser_3->toPlainText();
    QString Hotel = ui->comboBox_7->currentText();
    QString Bed = ui->comboBox_9->currentText();
    QString RType = ui->comboBox_8->currentText();
    QString Rcount = ui->lineEdit_4->text();
    QString Stay = ui->lineEdit_3->text();
    QString HDate = ui->dateEdit->text();
    QString Htoken = ui->textBrowser_6->toPlainText();
    QString Hcost = ui->textBrowser_4->toPlainText();
    QString Netcost = ui->textBrowser_5->toPlainText();


    /*ui->comboBox_11->clear();
    ui->comboBox->clear();
    ui->comboBox_2->clear();
    ui->comboBox_4->clear();
    ui->comboBox_12->clear();
    ui->comboBox_5->clear();
    ui->comboBox_6->clear();
    ui->comboBox_10->clear();
    ui->textBrowser_2->clear();
    ui->textBrowser_3->clear();
    ui->comboBox_7->clear();
    ui->comboBox_9->clear();
    ui->comboBox_8->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_3->clear();
    ui->textBrowser_6->clear();
    ui->textBrowser_4->clear();
    ui->textBrowser_5->clear();*/

    ui->checkBox->setChecked(false);
    ui->checkBox_2->setChecked(false);

    QString BusDes = Tcompany + " - "+TType + " - " + Tstation + "\n" + Tcat + " - " + Ttime;
    QString RoomDes = Bed +" Beds "+ " - "+RType+" - "+ "Time of Stay : "+Stay;
    ui->stackedWidget->setCurrentIndex(5);

    ui->cname->setText(Name);
    ui->caddrs->setText(Address);
    ui->cphon->setText(Phone);
    ui->tfrom->setText(From);
    ui->tto->setText(To);
    ui->tcompany->setText(Tcompany);
    ui->ttdes->setText(BusDes);
    ui->ttno->setText(Ttoken);
    ui->tcost->setText(Tcost);
    ui->hname->setText(Hotel);
    ui->hloc->setText(Place);
    ui->hrdes->setText(RoomDes);
    ui->hrno->setText(Rcount);
    ui->hcno->setText(Htoken);
    ui->hcost->setText(Hcost);
    ui->netcost->setText(Netcost);
    ui->placeshow->setText(Place);

    QString Tinfo = BusDes;
    QString Hinfo = Hotel +" - "+ RoomDes;
    QString Tdate = date1;
    QString HBdate = HDate;
    QString Person =QString::number( Rcount.toInt()* Bed.toInt());
    QString NCost = Netcost;
    ui->ttquan->setText(Person);

    info idb;
    QSqlQuery i;
    idb.Cnt();
    i.exec("Insert into history (Email,Tinfo,Hinfo,Tdate,HBdate,Person,NCost)Values ('"+emaillog+"','"+Tinfo+"','"+Hinfo+"','"+Tdate+"','"+HBdate+"','"+Person+"','"+NCost+"')");
    idb.Discnt();



}

void Tourista::on_cancelbtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void Tourista::on_donbuttn_clicked()
{
    ui->comboBox->clear();
    //ui->comboBox_4->
    ui->comboBox_12->clear();
    ui->comboBox_5->clear();
    ui->comboBox_6->clear();
    ui->comboBox_10->clear();
    ui->textBrowser_2->clear();
    ui->textBrowser_3->clear();
    ui->comboBox_7->clear();
    ui->comboBox_9->clear();
    ui->comboBox_8->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_3->clear();
    ui->textBrowser_6->clear();
    ui->textBrowser_4->clear();
    ui->textBrowser_5->clear();
    QMessageBox::information(this,"Confirmation","Thank you for Booking by TOURISTA!\n You will get 10% Discount on Cash Payment.\n A Message and Email has been send to you.\n It is required for Cash payment.");

    ui->stackedWidget->setCurrentIndex(3);

}

void Tourista::on_canbuttn_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void Tourista::on_paybuttn_clicked()
{
    Payment pwin;
    pwin.exec();
}

void Tourista::on_hisbuttn_clicked()
{
    ui->stackedWidget->setCurrentIndex(7);
    info idb;
    QSqlQuery i;
    QSqlQueryModel *im = new QSqlQueryModel;
    idb.Cnt();
    i.exec("Select Tinfo,Hinfo,Tdate,HBdate,Person,NCost from history where Email = '"+emaillog+"'");
    im->setQuery(i);
    ui->histable->setModel(im);
    ui->histable->resizeColumnsToContents();
    ui->histable->resizeRowsToContents();
    idb.Discnt();
}

void Tourista::on_pushButton_13_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    Selection sdb;
    QSqlQuery s1;
    QSqlQueryModel *s1m = new QSqlQueryModel;
    sdb.Cnt();
    s1.exec("Select Division from Places");
    s1m->setQuery(s1);
    ui->guiddivcombo->setModel(s1m);
    sdb.Discnt();
}
void Tourista::on_pushButton_9_clicked()
{
    ui->stackedWidget->setCurrentIndex(6);
    Selection sdb;
    QSqlQuery s1;
    QSqlQueryModel *s1m = new QSqlQueryModel;
    sdb.Cnt();
    s1.exec("Select Division from Places");
    s1m->setQuery(s1);
    ui->guiddivcombo->setModel(s1m);
    sdb.Discnt();
}

void Tourista::on_guiddivcombo_currentTextChanged(const QString &arg1)
{
    QString ctd = ui->guiddivcombo->currentText();
    Selection sdb;
    QSqlQuery s1;
    QSqlQueryModel *s1m = new QSqlQueryModel;
    sdb.Cnt();
    s1.exec("Select "+ctd+" from Places");
    s1m->setQuery(s1);
    ui->guidplccombo->setModel(s1m);
    sdb.Discnt();

}

void Tourista::on_guidplccombo_currentTextChanged(const QString &arg1)
{
    QString cplc = ui->guidplccombo->currentText();
    info idb;
    QSqlQuery i;
    QSqlQueryModel *im = new QSqlQueryModel;
    if(cplc == "Cox's Bazar")
    {
        idb.Cnt();
    i.exec("Select Name,Location,Phone From Guide Where Place = 'Cox'");
    im->setQuery(i);
    ui->guidetable->setModel(im);
    for(int i=0;i<im->columnCount();i++)ui->guidetable->setColumnWidth(i,200);
    ui->guidetable->resizeRowsToContents();
    idb.Discnt();
    }
    else {
        idb.Cnt();
    i.exec("Select Name,Location,Phone From Guide Where Place = '"+cplc+"'");
    im->setQuery(i);
    ui->guidetable->setModel(im);
    for(int i=0;i<im->columnCount();i++)ui->guidetable->setColumnWidth(i,200);
    ui->guidetable->resizeRowsToContents();
    idb.Discnt();

    }
}

void Tourista::on_pushButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void Tourista::on_pushButton_6_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

