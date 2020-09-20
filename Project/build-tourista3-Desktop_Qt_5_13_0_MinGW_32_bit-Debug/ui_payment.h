/********************************************************************************
** Form generated from reading UI file 'payment.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAYMENT_H
#define UI_PAYMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Payment
{
public:
    QStackedWidget *stackedWidget;
    QWidget *Bkash;
    QLabel *label;
    QLineEdit *bktr;
    QLineEdit *bkref;
    QLabel *label_2;
    QWidget *Rocket;
    QLineEdit *rktr;
    QLabel *label_3;
    QLineEdit *rkref;
    QLabel *label_4;
    QWidget *Visa;
    QLabel *label_5;
    QLineEdit *vscard;
    QLabel *label_6;
    QComboBox *visacombo;
    QWidget *Master;
    QLabel *label_8;
    QLineEdit *mscard;
    QLabel *label_7;
    QComboBox *mastercombo;
    QPushButton *confirm;
    QPushButton *cancel;
    QCheckBox *bkashbox;
    QCheckBox *rocketbox;
    QCheckBox *visabox;
    QCheckBox *masterbox;

    void setupUi(QDialog *Payment)
    {
        if (Payment->objectName().isEmpty())
            Payment->setObjectName(QString::fromUtf8("Payment"));
        Payment->resize(729, 415);
        Payment->setStyleSheet(QString::fromUtf8("QDialog{background-color:qlineargradient(spread:pad, x1:0.625, y1:0, x2:0.704545, y2:0.920455, stop:0.352273 rgba(167, 168, 173, 255), stop:0.965909 rgba(44, 58, 115, 255));\n"
"color:white}\n"
"\n"
"QPushButton{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(41, 41, 41, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(12, 143, 255, 255));\n"
"border-radius:7px;\n"
"color:white;\n"
"border:2px solid DodgerBlue;\n"
"}\n"
"QPushButton:hover{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(12, 143, 255, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(41, 41, 41, 255))\n"
"}"));
        stackedWidget = new QStackedWidget(Payment);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 160, 731, 181));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: transparent;"));
        Bkash = new QWidget();
        Bkash->setObjectName(QString::fromUtf8("Bkash"));
        Bkash->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(Bkash);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 30, 111, 41));
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent;"));
        bktr = new QLineEdit(Bkash);
        bktr->setObjectName(QString::fromUtf8("bktr"));
        bktr->setGeometry(QRect(290, 40, 221, 31));
        bktr->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent;"));
        bkref = new QLineEdit(Bkash);
        bkref->setObjectName(QString::fromUtf8("bkref"));
        bkref->setGeometry(QRect(290, 100, 221, 31));
        bkref->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent;"));
        label_2 = new QLabel(Bkash);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(150, 90, 111, 41));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent;"));
        stackedWidget->addWidget(Bkash);
        Rocket = new QWidget();
        Rocket->setObjectName(QString::fromUtf8("Rocket"));
        rktr = new QLineEdit(Rocket);
        rktr->setObjectName(QString::fromUtf8("rktr"));
        rktr->setGeometry(QRect(290, 40, 221, 31));
        rktr->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent;"));
        label_3 = new QLabel(Rocket);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(150, 30, 111, 41));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent;"));
        rkref = new QLineEdit(Rocket);
        rkref->setObjectName(QString::fromUtf8("rkref"));
        rkref->setGeometry(QRect(290, 100, 221, 31));
        rkref->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent;"));
        label_4 = new QLabel(Rocket);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(150, 90, 111, 41));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent;"));
        stackedWidget->addWidget(Rocket);
        Visa = new QWidget();
        Visa->setObjectName(QString::fromUtf8("Visa"));
        label_5 = new QLabel(Visa);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(170, 40, 111, 41));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent;"));
        vscard = new QLineEdit(Visa);
        vscard->setObjectName(QString::fromUtf8("vscard"));
        vscard->setGeometry(QRect(310, 100, 201, 31));
        vscard->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent;"));
        label_6 = new QLabel(Visa);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(170, 100, 111, 41));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent;"));
        visacombo = new QComboBox(Visa);
        visacombo->setObjectName(QString::fromUtf8("visacombo"));
        visacombo->setGeometry(QRect(310, 40, 201, 31));
        visacombo->setStyleSheet(QString::fromUtf8("background:Lavender;\n"
"border:2px solid gray;\n"
"border-radius:5px"));
        stackedWidget->addWidget(Visa);
        Master = new QWidget();
        Master->setObjectName(QString::fromUtf8("Master"));
        label_8 = new QLabel(Master);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(170, 100, 111, 41));
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent;"));
        mscard = new QLineEdit(Master);
        mscard->setObjectName(QString::fromUtf8("mscard"));
        mscard->setGeometry(QRect(310, 100, 201, 31));
        mscard->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent;"));
        label_7 = new QLabel(Master);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(170, 40, 111, 41));
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent;"));
        mastercombo = new QComboBox(Master);
        mastercombo->setObjectName(QString::fromUtf8("mastercombo"));
        mastercombo->setGeometry(QRect(310, 40, 201, 31));
        mastercombo->setStyleSheet(QString::fromUtf8("background:Lavender;\n"
"border:2px solid gray;\n"
"border-radius:5px"));
        stackedWidget->addWidget(Master);
        confirm = new QPushButton(Payment);
        confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->setGeometry(QRect(400, 360, 131, 41));
        confirm->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"border:2px solid blue;"));
        cancel = new QPushButton(Payment);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(570, 360, 131, 41));
        cancel->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";"));
        bkashbox = new QCheckBox(Payment);
        bkashbox->setObjectName(QString::fromUtf8("bkashbox"));
        bkashbox->setGeometry(QRect(70, 30, 121, 111));
        bkashbox->setStyleSheet(QString::fromUtf8("border-image: url(:/resources/img/bkash.png);"));
        rocketbox = new QCheckBox(Payment);
        rocketbox->setObjectName(QString::fromUtf8("rocketbox"));
        rocketbox->setGeometry(QRect(230, 30, 121, 111));
        rocketbox->setStyleSheet(QString::fromUtf8("border-image: url(:/resources/img/rocket.png);"));
        visabox = new QCheckBox(Payment);
        visabox->setObjectName(QString::fromUtf8("visabox"));
        visabox->setGeometry(QRect(400, 30, 111, 111));
        visabox->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-image: url(:/resources/img/visacard.png);"));
        masterbox = new QCheckBox(Payment);
        masterbox->setObjectName(QString::fromUtf8("masterbox"));
        masterbox->setGeometry(QRect(560, 30, 121, 111));
        masterbox->setStyleSheet(QString::fromUtf8("border-image: url(:/resources/img/mastercard.png);\n"
"background-color: rgb(255, 255, 255);"));

        retranslateUi(Payment);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Payment);
    } // setupUi

    void retranslateUi(QDialog *Payment)
    {
        Payment->setWindowTitle(QCoreApplication::translate("Payment", "Payment", nullptr));
        label->setText(QCoreApplication::translate("Payment", "Transaction ID", nullptr));
        label_2->setText(QCoreApplication::translate("Payment", "Reference ID", nullptr));
        label_3->setText(QCoreApplication::translate("Payment", "Transaction ID", nullptr));
        label_4->setText(QCoreApplication::translate("Payment", "Reference ID", nullptr));
        label_5->setText(QCoreApplication::translate("Payment", "Card  Name", nullptr));
        label_6->setText(QCoreApplication::translate("Payment", "Card No.", nullptr));
        label_8->setText(QCoreApplication::translate("Payment", "Card No.", nullptr));
        label_7->setText(QCoreApplication::translate("Payment", "Card  Name", nullptr));
        confirm->setText(QCoreApplication::translate("Payment", "Confirm", nullptr));
        cancel->setText(QCoreApplication::translate("Payment", "Cancel", nullptr));
        bkashbox->setText(QString());
        rocketbox->setText(QString());
        visabox->setText(QString());
        masterbox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Payment: public Ui_Payment {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAYMENT_H
