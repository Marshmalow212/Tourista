/********************************************************************************
** Form generated from reading UI file 'explorer.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPLORER_H
#define UI_EXPLORER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Explorer
{
public:
    QWidget *Explorer_2;
    QTabWidget *tabWidget;
    QWidget *info;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_21;
    QWidget *placesinfo;
    QComboBox *divinfocombo;
    QLabel *label_26;
    QLabel *label_27;
    QComboBox *plinfocombo;
    QTableView *placestable;
    QLabel *gallerylbl;
    QLabel *gallerylbl_2;
    QWidget *transportinfo;
    QLabel *label_28;
    QComboBox *tdcombo;
    QLabel *label_29;
    QComboBox *tpcombo;
    QLabel *label_30;
    QComboBox *tscombo;
    QTableView *transtable;
    QLabel *label_34;
    QComboBox *ttcombo;
    QWidget *hotelsinfo;
    QComboBox *hpcombo;
    QLabel *label_31;
    QComboBox *hdcombo;
    QLabel *label_32;
    QTableView *hottable;

    void setupUi(QMainWindow *Explorer)
    {
        if (Explorer->objectName().isEmpty())
            Explorer->setObjectName(QString::fromUtf8("Explorer"));
        Explorer->resize(907, 496);
        Explorer->setStyleSheet(QString::fromUtf8("color:black"));
        Explorer_2 = new QWidget(Explorer);
        Explorer_2->setObjectName(QString::fromUtf8("Explorer_2"));
        tabWidget = new QTabWidget(Explorer_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 10, 911, 491));
        QFont font;
        font.setFamily(QString::fromUtf8("Comic Sans MS"));
        font.setPointSize(9);
        tabWidget->setFont(font);
        tabWidget->setCursor(QCursor(Qt::PointingHandCursor));
        tabWidget->setFocusPolicy(Qt::ClickFocus);
        tabWidget->setContextMenuPolicy(Qt::DefaultContextMenu);
        tabWidget->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad, x1:0.619318, y1:0.0909091, x2:0.619318, y2:1, stop:0.244318 rgba(228, 228, 228, 255), stop:1 rgba(72, 72, 72, 255));\n"
"QLabel{background:transparent;}"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        info = new QWidget();
        info->setObjectName(QString::fromUtf8("info"));
        info->setStyleSheet(QString::fromUtf8(""));
        label_24 = new QLabel(info);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(20, 210, 591, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Comic Sans MS"));
        font1.setPointSize(12);
        label_24->setFont(font1);
        label_24->setStyleSheet(QString::fromUtf8("color:navy;\n"
"background:transparent;"));
        label_25 = new QLabel(info);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(20, 350, 221, 41));
        label_25->setFont(font1);
        label_25->setStyleSheet(QString::fromUtf8("color: navy;\n"
"background:transparent;"));
        label_22 = new QLabel(info);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(20, 70, 111, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Comic Sans MS"));
        font2.setPointSize(18);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(9);
        label_22->setFont(font2);
        label_22->setStyleSheet(QString::fromUtf8("font: 8pt \"Comic Sans MS\";\n"
"font: 75 18pt \"Comic Sans MS\";\n"
"color: navy;\n"
"background:transparent;"));
        label_23 = new QLabel(info);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(20, 180, 301, 31));
        label_23->setFont(font1);
        label_23->setStyleSheet(QString::fromUtf8("color:navy;\n"
"background:transparent;"));
        label_21 = new QLabel(info);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(20, 140, 191, 31));
        label_21->setFont(font1);
        label_21->setStyleSheet(QString::fromUtf8("color:navy;\n"
"background:transparent;"));
        tabWidget->addTab(info, QString());
        placesinfo = new QWidget();
        placesinfo->setObjectName(QString::fromUtf8("placesinfo"));
        divinfocombo = new QComboBox(placesinfo);
        divinfocombo->setObjectName(QString::fromUtf8("divinfocombo"));
        divinfocombo->setGeometry(QRect(110, 10, 171, 31));
        divinfocombo->setStyleSheet(QString::fromUtf8("background:Lavender;\n"
"border:2px solid gray;\n"
"border-radius:5px"));
        label_26 = new QLabel(placesinfo);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(30, 10, 81, 31));
        label_26->setFont(font1);
        label_26->setStyleSheet(QString::fromUtf8("color: navy;\n"
"background:transparent"));
        label_27 = new QLabel(placesinfo);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(330, 10, 61, 31));
        label_27->setFont(font1);
        label_27->setStyleSheet(QString::fromUtf8("color: navy;\n"
"background:transparent"));
        plinfocombo = new QComboBox(placesinfo);
        plinfocombo->setObjectName(QString::fromUtf8("plinfocombo"));
        plinfocombo->setGeometry(QRect(390, 10, 171, 31));
        plinfocombo->setStyleSheet(QString::fromUtf8("background:Lavender;\n"
"border:2px solid gray;\n"
"border-radius:5px"));
        placestable = new QTableView(placesinfo);
        placestable->setObjectName(QString::fromUtf8("placestable"));
        placestable->setGeometry(QRect(10, 50, 621, 401));
        placestable->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad, x1:0.619318, y1:0.0909091, x2:0.619318, y2:1, stop:0.244318 rgba(228, 228, 228, 255), stop:1 rgba(72, 72, 72, 255));"));
        gallerylbl = new QLabel(placesinfo);
        gallerylbl->setObjectName(QString::fromUtf8("gallerylbl"));
        gallerylbl->setGeometry(QRect(640, 50, 241, 181));
        gallerylbl->setStyleSheet(QString::fromUtf8("border-color:qlineargradient(spread:pad, x1:0.9375, y1:0.607955, x2:0, y2:0.0170459, stop:0.267045 rgba(50, 85, 84, 255), stop:0.693182 rgba(138, 138, 138, 255));"));
        gallerylbl_2 = new QLabel(placesinfo);
        gallerylbl_2->setObjectName(QString::fromUtf8("gallerylbl_2"));
        gallerylbl_2->setGeometry(QRect(640, 250, 241, 201));
        gallerylbl_2->setStyleSheet(QString::fromUtf8("border-color:qlineargradient(spread:pad, x1:0.9375, y1:0.607955, x2:0, y2:0.0170459, stop:0.267045 rgba(50, 85, 84, 255), stop:0.693182 rgba(138, 138, 138, 255));"));
        tabWidget->addTab(placesinfo, QString());
        transportinfo = new QWidget();
        transportinfo->setObjectName(QString::fromUtf8("transportinfo"));
        label_28 = new QLabel(transportinfo);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(10, 10, 61, 21));
        label_28->setFont(font1);
        label_28->setStyleSheet(QString::fromUtf8("color:navy;\n"
"background:transparent;"));
        tdcombo = new QComboBox(transportinfo);
        tdcombo->setObjectName(QString::fromUtf8("tdcombo"));
        tdcombo->setGeometry(QRect(80, 10, 131, 31));
        tdcombo->setStyleSheet(QString::fromUtf8("background:Lavender;\n"
"border:2px solid gray;\n"
"border-radius:5px"));
        label_29 = new QLabel(transportinfo);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(220, 10, 41, 31));
        label_29->setFont(font1);
        label_29->setStyleSheet(QString::fromUtf8("color: navy;\n"
"background:transparent;"));
        tpcombo = new QComboBox(transportinfo);
        tpcombo->setObjectName(QString::fromUtf8("tpcombo"));
        tpcombo->setGeometry(QRect(270, 10, 131, 31));
        tpcombo->setStyleSheet(QString::fromUtf8("background:Lavender;\n"
"border:2px solid gray;\n"
"border-radius:5px"));
        label_30 = new QLabel(transportinfo);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(640, 10, 61, 31));
        label_30->setFont(font1);
        label_30->setStyleSheet(QString::fromUtf8("color: navy;\n"
"background:transparent;"));
        tscombo = new QComboBox(transportinfo);
        tscombo->setObjectName(QString::fromUtf8("tscombo"));
        tscombo->setGeometry(QRect(710, 10, 171, 31));
        tscombo->setStyleSheet(QString::fromUtf8("background:Lavender;\n"
"border:2px solid gray;\n"
"border-radius:5px"));
        transtable = new QTableView(transportinfo);
        transtable->setObjectName(QString::fromUtf8("transtable"));
        transtable->setGeometry(QRect(10, 50, 881, 381));
        transtable->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad, x1:0.619318, y1:0.0909091, x2:0.619318, y2:1, stop:0.244318 rgba(228, 228, 228, 255), stop:1 rgba(72, 72, 72, 255));"));
        label_34 = new QLabel(transportinfo);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(420, 10, 41, 31));
        label_34->setFont(font1);
        label_34->setStyleSheet(QString::fromUtf8("color:navy;\n"
"background:transparent;"));
        ttcombo = new QComboBox(transportinfo);
        ttcombo->setObjectName(QString::fromUtf8("ttcombo"));
        ttcombo->setGeometry(QRect(470, 10, 151, 31));
        ttcombo->setStyleSheet(QString::fromUtf8("background:Lavender;\n"
"border:2px solid gray;\n"
"border-radius:5px"));
        tabWidget->addTab(transportinfo, QString());
        hotelsinfo = new QWidget();
        hotelsinfo->setObjectName(QString::fromUtf8("hotelsinfo"));
        hotelsinfo->setStyleSheet(QString::fromUtf8(""));
        hpcombo = new QComboBox(hotelsinfo);
        hpcombo->setObjectName(QString::fromUtf8("hpcombo"));
        hpcombo->setGeometry(QRect(310, 10, 171, 31));
        hpcombo->setStyleSheet(QString::fromUtf8("background:Lavender;\n"
"border:2px solid gray;\n"
"border-radius:5px"));
        label_31 = new QLabel(hotelsinfo);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(260, 10, 51, 21));
        label_31->setFont(font1);
        label_31->setStyleSheet(QString::fromUtf8("color: navy;\n"
"background:transparent;"));
        hdcombo = new QComboBox(hotelsinfo);
        hdcombo->setObjectName(QString::fromUtf8("hdcombo"));
        hdcombo->setGeometry(QRect(90, 10, 141, 31));
        hdcombo->setStyleSheet(QString::fromUtf8("background:Lavender;\n"
"border:2px solid gray;\n"
"border-radius:5px"));
        label_32 = new QLabel(hotelsinfo);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(10, 10, 71, 21));
        label_32->setFont(font1);
        label_32->setStyleSheet(QString::fromUtf8("color: navy;\n"
"background:transparent;"));
        hottable = new QTableView(hotelsinfo);
        hottable->setObjectName(QString::fromUtf8("hottable"));
        hottable->setGeometry(QRect(10, 50, 891, 401));
        hottable->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad, x1:0.619318, y1:0.0909091, x2:0.619318, y2:1, stop:0.244318 rgba(228, 228, 228, 255), stop:1 rgba(72, 72, 72, 255))"));
        tabWidget->addTab(hotelsinfo, QString());
        Explorer->setCentralWidget(Explorer_2);

        retranslateUi(Explorer);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Explorer);
    } // setupUi

    void retranslateUi(QMainWindow *Explorer)
    {
        Explorer->setWindowTitle(QCoreApplication::translate("Explorer", "MainWindow", nullptr));
#if QT_CONFIG(whatsthis)
        label_24->setWhatsThis(QCoreApplication::translate("Explorer", "<html><head/><body><p>Here you will get any information related to the Places or Transport or Hotels.</p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_24->setText(QCoreApplication::translate("Explorer", "Here you will get any information related to the Places or Transport or Hotels.", nullptr));
        label_25->setText(QCoreApplication::translate("Explorer", "Just Explore . . . . . . . . !", nullptr));
        label_22->setText(QCoreApplication::translate("Explorer", "Explore", nullptr));
        label_23->setText(QCoreApplication::translate("Explorer", "TOURISTA is always there for you.", nullptr));
        label_21->setText(QCoreApplication::translate("Explorer", "New to a place !", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(info), QString());
        label_26->setText(QCoreApplication::translate("Explorer", "Division :", nullptr));
        label_27->setText(QCoreApplication::translate("Explorer", "Place :", nullptr));
        gallerylbl->setText(QString());
        gallerylbl_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(placesinfo), QCoreApplication::translate("Explorer", "Places", nullptr));
        label_28->setText(QCoreApplication::translate("Explorer", "Division", nullptr));
        label_29->setText(QCoreApplication::translate("Explorer", "Place", nullptr));
        label_30->setText(QCoreApplication::translate("Explorer", "Station", nullptr));
        label_34->setText(QCoreApplication::translate("Explorer", "Type", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(transportinfo), QCoreApplication::translate("Explorer", "Transport", nullptr));
        label_31->setText(QCoreApplication::translate("Explorer", "Place", nullptr));
        label_32->setText(QCoreApplication::translate("Explorer", "Division", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(hotelsinfo), QCoreApplication::translate("Explorer", "Hotels", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Explorer: public Ui_Explorer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPLORER_H
