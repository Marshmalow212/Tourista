/********************************************************************************
** Form generated from reading UI file 'Tourista.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOURISTA_H
#define UI_TOURISTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tourista
{
public:
    QWidget *centralWidget;
    QStackedWidget *stackedWidget;
    QWidget *HOME;
    QPushButton *pushButton_24;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
    QWidget *LOGIN;
    QPushButton *pushButton_13;
    QPushButton *pushButton_16;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QFrame *frame;
    QLineEdit *lineEdit;
    QLabel *label_18;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_5;
    QLabel *label_33;
    QPushButton *pushButton_17;
    QLabel *label_19;
    QLabel *label_34;
    QToolButton *icon_1;
    QWidget *WElCOME;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QFrame *frame_2;
    QLabel *label_55;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QLabel *label_57;
    QLabel *label_59;
    QPushButton *pushButton_7;
    QWidget *SELECTION;
    QLabel *label_4;
    QTextBrowser *textBrowser;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton_2;
    QDateEdit *dateEdit_2;
    QFrame *line_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *hisbuttn;
    QPushButton *pushButton_14;
    QLabel *label_35;
    QComboBox *comboBox_11;
    QLabel *label_54;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLabel *label_62;
    QWidget *BOOKING;
    QTextBrowser *textBrowser_2;
    QLabel *label_17;
    QPushButton *cancelbtn;
    QFrame *line_3;
    QLabel *label_29;
    QTextBrowser *textBrowser_3;
    QLabel *label_30;
    QTextBrowser *textBrowser_4;
    QLabel *label_31;
    QTextBrowser *textBrowser_5;
    QLabel *label_61;
    QTextBrowser *textBrowser_6;
    QPushButton *submitbtn;
    QFrame *frame_3;
    QComboBox *comboBox_4;
    QLabel *label_53;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QComboBox *comboBox_10;
    QPushButton *pushButton_3;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QComboBox *comboBox_12;
    QLabel *label_8;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QLabel *label_12;
    QLabel *label_14;
    QLabel *label_13;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *lineEdit_4;
    QComboBox *comboBox_7;
    QComboBox *comboBox_9;
    QComboBox *comboBox_8;
    QLineEdit *lineEdit_3;
    QDateEdit *dateEdit;
    QLabel *label_32;
    QPushButton *pushButton_4;
    QFrame *line;
    QFrame *frame_5;
    QPushButton *pushButton_12;
    QPushButton *pushButton_15;
    QWidget *Submit;
    QFrame *frame_4;
    QLabel *label_37;
    QLabel *label_39;
    QLabel *hname;
    QLabel *label_41;
    QLabel *hloc;
    QLabel *label_43;
    QLabel *hrdes;
    QLabel *label_45;
    QLabel *hrno;
    QLabel *label_47;
    QLabel *hcno;
    QLabel *label_49;
    QLabel *hcost;
    QLabel *caddrs;
    QLabel *label_51;
    QLabel *cname;
    QLabel *label_50;
    QLabel *cphon;
    QLabel *label_52;
    QLabel *label_36;
    QLabel *tfrom;
    QLabel *label_38;
    QLabel *label_40;
    QLabel *tto;
    QLabel *label_42;
    QLabel *tcompany;
    QLabel *label_44;
    QLabel *ttdes;
    QLabel *label_58;
    QLabel *placeshow;
    QLabel *label_46;
    QLabel *ttno;
    QLabel *ttquan;
    QLabel *label_48;
    QLabel *tcost;
    QLabel *label_56;
    QLabel *netcost;
    QLabel *label_60;
    QPushButton *paybuttn;
    QPushButton *donbuttn;
    QPushButton *canbuttn;
    QWidget *Guide;
    QTableView *guidetable;
    QFrame *frame_6;
    QLabel *label_63;
    QComboBox *guiddivcombo;
    QLabel *label_64;
    QComboBox *guidplccombo;
    QPushButton *pushButton_6;
    QWidget *History;
    QTableView *histable;
    QPushButton *pushButton_5;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Tourista)
    {
        if (Tourista->objectName().isEmpty())
            Tourista->setObjectName(QString::fromUtf8("Tourista"));
        Tourista->resize(884, 554);
        Tourista->setStyleSheet(QString::fromUtf8("#MainWindow{\n"
"background-color:#708090}"));
        centralWidget = new QWidget(Tourista);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 881, 531));
        QFont font;
        font.setFamily(QString::fromUtf8("Comic Sans MS"));
        font.setPointSize(16);
        stackedWidget->setFont(font);
        stackedWidget->setCursor(QCursor(Qt::PointingHandCursor));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        stackedWidget->setInputMethodHints(Qt::ImhNone);
        HOME = new QWidget();
        HOME->setObjectName(QString::fromUtf8("HOME"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Comic Sans MS"));
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setWeight(50);
        HOME->setFont(font1);
        HOME->setStyleSheet(QString::fromUtf8("QLabel{color:lightcyan;}\n"
"\n"
"QPushButton{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(41, 41, 41, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(12, 143, 255, 255));\n"
"border-top-right-radius:8px;\n"
"border-bottom-left-radius:8px;\n"
"color:white;\n"
"border:2px solid DodgerBlue;\n"
"}\n"
"QPushButton:hover{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(12, 143, 255, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(41, 41, 41, 255));\n"
"border-top-right-radius:0px;\n"
"border-bottom-left-radius:0px;\n"
"border-bottom-right-radius:8px;\n"
"border-top-left-radius:8px;\n"
"}"));
        pushButton_24 = new QPushButton(HOME);
        pushButton_24->setObjectName(QString::fromUtf8("pushButton_24"));
        pushButton_24->setGeometry(QRect(640, 440, 181, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Comic Sans MS"));
        font2.setPointSize(12);
        pushButton_24->setFont(font2);
        pushButton_24->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_24->setStyleSheet(QString::fromUtf8(""));
        label_21 = new QLabel(HOME);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(20, 250, 361, 21));
        label_21->setFont(font2);
        label_21->setStyleSheet(QString::fromUtf8(""));
        label_22 = new QLabel(HOME);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(380, 240, 161, 41));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Snap ITC"));
        font3.setPointSize(18);
        font3.setItalic(false);
        label_22->setFont(font3);
        label_22->setStyleSheet(QString::fromUtf8(""));
        label_23 = new QLabel(HOME);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(20, 290, 531, 21));
        label_23->setFont(font2);
        label_23->setStyleSheet(QString::fromUtf8(""));
        label_24 = new QLabel(HOME);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(20, 310, 481, 21));
        label_24->setFont(font2);
        label_24->setStyleSheet(QString::fromUtf8(""));
        label_25 = new QLabel(HOME);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(20, 340, 421, 21));
        label_25->setFont(font2);
        label_25->setStyleSheet(QString::fromUtf8(""));
        label_26 = new QLabel(HOME);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(20, 380, 411, 21));
        label_26->setFont(font2);
        label_26->setStyleSheet(QString::fromUtf8(""));
        label_27 = new QLabel(HOME);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(20, 400, 321, 21));
        label_27->setFont(font2);
        label_27->setStyleSheet(QString::fromUtf8(""));
        label_28 = new QLabel(HOME);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(20, 420, 151, 21));
        label_28->setFont(font2);
        label_28->setStyleSheet(QString::fromUtf8(""));
        stackedWidget->addWidget(HOME);
        LOGIN = new QWidget();
        LOGIN->setObjectName(QString::fromUtf8("LOGIN"));
        LOGIN->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"  background:transparent;\n"
"  border-bottom:2px solid dodgerBlue;\n"
"}\n"
"QFrame#frame{\n"
"    background:rgba(0,0,0,0.75);\n"
"	\n"
"	border-right-color: rgb(0, 115, 223);\n"
"	border-left-color: rgb(0, 81, 255);\n"
"   border-bottom-left-radius:20px;\n"
"   border-top-right-radius:20px;\n"
"}\n"
"QToolButton#icon_1{background:qlineargradient(spread:pad, x1:1, y1:1, x2:0, y2:0.0909095, stop:0 rgba(30, 30, 30, 255), stop:0.193182 rgba(16, 36, 145, 255), stop:0.75 rgba(0, 137, 255, 255));\n"
"   border-radius:30px;\n"
"}\n"
"QLineEdit{\n"
"  border-bottom-left-radius:8px;\n"
"  border-top-right-radius:8px\n"
"}\n"
"QLabel{color:white}\n"
"QLabel#label_20{color:rgb(255, 255, 255)}\n"
"\n"
"QPushButton#pushButton_17{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(41, 41, 41, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(12, 143, 255, 255));\n"
"border-bottom-left-radius:6px;\n"
"border-top-right-radius:6px;\n"
"border-bottom-righ"
                        "t-radius:0px;\n"
"border-top-left-radius:0px;\n"
"color:white;\n"
"border:1px solid DodgerBlue;\n"
"}\n"
"\n"
"QPushButton{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(41, 41, 41, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(12, 143, 255, 255));\n"
"border-radius:7px;\n"
"color:white;\n"
"border:2px solid DodgerBlue;\n"
"}\n"
"QPushButton:hover{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(12, 143, 255, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(41, 41, 41, 255))\n"
"}\n"
"\n"
"\n"
"\n"
""));
        pushButton_13 = new QPushButton(LOGIN);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(580, 160, 231, 51));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_13->sizePolicy().hasHeightForWidth());
        pushButton_13->setSizePolicy(sizePolicy);
        pushButton_13->setFont(font2);
        pushButton_13->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_13->setStyleSheet(QString::fromUtf8(""));
        pushButton_16 = new QPushButton(LOGIN);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(580, 90, 231, 51));
        sizePolicy.setHeightForWidth(pushButton_16->sizePolicy().hasHeightForWidth());
        pushButton_16->setSizePolicy(sizePolicy);
        pushButton_16->setFont(font2);
        pushButton_16->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_16->setStyleSheet(QString::fromUtf8(""));
        pushButton_18 = new QPushButton(LOGIN);
        pushButton_18->setObjectName(QString::fromUtf8("pushButton_18"));
        pushButton_18->setGeometry(QRect(580, 230, 231, 51));
        sizePolicy.setHeightForWidth(pushButton_18->sizePolicy().hasHeightForWidth());
        pushButton_18->setSizePolicy(sizePolicy);
        pushButton_18->setFont(font2);
        pushButton_18->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_18->setLayoutDirection(Qt::LeftToRight);
        pushButton_18->setStyleSheet(QString::fromUtf8(""));
        pushButton_19 = new QPushButton(LOGIN);
        pushButton_19->setObjectName(QString::fromUtf8("pushButton_19"));
        pushButton_19->setGeometry(QRect(580, 300, 231, 51));
        pushButton_19->setFont(font2);
        pushButton_19->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_19->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(LOGIN);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(40, 100, 281, 331));
        frame->setStyleSheet(QString::fromUtf8(""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 100, 241, 31));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        QFont font4;
        font4.setFamily(QString::fromUtf8("Comic Sans MS"));
        font4.setPointSize(10);
        lineEdit->setFont(font4);
        lineEdit->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_18 = new QLabel(frame);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(20, 200, 81, 21));
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);
        label_18->setFont(font4);
        label_18->setStyleSheet(QString::fromUtf8("background: transparent"));
        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 220, 241, 31));
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);
        lineEdit_2->setFont(font4);
        lineEdit_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_2->setEchoMode(QLineEdit::Password);
        lineEdit_5 = new QLineEdit(frame);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(20, 160, 241, 31));
        sizePolicy.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy);
        lineEdit_5->setFont(font4);
        lineEdit_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_5->setEchoMode(QLineEdit::Normal);
        label_33 = new QLabel(frame);
        label_33->setObjectName(QString::fromUtf8("label_33"));
        label_33->setGeometry(QRect(20, 140, 81, 21));
        sizePolicy.setHeightForWidth(label_33->sizePolicy().hasHeightForWidth());
        label_33->setSizePolicy(sizePolicy);
        label_33->setFont(font4);
        label_33->setStyleSheet(QString::fromUtf8("color:white;\n"
"background : transparent"));
        pushButton_17 = new QPushButton(frame);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setGeometry(QRect(90, 280, 101, 31));
        sizePolicy.setHeightForWidth(pushButton_17->sizePolicy().hasHeightForWidth());
        pushButton_17->setSizePolicy(sizePolicy);
        pushButton_17->setFont(font4);
        pushButton_17->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_17->setStyleSheet(QString::fromUtf8(":hover{background:transparent;\n"
"border:2px solid dodgerblue;\n"
"}"));
        label_19 = new QLabel(frame);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(20, 80, 71, 16));
        label_19->setFont(font4);
        label_19->setStyleSheet(QString::fromUtf8("background : transparent"));
        label_34 = new QLabel(frame);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setGeometry(QRect(90, 20, 101, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Comic Sans MS"));
        font5.setPointSize(13);
        label_34->setFont(font5);
        label_34->setStyleSheet(QString::fromUtf8("background:transparent;"));
        icon_1 = new QToolButton(LOGIN);
        icon_1->setObjectName(QString::fromUtf8("icon_1"));
        icon_1->setGeometry(QRect(150, 60, 61, 61));
        icon_1->setIconSize(QSize(30, 30));
        stackedWidget->addWidget(LOGIN);
        WElCOME = new QWidget();
        WElCOME->setObjectName(QString::fromUtf8("WElCOME"));
        WElCOME->setStyleSheet(QString::fromUtf8("QLabel{color:lightblue;}\n"
"QPushButton{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(41, 41, 41, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(12, 143, 255, 255));\n"
"border-radius:7px;\n"
"color:white;\n"
"border:2px solid DodgerBlue;\n"
"}\n"
"QPushButton:hover{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(12, 143, 255, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(41, 41, 41, 255))\n"
"}\n"
"\n"
"\n"
"\n"
"QFrame#frame_2{\n"
"   background:rgba(0,0,0,0.65);\n"
"   border-bottom-left-radius:15px;\n"
"  border-top-right-radius:15px;\n"
"  border-bottom:2px solid dodgerblue;\n"
"  border-top:2px solid dodgerblue;\n"
"}\n"
"QLineEdit{\n"
"  border-bottom-left-radius:8px;\n"
"  border-top-right-radius:8px;\n"
"   border-bottom:2px solid dodgerblue\n"
"}\n"
""));
        label = new QLabel(WElCOME);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(500, 90, 311, 81));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Monotype Corsiva"));
        font6.setPointSize(48);
        font6.setItalic(true);
        label->setFont(font6);
        label->setStyleSheet(QString::fromUtf8("color:black"));
        label_2 = new QLabel(WElCOME);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(610, 190, 91, 71));
        label_2->setFont(font6);
        label_2->setStyleSheet(QString::fromUtf8("color:white\n"
""));
        label_3 = new QLabel(WElCOME);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(500, 270, 321, 61));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Monotype Corsiva"));
        font7.setPointSize(52);
        font7.setItalic(true);
        label_3->setFont(font7);
        label_3->setStyleSheet(QString::fromUtf8("color:white"));
        pushButton = new QPushButton(WElCOME);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(600, 370, 131, 51));
        pushButton->setFont(font2);
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:6px"));
        frame_2 = new QFrame(WElCOME);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(50, 120, 321, 301));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_55 = new QLabel(frame_2);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setGeometry(QRect(30, 130, 81, 21));
        sizePolicy.setHeightForWidth(label_55->sizePolicy().hasHeightForWidth());
        label_55->setSizePolicy(sizePolicy);
        label_55->setFont(font4);
        label_55->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        lineEdit_8 = new QLineEdit(frame_2);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(30, 160, 261, 41));
        sizePolicy.setHeightForWidth(lineEdit_8->sizePolicy().hasHeightForWidth());
        lineEdit_8->setSizePolicy(sizePolicy);
        lineEdit_8->setFont(font4);
        lineEdit_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);background:transparent;"));
        lineEdit_8->setEchoMode(QLineEdit::Password);
        lineEdit_9 = new QLineEdit(frame_2);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(30, 80, 261, 41));
        sizePolicy.setHeightForWidth(lineEdit_9->sizePolicy().hasHeightForWidth());
        lineEdit_9->setSizePolicy(sizePolicy);
        lineEdit_9->setFont(font4);
        lineEdit_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);background-color: transparent;\n"
""));
        lineEdit_9->setEchoMode(QLineEdit::Normal);
        label_57 = new QLabel(frame_2);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setGeometry(QRect(30, 50, 81, 21));
        sizePolicy.setHeightForWidth(label_57->sizePolicy().hasHeightForWidth());
        label_57->setSizePolicy(sizePolicy);
        label_57->setFont(font4);
        label_57->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_59 = new QLabel(frame_2);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setGeometry(QRect(120, 10, 71, 31));
        label_59->setFont(font);
        label_59->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton_7 = new QPushButton(frame_2);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(30, 230, 261, 51));
        pushButton_7->setFont(font5);
        pushButton_7->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_7->setStyleSheet(QString::fromUtf8("border-top-right-radius:9px;\n"
"border-bottom-left-radius:9px;\n"
"border-top-left-radius:0px;\n"
"border-bottom-right-radius:0px;"));
        stackedWidget->addWidget(WElCOME);
        SELECTION = new QWidget();
        SELECTION->setObjectName(QString::fromUtf8("SELECTION"));
        SELECTION->setFont(font4);
        SELECTION->setStyleSheet(QString::fromUtf8("QPushButton{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(41, 41, 41, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(12, 143, 255, 255));\n"
"border-radius:7px;\n"
"color:white;\n"
"border:2px solid DodgerBlue;\n"
"}\n"
"QPushButton:hover{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(12, 143, 255, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(41, 41, 41, 255))\n"
"}"));
        label_4 = new QLabel(SELECTION);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 190, 41, 31));
        label_4->setFont(font4);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        textBrowser = new QTextBrowser(SELECTION);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(160, 190, 191, 31));
        textBrowser->setStyleSheet(QString::fromUtf8("background:lavender;"));
        comboBox = new QComboBox(SELECTION);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(650, 150, 191, 31));
        comboBox->setStyleSheet(QString::fromUtf8("background:Lavender;\n"
"border:2px solid gray;\n"
"border-radius:5px"));
        comboBox_2 = new QComboBox(SELECTION);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(650, 200, 191, 31));
        comboBox_2->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox_2->setAutoFillBackground(false);
        comboBox_2->setStyleSheet(QString::fromUtf8("background:Lavender;\n"
"border:2px solid gray;\n"
"border-radius:5px"));
        label_5 = new QLabel(SELECTION);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(560, 150, 71, 21));
        label_5->setFont(font4);
        label_5->setStyleSheet(QString::fromUtf8("color:black;"));
        label_6 = new QLabel(SELECTION);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(560, 200, 71, 31));
        label_6->setFont(font4);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        label_7 = new QLabel(SELECTION);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(560, 260, 71, 16));
        label_7->setFont(font4);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        pushButton_2 = new QPushButton(SELECTION);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(350, 440, 221, 51));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Comic Sans MS"));
        font8.setPointSize(11);
        pushButton_2->setFont(font8);
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setMouseTracking(false);
        pushButton_2->setStyleSheet(QString::fromUtf8(""));
        dateEdit_2 = new QDateEdit(SELECTION);
        dateEdit_2->setObjectName(QString::fromUtf8("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(650, 250, 191, 31));
        dateEdit_2->setContextMenuPolicy(Qt::DefaultContextMenu);
        dateEdit_2->setProperty("showGroupSeparator", QVariant(false));
        dateEdit_2->setCalendarPopup(true);
        dateEdit_2->setTimeSpec(Qt::LocalTime);
        line_2 = new QFrame(SELECTION);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(10, 26, 861, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pushButton_8 = new QPushButton(SELECTION);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(540, 0, 75, 31));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Comic Sans MS"));
        font9.setPointSize(9);
        pushButton_8->setFont(font9);
        pushButton_8->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_8->setStyleSheet(QString::fromUtf8("border-radius:5px"));
        pushButton_9 = new QPushButton(SELECTION);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(620, 0, 75, 31));
        pushButton_9->setFont(font9);
        pushButton_9->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_9->setStyleSheet(QString::fromUtf8("border-radius:5px"));
        hisbuttn = new QPushButton(SELECTION);
        hisbuttn->setObjectName(QString::fromUtf8("hisbuttn"));
        hisbuttn->setGeometry(QRect(700, 0, 75, 31));
        hisbuttn->setFont(font9);
        hisbuttn->setCursor(QCursor(Qt::PointingHandCursor));
        hisbuttn->setStyleSheet(QString::fromUtf8("border-radius:5px"));
        pushButton_14 = new QPushButton(SELECTION);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(780, 0, 75, 31));
        pushButton_14->setFont(font9);
        pushButton_14->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_14->setStyleSheet(QString::fromUtf8("border-radius:5px"));
        label_35 = new QLabel(SELECTION);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setGeometry(QRect(60, 230, 71, 31));
        label_35->setFont(font4);
        label_35->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        comboBox_11 = new QComboBox(SELECTION);
        comboBox_11->setObjectName(QString::fromUtf8("comboBox_11"));
        comboBox_11->setGeometry(QRect(650, 100, 191, 31));
        comboBox_11->setCursor(QCursor(Qt::PointingHandCursor));
        comboBox_11->setAutoFillBackground(false);
        comboBox_11->setStyleSheet(QString::fromUtf8("background:Lavender;\n"
"border:2px solid gray;\n"
"border-radius:5px"));
        label_54 = new QLabel(SELECTION);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setGeometry(QRect(560, 100, 71, 31));
        label_54->setFont(font4);
        label_54->setStyleSheet(QString::fromUtf8("color: black"));
        lineEdit_6 = new QLineEdit(SELECTION);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(160, 230, 191, 31));
        lineEdit_6->setStyleSheet(QString::fromUtf8("background:lavender"));
        lineEdit_7 = new QLineEdit(SELECTION);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(160, 270, 191, 31));
        lineEdit_7->setStyleSheet(QString::fromUtf8("background:lavender"));
        label_62 = new QLabel(SELECTION);
        label_62->setObjectName(QString::fromUtf8("label_62"));
        label_62->setGeometry(QRect(60, 270, 71, 31));
        label_62->setFont(font4);
        label_62->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        stackedWidget->addWidget(SELECTION);
        BOOKING = new QWidget();
        BOOKING->setObjectName(QString::fromUtf8("BOOKING"));
        BOOKING->setFont(font4);
        BOOKING->setStyleSheet(QString::fromUtf8("QPushButton{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(41, 41, 41, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(12, 143, 255, 255));\n"
"border-radius:7px;\n"
"color:white;\n"
"border:2px solid DodgerBlue;\n"
"}\n"
"QPushButton:hover{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(12, 143, 255, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(41, 41, 41, 255))\n"
"}\n"
"\n"
""));
        textBrowser_2 = new QTextBrowser(BOOKING);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(170, 340, 221, 31));
        label_17 = new QLabel(BOOKING);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(80, 340, 71, 31));
        label_17->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        cancelbtn = new QPushButton(BOOKING);
        cancelbtn->setObjectName(QString::fromUtf8("cancelbtn"));
        cancelbtn->setGeometry(QRect(730, 480, 101, 41));
        cancelbtn->setFont(font8);
        cancelbtn->setCursor(QCursor(Qt::PointingHandCursor));
        line_3 = new QFrame(BOOKING);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(10, 25, 861, 16));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_29 = new QLabel(BOOKING);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        label_29->setGeometry(QRect(180, 410, 111, 31));
        QFont font10;
        font10.setPointSize(12);
        label_29->setFont(font10);
        label_29->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        textBrowser_3 = new QTextBrowser(BOOKING);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(280, 410, 131, 31));
        label_30 = new QLabel(BOOKING);
        label_30->setObjectName(QString::fromUtf8("label_30"));
        label_30->setGeometry(QRect(420, 410, 16, 31));
        QFont font11;
        font11.setPointSize(14);
        font11.setBold(true);
        font11.setWeight(75);
        label_30->setFont(font11);
        textBrowser_4 = new QTextBrowser(BOOKING);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(450, 410, 131, 31));
        label_31 = new QLabel(BOOKING);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setGeometry(QRect(590, 410, 16, 31));
        QFont font12;
        font12.setPointSize(16);
        label_31->setFont(font12);
        textBrowser_5 = new QTextBrowser(BOOKING);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(620, 410, 151, 31));
        label_61 = new QLabel(BOOKING);
        label_61->setObjectName(QString::fromUtf8("label_61"));
        label_61->setGeometry(QRect(510, 340, 91, 21));
        label_61->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        textBrowser_6 = new QTextBrowser(BOOKING);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(610, 340, 211, 31));
        submitbtn = new QPushButton(BOOKING);
        submitbtn->setObjectName(QString::fromUtf8("submitbtn"));
        submitbtn->setGeometry(QRect(630, 480, 91, 41));
        submitbtn->setFont(font8);
        submitbtn->setCursor(QCursor(Qt::PointingHandCursor));
        frame_3 = new QFrame(BOOKING);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(0, 30, 891, 301));
        frame_3->setStyleSheet(QString::fromUtf8("  background-color:rgba(0,0,0,0.3);"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        comboBox_4 = new QComboBox(frame_3);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(200, 60, 211, 31));
        comboBox_4->setStyleSheet(QString::fromUtf8("background:Lavender;\n"
"border:2px solid gray;\n"
"border-radius:5px"));
        label_53 = new QLabel(frame_3);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setGeometry(QRect(90, 100, 61, 31));
        QFont font13;
        font13.setFamily(QString::fromUtf8("Comic Sans MS"));
        font13.setPointSize(11);
        font13.setBold(false);
        font13.setWeight(50);
        label_53->setFont(font13);
        label_53->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255)\n"
";background:transparent"));
        comboBox_5 = new QComboBox(frame_3);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setGeometry(QRect(200, 140, 211, 31));
        comboBox_5->setStyleSheet(QString::fromUtf8("background:Lavender;\n"
"border:2px solid gray;\n"
"border-radius:5px"));
        comboBox_6 = new QComboBox(frame_3);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        comboBox_6->setGeometry(QRect(200, 180, 211, 31));
        comboBox_6->setStyleSheet(QString::fromUtf8("background:Lavender;\n"
"border:2px solid gray;\n"
"border-radius:5px"));
        comboBox_10 = new QComboBox(frame_3);
        comboBox_10->setObjectName(QString::fromUtf8("comboBox_10"));
        comboBox_10->setGeometry(QRect(200, 220, 121, 31));
        comboBox_10->setStyleSheet(QString::fromUtf8("background:Lavender;\n"
"border:2px solid gray;\n"
"border-radius:5px"));
        pushButton_3 = new QPushButton(frame_3);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(340, 240, 91, 41));
        pushButton_3->setFont(font8);
        pushButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(41, 41, 41, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(12, 143, 255, 255));\n"
"border-radius:6px;\n"
"color:white;\n"
"border:2px solid DodgerBlue;\n"
"}\n"
"QPushButton:hover{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(12, 143, 255, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(41, 41, 41, 255))\n"
"}\n"
""));
        label_9 = new QLabel(frame_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(90, 140, 71, 31));
        label_9->setFont(font8);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);background:transparent"));
        label_10 = new QLabel(frame_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(90, 180, 71, 31));
        label_10->setFont(font8);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255)\n"
";background:transparent"));
        label_11 = new QLabel(frame_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(90, 220, 61, 31));
        label_11->setFont(font8);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);background:transparent"));
        comboBox_12 = new QComboBox(frame_3);
        comboBox_12->setObjectName(QString::fromUtf8("comboBox_12"));
        comboBox_12->setGeometry(QRect(200, 100, 211, 31));
        comboBox_12->setStyleSheet(QString::fromUtf8("background:Lavender;\n"
"border:2px solid gray;\n"
"border-radius:5px"));
        label_8 = new QLabel(frame_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(90, 60, 61, 31));
        label_8->setFont(font8);
        label_8->setStyleSheet(QString::fromUtf8("color: white\n"
";background:transparent"));
        checkBox = new QCheckBox(frame_3);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(40, 10, 181, 31));
        checkBox->setFont(font12);
        checkBox->setStyleSheet(QString::fromUtf8("color:white;\n"
"background:transparent\n"
""));
        checkBox_2 = new QCheckBox(frame_3);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(480, 10, 151, 31));
        checkBox_2->setFont(font12);
        checkBox_2->setStyleSheet(QString::fromUtf8("background:transparent;\n"
"color:white;"));
        label_12 = new QLabel(frame_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(520, 50, 61, 31));
        label_12->setFont(font8);
        label_12->setStyleSheet(QString::fromUtf8("color:white;\n"
"background:transparent"));
        label_14 = new QLabel(frame_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(520, 90, 71, 31));
        label_14->setFont(font8);
        label_14->setStyleSheet(QString::fromUtf8("color: white;\n"
"background:transparent"));
        label_13 = new QLabel(frame_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(520, 130, 71, 31));
        label_13->setFont(font8);
        label_13->setStyleSheet(QString::fromUtf8("color:white;\n"
"background:transparent"));
        label_15 = new QLabel(frame_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(520, 170, 101, 21));
        label_15->setFont(font8);
        label_15->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background:transparent"));
        label_16 = new QLabel(frame_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(520, 210, 71, 31));
        label_16->setFont(font8);
        label_16->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background:transparent"));
        lineEdit_4 = new QLineEdit(frame_3);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(640, 130, 61, 31));
        lineEdit_4->setStyleSheet(QString::fromUtf8("background:Lavender"));
        comboBox_7 = new QComboBox(frame_3);
        comboBox_7->setObjectName(QString::fromUtf8("comboBox_7"));
        comboBox_7->setGeometry(QRect(640, 50, 201, 31));
        comboBox_7->setStyleSheet(QString::fromUtf8("background:Lavender;\n"
"border:2px solid gray;\n"
"border-radius:5px"));
        comboBox_9 = new QComboBox(frame_3);
        comboBox_9->setObjectName(QString::fromUtf8("comboBox_9"));
        comboBox_9->setGeometry(QRect(640, 90, 201, 31));
        comboBox_9->setStyleSheet(QString::fromUtf8("background:Lavender;\n"
"border:2px solid gray;\n"
"border-radius:5px"));
        comboBox_8 = new QComboBox(frame_3);
        comboBox_8->setObjectName(QString::fromUtf8("comboBox_8"));
        comboBox_8->setGeometry(QRect(710, 130, 131, 31));
        comboBox_8->setStyleSheet(QString::fromUtf8("background:Lavender;\n"
"border:2px solid gray;\n"
"border-radius:5px"));
        lineEdit_3 = new QLineEdit(frame_3);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(640, 170, 51, 31));
        lineEdit_3->setStyleSheet(QString::fromUtf8("background:Lavender"));
        dateEdit = new QDateEdit(frame_3);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(640, 210, 201, 31));
        dateEdit->setStyleSheet(QString::fromUtf8("background:Lavender;\n"
"border:2px solid gray;\n"
"border-radius:5px;\n"
"color:black"));
        dateEdit->setCalendarPopup(true);
        label_32 = new QLabel(frame_3);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(700, 170, 61, 31));
        label_32->setFont(font10);
        label_32->setStyleSheet(QString::fromUtf8("color:white;\n"
"background:transparent"));
        pushButton_4 = new QPushButton(frame_3);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(750, 250, 101, 41));
        pushButton_4->setFont(font8);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(41, 41, 41, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(12, 143, 255, 255));\n"
"border-radius:6px;\n"
"color:white;\n"
"border:2px solid DodgerBlue;\n"
"}\n"
"QPushButton:hover{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(12, 143, 255, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(41, 41, 41, 255))\n"
"}\n"
""));
        line = new QFrame(BOOKING);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(450, 40, 20, 331));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        frame_5 = new QFrame(BOOKING);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(-1, 0, 891, 31));
        frame_5->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0.3);"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        pushButton_12 = new QPushButton(frame_5);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(720, 0, 75, 31));
        pushButton_12->setFont(font9);
        pushButton_12->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_12{border-radius:5px;background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(41, 41, 41, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(12, 143, 255, 255));}\n"
"QPushButton#pushButton_12:hover{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(12, 143, 255, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(41, 41, 41, 255))\n"
"}\n"
""));
        pushButton_15 = new QPushButton(frame_5);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(800, 0, 75, 31));
        pushButton_15->setFont(font9);
        pushButton_15->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_15->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_15{border-radius:5px;background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(41, 41, 41, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(12, 143, 255, 255));}\n"
"QPushButton#pushButton_15:hover{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(12, 143, 255, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(41, 41, 41, 255))\n"
"}\n"
"\n"
""));
        stackedWidget->addWidget(BOOKING);
        Submit = new QWidget();
        Submit->setObjectName(QString::fromUtf8("Submit"));
        Submit->setStyleSheet(QString::fromUtf8("QPushButton{background:qlineargradient(spread:pad, x1:0.971591, y1:0.903409, x2:0, y2:0.0909095, stop:0 rgba(30, 30, 30, 255), stop:0.488636 rgba(16, 36, 145, 255), stop:0.948864 rgba(0, 137, 255, 255));\n"
"border-radius:7px;\n"
"color:white;\n"
"border:2px solid DodgerBlue;\n"
"}\n"
"QPushButton:hover{background:qlineargradient(spread:pad, x1:0.971591, y1:0.903409, x2:0, y2:0.0909095, stop:0 rgba(0, 137, 255, 255), stop:0.488636 rgba(16, 36, 145, 255), stop:0.948864 rgba(30, 30, 30, 255))\n"
"}\n"
""));
        frame_4 = new QFrame(Submit);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(0, 0, 891, 551));
        frame_4->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0.5);"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_37 = new QLabel(frame_4);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setGeometry(QRect(500, 110, 111, 31));
        QFont font14;
        font14.setFamily(QString::fromUtf8("Comic Sans MS"));
        font14.setPointSize(14);
        font14.setBold(false);
        font14.setItalic(false);
        font14.setWeight(9);
        label_37->setFont(font14);
        label_37->setStyleSheet(QString::fromUtf8("color: white;font: 75 14pt \"Comic Sans MS\";\n"
"background:transparent"));
        label_39 = new QLabel(frame_4);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setGeometry(QRect(520, 170, 71, 31));
        label_39->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        hname = new QLabel(frame_4);
        hname->setObjectName(QString::fromUtf8("hname"));
        hname->setGeometry(QRect(650, 170, 181, 31));
        hname->setStyleSheet(QString::fromUtf8("color:white;\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        label_41 = new QLabel(frame_4);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setGeometry(QRect(520, 210, 71, 31));
        label_41->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        hloc = new QLabel(frame_4);
        hloc->setObjectName(QString::fromUtf8("hloc"));
        hloc->setGeometry(QRect(650, 210, 181, 31));
        hloc->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        label_43 = new QLabel(frame_4);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setGeometry(QRect(520, 250, 121, 31));
        label_43->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        hrdes = new QLabel(frame_4);
        hrdes->setObjectName(QString::fromUtf8("hrdes"));
        hrdes->setGeometry(QRect(650, 250, 211, 31));
        hrdes->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        label_45 = new QLabel(frame_4);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setGeometry(QRect(520, 290, 91, 31));
        label_45->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        hrno = new QLabel(frame_4);
        hrno->setObjectName(QString::fromUtf8("hrno"));
        hrno->setGeometry(QRect(650, 290, 111, 31));
        hrno->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        label_47 = new QLabel(frame_4);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setGeometry(QRect(520, 330, 111, 31));
        label_47->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        hcno = new QLabel(frame_4);
        hcno->setObjectName(QString::fromUtf8("hcno"));
        hcno->setGeometry(QRect(650, 330, 111, 31));
        hcno->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        label_49 = new QLabel(frame_4);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setGeometry(QRect(520, 380, 51, 31));
        label_49->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        hcost = new QLabel(frame_4);
        hcost->setObjectName(QString::fromUtf8("hcost"));
        hcost->setGeometry(QRect(650, 380, 111, 31));
        hcost->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        caddrs = new QLabel(frame_4);
        caddrs->setObjectName(QString::fromUtf8("caddrs"));
        caddrs->setGeometry(QRect(350, 30, 241, 31));
        caddrs->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        label_51 = new QLabel(frame_4);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setGeometry(QRect(260, 30, 81, 31));
        label_51->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        cname = new QLabel(frame_4);
        cname->setObjectName(QString::fromUtf8("cname"));
        cname->setGeometry(QRect(80, 30, 151, 31));
        cname->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        label_50 = new QLabel(frame_4);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setGeometry(QRect(20, 30, 61, 31));
        label_50->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        cphon = new QLabel(frame_4);
        cphon->setObjectName(QString::fromUtf8("cphon"));
        cphon->setGeometry(QRect(700, 30, 161, 31));
        cphon->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        label_52 = new QLabel(frame_4);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setGeometry(QRect(630, 30, 61, 31));
        label_52->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        label_36 = new QLabel(frame_4);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(20, 110, 111, 31));
        label_36->setFont(font14);
        label_36->setStyleSheet(QString::fromUtf8("font: 75 14pt \"Comic Sans MS\";color: white;\n"
"background:transparent"));
        tfrom = new QLabel(frame_4);
        tfrom->setObjectName(QString::fromUtf8("tfrom"));
        tfrom->setGeometry(QRect(100, 160, 121, 31));
        tfrom->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        label_38 = new QLabel(frame_4);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setGeometry(QRect(20, 160, 51, 31));
        label_38->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        label_40 = new QLabel(frame_4);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setGeometry(QRect(230, 160, 31, 31));
        label_40->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        tto = new QLabel(frame_4);
        tto->setObjectName(QString::fromUtf8("tto"));
        tto->setGeometry(QRect(280, 160, 141, 31));
        tto->setStyleSheet(QString::fromUtf8("color: white;\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        label_42 = new QLabel(frame_4);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setGeometry(QRect(20, 200, 71, 31));
        label_42->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        tcompany = new QLabel(frame_4);
        tcompany->setObjectName(QString::fromUtf8("tcompany"));
        tcompany->setGeometry(QRect(100, 200, 121, 31));
        tcompany->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        label_44 = new QLabel(frame_4);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setGeometry(QRect(20, 240, 131, 41));
        label_44->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        ttdes = new QLabel(frame_4);
        ttdes->setObjectName(QString::fromUtf8("ttdes"));
        ttdes->setGeometry(QRect(160, 240, 311, 61));
        ttdes->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        label_58 = new QLabel(frame_4);
        label_58->setObjectName(QString::fromUtf8("label_58"));
        label_58->setGeometry(QRect(230, 200, 41, 31));
        label_58->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        placeshow = new QLabel(frame_4);
        placeshow->setObjectName(QString::fromUtf8("placeshow"));
        placeshow->setGeometry(QRect(280, 200, 141, 31));
        placeshow->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        label_46 = new QLabel(frame_4);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setGeometry(QRect(20, 310, 91, 31));
        label_46->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        ttno = new QLabel(frame_4);
        ttno->setObjectName(QString::fromUtf8("ttno"));
        ttno->setGeometry(QRect(160, 310, 111, 31));
        ttno->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        ttquan = new QLabel(frame_4);
        ttquan->setObjectName(QString::fromUtf8("ttquan"));
        ttquan->setGeometry(QRect(160, 350, 111, 31));
        ttquan->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        label_48 = new QLabel(frame_4);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setGeometry(QRect(20, 350, 111, 31));
        label_48->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        tcost = new QLabel(frame_4);
        tcost->setObjectName(QString::fromUtf8("tcost"));
        tcost->setGeometry(QRect(160, 390, 111, 31));
        tcost->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        label_56 = new QLabel(frame_4);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setGeometry(QRect(20, 390, 111, 31));
        label_56->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        netcost = new QLabel(frame_4);
        netcost->setObjectName(QString::fromUtf8("netcost"));
        netcost->setGeometry(QRect(160, 430, 111, 31));
        netcost->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        label_60 = new QLabel(frame_4);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setGeometry(QRect(20, 430, 81, 31));
        label_60->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"font: 10pt \"Comic Sans MS\";\n"
"background:transparent"));
        paybuttn = new QPushButton(frame_4);
        paybuttn->setObjectName(QString::fromUtf8("paybuttn"));
        paybuttn->setGeometry(QRect(460, 460, 121, 41));
        paybuttn->setFont(font4);
        paybuttn->setCursor(QCursor(Qt::PointingHandCursor));
        paybuttn->setStyleSheet(QString::fromUtf8("QPushButton{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(41, 41, 41, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(12, 143, 255, 255));\n"
"border-radius:7px;\n"
"color:white;\n"
"border:2px solid DodgerBlue;\n"
"}\n"
"QPushButton:hover{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(12, 143, 255, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(41, 41, 41, 255))\n"
"}\n"
""));
        donbuttn = new QPushButton(frame_4);
        donbuttn->setObjectName(QString::fromUtf8("donbuttn"));
        donbuttn->setGeometry(QRect(590, 460, 121, 41));
        donbuttn->setFont(font4);
        donbuttn->setCursor(QCursor(Qt::PointingHandCursor));
        donbuttn->setStyleSheet(QString::fromUtf8("QPushButton{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(41, 41, 41, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(12, 143, 255, 255));\n"
"border-radius:7px;\n"
"color:white;\n"
"border:2px solid DodgerBlue;\n"
"}\n"
"QPushButton:hover{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(12, 143, 255, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(41, 41, 41, 255))\n"
"}\n"
""));
        canbuttn = new QPushButton(frame_4);
        canbuttn->setObjectName(QString::fromUtf8("canbuttn"));
        canbuttn->setGeometry(QRect(720, 460, 121, 41));
        canbuttn->setFont(font4);
        canbuttn->setCursor(QCursor(Qt::PointingHandCursor));
        canbuttn->setStyleSheet(QString::fromUtf8("QPushButton{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(41, 41, 41, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(12, 143, 255, 255));\n"
"border-radius:7px;\n"
"color:white;\n"
"border:2px solid DodgerBlue;\n"
"}\n"
"QPushButton:hover{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(12, 143, 255, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(41, 41, 41, 255))\n"
"}\n"
""));
        stackedWidget->addWidget(Submit);
        Guide = new QWidget();
        Guide->setObjectName(QString::fromUtf8("Guide"));
        guidetable = new QTableView(Guide);
        guidetable->setObjectName(QString::fromUtf8("guidetable"));
        guidetable->setGeometry(QRect(0, 70, 891, 471));
        guidetable->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad, x1:0.619318, y1:0.0909091, x2:0.619318, y2:1, stop:0.244318 rgba(228, 228, 228, 255), stop:1 rgba(72, 72, 72, 255))"));
        frame_6 = new QFrame(Guide);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(0, 0, 881, 71));
        frame_6->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0.5);"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        label_63 = new QLabel(frame_6);
        label_63->setObjectName(QString::fromUtf8("label_63"));
        label_63->setGeometry(QRect(30, 20, 71, 31));
        label_63->setStyleSheet(QString::fromUtf8("font: 10pt \"Comic Sans MS\";\n"
"color: rgb(255, 255, 255);\n"
"background:transparent"));
        guiddivcombo = new QComboBox(frame_6);
        guiddivcombo->setObjectName(QString::fromUtf8("guiddivcombo"));
        guiddivcombo->setGeometry(QRect(110, 20, 161, 31));
        guiddivcombo->setStyleSheet(QString::fromUtf8("background:lavender;\n"
"border-radius:4px;"));
        label_64 = new QLabel(frame_6);
        label_64->setObjectName(QString::fromUtf8("label_64"));
        label_64->setGeometry(QRect(350, 20, 61, 31));
        label_64->setStyleSheet(QString::fromUtf8("font: 10pt \"Comic Sans MS\";\n"
"color: rgb(255, 255, 255);\n"
"background:transparent;"));
        guidplccombo = new QComboBox(frame_6);
        guidplccombo->setObjectName(QString::fromUtf8("guidplccombo"));
        guidplccombo->setGeometry(QRect(410, 20, 171, 31));
        guidplccombo->setStyleSheet(QString::fromUtf8("background:lavender;\n"
"border-radius:4px;"));
        pushButton_6 = new QPushButton(frame_6);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(760, 20, 101, 31));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(41, 41, 41, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(12, 143, 255, 255));\n"
"border-radius:5px;\n"
"color:white;\n"
"border:2px solid DodgerBlue;\n"
"}\n"
"QPushButton:hover{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(12, 143, 255, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(41, 41, 41, 255))\n"
"}\n"
""));
        stackedWidget->addWidget(Guide);
        History = new QWidget();
        History->setObjectName(QString::fromUtf8("History"));
        histable = new QTableView(History);
        histable->setObjectName(QString::fromUtf8("histable"));
        histable->setGeometry(QRect(0, 50, 891, 481));
        histable->setStyleSheet(QString::fromUtf8("background:qlineargradient(spread:pad, x1:0.619318, y1:0.0909091, x2:0.619318, y2:1, stop:0.244318 rgba(228, 228, 228, 255), stop:1 rgba(72, 72, 72, 255))"));
        pushButton_5 = new QPushButton(History);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 10, 101, 31));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(41, 41, 41, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(12, 143, 255, 255));\n"
"border-radius:5px;\n"
"color:white;\n"
"border:2px solid DodgerBlue;\n"
"}\n"
"QPushButton:hover{background:qlineargradient(spread:pad, x1:0.477273, y1:1, x2:0.477273, y2:0.107955, stop:0 rgba(12, 143, 255, 255), stop:0.431818 rgba(38, 55, 145, 255), stop:0.846591 rgba(41, 41, 41, 255))\n"
"}\n"
""));
        stackedWidget->addWidget(History);
        Tourista->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Tourista);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Tourista->setStatusBar(statusBar);

        retranslateUi(Tourista);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Tourista);
    } // setupUi

    void retranslateUi(QMainWindow *Tourista)
    {
        Tourista->setWindowTitle(QCoreApplication::translate("Tourista", "Tourista", nullptr));
        pushButton_24->setText(QCoreApplication::translate("Tourista", "Get Started", nullptr));
        label_21->setText(QCoreApplication::translate("Tourista", "Let.s take your Travel to a  different angle with", nullptr));
        label_22->setText(QCoreApplication::translate("Tourista", "TOURISTA", nullptr));
        label_23->setText(QCoreApplication::translate("Tourista", "It will help you with information of every tourist places and spots of all", nullptr));
        label_24->setText(QCoreApplication::translate("Tourista", "region of Bangladesh also it will give you the opertunity to make", nullptr));
        label_25->setText(QCoreApplication::translate("Tourista", "the best plan in your budget to make the tour memorable.", nullptr));
        label_26->setText(QCoreApplication::translate("Tourista", "We also provide booking facilities for our subsceibers", nullptr));
        label_27->setText(QCoreApplication::translate("Tourista", "in a negotiable price with exciting discount.", nullptr));
        label_28->setText(QCoreApplication::translate("Tourista", "So give it a try.....", nullptr));
        pushButton_13->setText(QCoreApplication::translate("Tourista", "Guide", nullptr));
        pushButton_16->setText(QCoreApplication::translate("Tourista", "Explore", nullptr));
        pushButton_18->setText(QCoreApplication::translate("Tourista", "Booking", nullptr));
        pushButton_19->setText(QCoreApplication::translate("Tourista", "About Us", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("Tourista", " Username", nullptr));
        label_18->setText(QCoreApplication::translate("Tourista", "Password", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("Tourista", " Password", nullptr));
        lineEdit_5->setPlaceholderText(QCoreApplication::translate("Tourista", " Email", nullptr));
        label_33->setText(QCoreApplication::translate("Tourista", "Email", nullptr));
        pushButton_17->setText(QCoreApplication::translate("Tourista", "Sign Up", nullptr));
        label_19->setText(QCoreApplication::translate("Tourista", " Name", nullptr));
        label_34->setText(QCoreApplication::translate("Tourista", "SignIn Here", nullptr));
        icon_1->setText(QString());
        label->setText(QCoreApplication::translate("Tourista", "WELCOME ", nullptr));
        label_2->setText(QCoreApplication::translate("Tourista", "TO", nullptr));
        label_3->setText(QCoreApplication::translate("Tourista", "TOURISTA", nullptr));
        pushButton->setText(QCoreApplication::translate("Tourista", "Home", nullptr));
        label_55->setText(QCoreApplication::translate("Tourista", "Password", nullptr));
        lineEdit_8->setPlaceholderText(QCoreApplication::translate("Tourista", " Password", nullptr));
        lineEdit_9->setPlaceholderText(QCoreApplication::translate("Tourista", " Email", nullptr));
        label_57->setText(QCoreApplication::translate("Tourista", "Email", nullptr));
        label_59->setText(QCoreApplication::translate("Tourista", "Log In", nullptr));
        pushButton_7->setText(QCoreApplication::translate("Tourista", "Login", nullptr));
        label_4->setText(QCoreApplication::translate("Tourista", "Name", nullptr));
        label_5->setText(QCoreApplication::translate("Tourista", "To", nullptr));
        label_6->setText(QCoreApplication::translate("Tourista", "Place", nullptr));
        label_7->setText(QCoreApplication::translate("Tourista", "Date", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Tourista", "Transport and  Residence", nullptr));
        dateEdit_2->setDisplayFormat(QCoreApplication::translate("Tourista", "d/M/yyyy", nullptr));
        pushButton_8->setText(QCoreApplication::translate("Tourista", "Explore", nullptr));
        pushButton_9->setText(QCoreApplication::translate("Tourista", "Guide", nullptr));
        hisbuttn->setText(QCoreApplication::translate("Tourista", "History", nullptr));
        pushButton_14->setText(QCoreApplication::translate("Tourista", "Log out", nullptr));
        label_35->setText(QCoreApplication::translate("Tourista", "Address", nullptr));
        label_54->setText(QCoreApplication::translate("Tourista", "From", nullptr));
        label_62->setText(QCoreApplication::translate("Tourista", "Phone", nullptr));
        label_17->setText(QCoreApplication::translate("Tourista", "Token no.", nullptr));
        cancelbtn->setText(QCoreApplication::translate("Tourista", "Cacel", nullptr));
        label_29->setText(QCoreApplication::translate("Tourista", "Total Cost", nullptr));
        label_30->setText(QCoreApplication::translate("Tourista", "+", nullptr));
        label_31->setText(QCoreApplication::translate("Tourista", "=", nullptr));
        label_61->setText(QCoreApplication::translate("Tourista", "Confirmation No.", nullptr));
        submitbtn->setText(QCoreApplication::translate("Tourista", "Submit", nullptr));
        label_53->setText(QCoreApplication::translate("Tourista", "Station", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Tourista", "Confirm", nullptr));
        label_9->setText(QCoreApplication::translate("Tourista", "Company", nullptr));
        label_10->setText(QCoreApplication::translate("Tourista", "Category", nullptr));
        label_11->setText(QCoreApplication::translate("Tourista", "Time", nullptr));
        label_8->setText(QCoreApplication::translate("Tourista", "Type", nullptr));
        checkBox->setText(QCoreApplication::translate("Tourista", "Transport", nullptr));
        checkBox_2->setText(QCoreApplication::translate("Tourista", "Hotel", nullptr));
        label_12->setText(QCoreApplication::translate("Tourista", "Hotel", nullptr));
        label_14->setText(QCoreApplication::translate("Tourista", "Bed", nullptr));
        label_13->setText(QCoreApplication::translate("Tourista", "No. Room", nullptr));
        label_15->setText(QCoreApplication::translate("Tourista", "Time of Stay", nullptr));
        label_16->setText(QCoreApplication::translate("Tourista", "Date", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("Tourista", "d/M/yyyy", nullptr));
        label_32->setText(QCoreApplication::translate("Tourista", "Days", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Tourista", "Confirm", nullptr));
        pushButton_12->setText(QCoreApplication::translate("Tourista", "Explore", nullptr));
        pushButton_15->setText(QCoreApplication::translate("Tourista", "Log out", nullptr));
        label_37->setText(QCoreApplication::translate("Tourista", "Hotel", nullptr));
        label_39->setText(QCoreApplication::translate("Tourista", "Name :", nullptr));
        hname->setText(QString());
        label_41->setText(QCoreApplication::translate("Tourista", "Location :", nullptr));
        hloc->setText(QString());
        label_43->setText(QCoreApplication::translate("Tourista", "Room Description : ", nullptr));
        hrdes->setText(QString());
        label_45->setText(QCoreApplication::translate("Tourista", "No. of Rooms :", nullptr));
        hrno->setText(QString());
        label_47->setText(QCoreApplication::translate("Tourista", "Confirmation No. :", nullptr));
        hcno->setText(QString());
        label_49->setText(QCoreApplication::translate("Tourista", "Cost :", nullptr));
        hcost->setText(QString());
        caddrs->setText(QString());
        label_51->setText(QCoreApplication::translate("Tourista", "Address :", nullptr));
        cname->setText(QString());
        label_50->setText(QCoreApplication::translate("Tourista", "Name :", nullptr));
        cphon->setText(QString());
        label_52->setText(QCoreApplication::translate("Tourista", "Phone :", nullptr));
        label_36->setText(QCoreApplication::translate("Tourista", "Transport", nullptr));
        tfrom->setText(QString());
        label_38->setText(QCoreApplication::translate("Tourista", "From :", nullptr));
        label_40->setText(QCoreApplication::translate("Tourista", "To : ", nullptr));
        tto->setText(QString());
        label_42->setText(QCoreApplication::translate("Tourista", "Company :", nullptr));
        tcompany->setText(QString());
        label_44->setText(QCoreApplication::translate("Tourista", "Ticket Description :", nullptr));
        ttdes->setText(QString());
        label_58->setText(QCoreApplication::translate("Tourista", "Place:", nullptr));
        placeshow->setText(QString());
        label_46->setText(QCoreApplication::translate("Tourista", "Token No. :", nullptr));
        ttno->setText(QString());
        ttquan->setText(QString());
        label_48->setText(QCoreApplication::translate("Tourista", "Ticket Quantity : ", nullptr));
        tcost->setText(QString());
        label_56->setText(QCoreApplication::translate("Tourista", "Cost :", nullptr));
        netcost->setText(QString());
        label_60->setText(QCoreApplication::translate("Tourista", "Net Cost :", nullptr));
        paybuttn->setText(QCoreApplication::translate("Tourista", "Payment", nullptr));
        donbuttn->setText(QCoreApplication::translate("Tourista", "Done", nullptr));
        canbuttn->setText(QCoreApplication::translate("Tourista", "Cancel", nullptr));
        label_63->setText(QCoreApplication::translate("Tourista", "Division", nullptr));
        label_64->setText(QCoreApplication::translate("Tourista", "Place", nullptr));
        pushButton_6->setText(QCoreApplication::translate("Tourista", "Back", nullptr));
        pushButton_5->setText(QCoreApplication::translate("Tourista", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Tourista: public Ui_Tourista {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOURISTA_H
