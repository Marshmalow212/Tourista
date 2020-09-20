#include "payment.h"
#include "ui_payment.h"
#include <QMessageBox>

Payment::Payment(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Payment)
{
    ui->setupUi(this);
    ui->visacombo->addItems({"DBBL","Dutch-Bangla","Bank Asia","One Bank","UCBL"});
    ui->mastercombo->addItems({"DBBL","Dutch-Bangla","Bank Asia","One Bank","UCBL"});

}

Payment::~Payment()
{
    delete ui;
}

void Payment::on_cancel_clicked()
{
    close();
}

void Payment::on_bkashbox_stateChanged(int arg1)
{
    ui->stackedWidget->setCurrentIndex(0);

}

void Payment::on_rocketbox_stateChanged(int arg1)
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Payment::on_visabox_stateChanged(int arg1)
{
    ui->stackedWidget->setCurrentIndex(2);
}

void Payment::on_masterbox_stateChanged(int arg1)
{
    ui->stackedWidget->setCurrentIndex(3);
}

void Payment::on_confirm_clicked()
{
    QString tranx,ref,cn,cno;
    int index = ui->stackedWidget->currentIndex();
    if(index==0)
    {
        tranx = ui->bktr->text();
        ref = ui->bkref->text();
        QString fmb = "Transaction ID: "+tranx+"\nReference : "+ref+"\nPayment Done!";
        QMessageBox::information(this,"Confirmation",fmb);

    }
    else if(index==1)
    {
        tranx = ui->bktr->text();
        ref = ui->bkref->text();
        QString fmb = "Transaction ID: "+tranx+"\nReference : "+ref+"\nPayment Done!";
        QMessageBox::information(this,"Confirmation",fmb);

    }
    else if(index==2)
    {
        cn = ui->visacombo->currentText();
        cno = ui->vscard->text();
        QString fmb = "Transaction ID: "+cn+"\nReference : "+cno+"\nPayment Done!";
        QMessageBox::information(this,"Confirmation",fmb);

    }
    else if(index==3)
    {
        cn = ui->mastercombo->currentText();
        cno = ui->mscard->text();
        QString fmb = "Transaction ID: "+cn+"\nReference : "+cno+"\nPayment Done!";
        QMessageBox::information(this,"Confirmation",fmb);

    }

    close();
}
