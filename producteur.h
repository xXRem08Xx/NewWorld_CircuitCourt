#ifndef PRODUCTEUR_H
#define PRODUCTEUR_H

#include <QString>

class Producteur
{
private:
    int idProducteur;
    QString nom;
    QString prenom;
    QString mail;
    QString telephone;
    QString adresse;
    QString horaire;
    int idTypeAbonnement;

public:
    Producteur();
    Producteur(int unIdProducteur, QString unNom, QString unPrenom, QString unMail, QString unTelephone, QString uneAdresse, QString unHoraire,int unIdTypeAbonnement);
    int getIdProducteur();
    QString getProducteur();
    int getTypeAbonnement();
};

#endif // PRODUCTEUR_H
