/**
 * @author Maissa Rémi
 * @abstract Ce fichier est le header de la classe Passerelle
 * @date 08/12/2021
 * @version 1.0 beta 1
 */

#ifndef PASSERELLE_H
#define PASSERELLE_H

#include <QVector>
#include <QString>

#include "rayon.h"
#include "jeuenregistrement.h"
#include "categorie.h"
#include "variete.h"
#include "unite.h"
#include "producteur.h"
#include "semaine.h"
#include "produit.h"

class Passerelle
{
public:
    Passerelle();
    static QVector<Rayon> chargerLesRayons(int idProducteur);
    static QVector<Categorie> chargerCategorie(int idRayon, int idProducteur);
    static QVector<Variete> chargerVariete(int idCategorie, int idProducteur);
    static QVector<Unite> chargerUnite();
    static QVector<Producteur> chargerProducteur();
    static QVector<Produit> chargerProduit(int idVariete, int idProducteur);



};

#endif // PASSERELLE_H
