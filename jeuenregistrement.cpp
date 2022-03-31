#include "jeuenregistrement.h"


/**
 * @brief Cette fonction permet d'executer une commande SQL et de se placer sur le premier enregistrement
 * @param chaineSql : QString qui contient la ligne de commande SQL
 */
JeuEnregistrement::JeuEnregistrement(QString chaineSql):QSqlQuery (chaineSql)
{
    //ouvre la requete et place sur le premier enregistrement
    first();
}

/**
 * @brief Cette fonction permet de passer à l'enregistrement suivant de la requete SQL
 */
void JeuEnregistrement::suivant()
{
    next();
}

/**
 * @brief Cette fonction permet de savoir si on a atteint le dernier enregistrement
 * @return ! isvalid : bool contenant l'indication si on à atteint le dernier enregistrement
 */
bool JeuEnregistrement::fin()
{
    return !isValid();
}

/**
 * @brief Cette fonction permet d'obtenir la valeur du champ indiqué en paramètre
 * @param nomChamp : (Qstring) contient le nom du champ de la valeur voulu
 * @return value(nomChamp) : valeur du champ indiqué
 */
QVariant JeuEnregistrement::getValeur(QString nomChamp)
{
    return value(nomChamp);
}

/**
 * @brief Cette fonction permet de fermer le jeu d'enregistrement
 */
void JeuEnregistrement::fermer()
{
    //fermeture de la requete

}
