#include "produit.h"

Produit::Produit()
{

}

/**
 * @brief Cette fonction est le constructeur de la Class Produit avec 7 arguments passés en parametre
 * @param unId : Integer Contient l'id du produit
 * @param unLibelle : String Contient le nom du produit
 * @param unPrix : Float Contient le prix du produit
 * @param uneQuantite : Integer Contient la quantité restante du produit
 * @param uneImage : String Contient le chemin de l'image du produit
 * @param uneDescription : String Contient la description renseigné par le producteur
 * @param uneDate : Date Contient la date d'enregistrement du produit
 */
Produit::Produit(int unId, QString unLibelle, float unPrix, int uneQuantite, QString uneImage, QString uneDescription, QDate uneDate)
{
    id = unId;
    libelle = unLibelle;
    prix = unPrix;
    quantite = uneQuantite;
    image = uneImage;
    description = uneDescription;
    dateEnregistrement = uneDate;
}

/**
 * @brief Cette fonction retourne le chemin de l'image du produit
 * @return Retourne un QString contenant le chemin de l'image
 */
QString Produit::getImage()
{
    return image;
}

/**
 * @brief Cette fonction retourne la description du produit
 * @return Retourne un QString contenant la mise en forme du descriptif du produit
 */
QString Produit::getProduit()
{
    QString resultat = "Nom du produit : "+libelle+"\n"+
                "Description : "+description+"\n"+
                "Prix : "+QString::number(prix)+"\n"+
                "Quantité : "+QString::number(quantite)+"\n";
}

/**
 * @brief Cette fonction retourne le prix du produit
 * @return Retourne un float contenant le prix du produit
 */
float Produit::getPrix()
{
    return prix;
}

/**
 * @brief Cette fonction retourne la date d'enregistrement du produit
 * @return Retourne un QDate contenant la date d'enregistrement du produit
 */
QDate Produit::getDate()
{
    return dateEnregistrement;
}
