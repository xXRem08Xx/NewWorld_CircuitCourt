/**
 * @author Maissa Rémi
 * @abstract Ce fichier est le header de la classe JeuEnregistrement
 * @date 08/12/2021
 * @version 1.0 beta 1
 */

#ifndef JEUENREGISTREMENT_H
#define JEUENREGISTREMENT_H
#include <QString>
#include <QVariant>
#include <QSqlQuery>


class JeuEnregistrement: public QSqlQuery
{
public:

    JeuEnregistrement(QString chaineSql);
    void suivant();
    bool fin();
    QVariant getValeur(QString nomChamp);
    void fermer();
};

#endif // JEUENREGISTREMENT_H
