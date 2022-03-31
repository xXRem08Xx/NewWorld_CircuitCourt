#ifndef SEMAINE_H
#define SEMAINE_H
#include <QString>
#include <QDate>

class Semaine
{
private:
    int idSemaine;
    QDate date;

public:
    Semaine();
    Semaine(int unIdSemaine, QDate uneDate);
    int getId();
    QDate getDate();
};

#endif // SEMAINE_H
