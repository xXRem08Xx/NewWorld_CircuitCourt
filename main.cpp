#include "mainwindow.h"
#include <QApplication>
#include <QSqlDatabase>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("rmaissa_NewWorld");
    db.setUserName("rmaissa");
    db.setPassword("elini01");
    bool ok = db.open();


    MainWindow w;
    w.show();

    return a.exec();
}
