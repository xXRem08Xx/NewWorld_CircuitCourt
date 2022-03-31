/**
 * @author Maissa Rémi
 * @abstract Ce fichier est le header de la classe Rayon
 * @date 08/12/2021
 * @version 1.0 beta 1
 */

#ifndef RAYON_H
#define RAYON_H
#include <QString>
#include <QVector>
#include "categorie.h"

class Rayon
{
private:
    int id;
    QString libelle;
    QString image;
    QVector<Categorie> lesCategories;

public:
    Rayon();
    Rayon(int unId, QString unLibelle, QString uneImage, QVector<Categorie> desCategories);
    QString getImageRayon();
    QString getRayon();
    int getIdRayon();

    QVector<Categorie> getListeCategories();
};

#endif // RAYON_H
