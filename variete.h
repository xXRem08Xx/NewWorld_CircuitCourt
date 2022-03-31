#ifndef VARIETE_H
#define VARIETE_H
#include <QString>
#include <QVector>
#include "produit.h"


class Variete
{
private:
    int idVariete;
    QString libelle;
    QString image;
    int idCategorie;
    QVector<Produit> lesProduits;

public:
    Variete();
    Variete(int unIdVariete, QString unLibelle, QString uneImage, QVector<Produit> desProduits);
    int getIdVariete();
    QString getVariete();
    QString getImage();

    QVector<Produit> getListeProduits();
};

#endif // VARIETE_H
