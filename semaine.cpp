#include "semaine.h"

Semaine::Semaine()
{

}

Semaine::Semaine(int unIdSemaine, QDate uneDate)
{
    idSemaine = unIdSemaine;
    date = uneDate;
}

int Semaine::getId()
{
    return idSemaine;
}

QDate Semaine::getDate()
{
    return date;
}
