#ifndef PRODUIT_H
#define PRODUIT_H
#include <QString>
#include <QDate>

class Produit
{
private:
    int id;
    QString libelle;
    float prix;
    int quantite;
    QString image;
    QString description;
    QDate dateEnregistrement;

public:
    Produit();
    Produit(int unId, QString unLibelle, float unPrix, int uneQuantite, QString uneImage, QString uneDescription, QDate uneDate);
    QString getImage();
    QString getProduit();
    float getPrix();
    QDate getDate();
};

#endif // PRODUIT_H
