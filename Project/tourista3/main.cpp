#include "Tourista.h"
#include <QApplication>
#include <QtCore>
#include <QtCoreDepends>
#include <QSplashScreen>
#include <QTimer>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QSplashScreen *sp = new QSplashScreen;
    sp->setPixmap(QPixmap(":/resources/img/tourista.jpeg"));
    sp->show();

    Tourista w;

    QTimer::singleShot(4000,sp,SLOT(close()));
    QTimer::singleShot(4000,&w,SLOT(show()));


    //w.show();

    return a.exec();
}
