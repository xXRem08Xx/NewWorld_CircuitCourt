#include "producteur.h"

Producteur::Producteur()
{

}

Producteur::Producteur(int unIdProducteur, QString unNom, QString unPrenom, QString unMail, QString unTelephone, QString uneAdresse, QString unHoraire, int unIdTypeAbonnement)
{
    idProducteur = unIdProducteur;
    nom = unNom;
    prenom = unPrenom;
    mail = unMail;
    telephone = unTelephone;
    adresse = uneAdresse;
    horaire = unHoraire;
    idTypeAbonnement = unIdTypeAbonnement;
}

int Producteur::getIdProducteur()
{
    return idProducteur;
}

QString Producteur::getProducteur()
{
    QString resultat = "Nom du producteur : " + nom + " " + prenom + "<br>" + "Mail : " + mail + "<br>"
            +"Telephone : " + telephone + "<br>" + "Adresse : " + adresse + "<br>" + "Horaire : " + horaire + "<br>";
    return resultat;
}

int Producteur::getTypeAbonnement()
{
    return idTypeAbonnement;
}

