/**
 * @author Maissa Rémi
 * @abstract Ce fichier est le header de la classe Categorie
 * @date 08/12/2021
 * @version 1.0 beta 1
 */

#ifndef CATEGORIE_H
#define CATEGORIE_H
#include <QString>
#include <QVector>
#include "variete.h"

class Categorie
{
private:
    int idCategorie;
    int idRayon;
    QString libelle;
    QString image;
    QVector<Variete> lesVarietes;

public:
    Categorie();
    Categorie(int unIdCategorie, QString unLibelle, QString uneImage, QVector<Variete> desVarietes);
    int getIdCategorie();
    QString getImage();
    QString getCategorie();
    int getIdRayon();

    QVector<Variete> getlisteVarietes();
};

#endif // CATEGORIE_H
