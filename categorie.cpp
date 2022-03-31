#include "categorie.h"

/**
 * @brief Cette fonction est le constructeur de la Class Categorie avec 4 arguments passés en parametre
 * @param unIdCategorie : int Contient l'id de la categorie
 * @param unLibelle : String Contient le nom de la categorie
 * @param uneImage : String Contient le chemin de l'image de la categorie
 * @param desVarietes : QVector<Variete>
 */
Categorie::Categorie()
{

}

Categorie::Categorie(int unIdCategorie, QString unLibelle, QString uneImage, QVector<Variete> desVarietes)
{
    idCategorie = unIdCategorie;
    libelle = unLibelle;
    image = uneImage;
    lesVarietes = desVarietes;
}

int Categorie::getIdCategorie()
{
    return idCategorie;
}

/**
 * @brief Cette fonction permet de retourner l'image de la categorie
 * @return Retourne une chaine de caractere contenant le chemin de l'image
 */
QString Categorie::getImage()
{
    return image;
}

/**
 * @brief Cette fonction permet de retourner les informations de la categorie
 * @return Retourne une chaine de caractere contenant la liste des informations
 */
QString Categorie::getCategorie()
{
    QString resultat = "Nom de la Categorie : " + libelle + "<br>";


    //pour chaque Variete enregistrée
    for(int numVariete = 0; numVariete < lesVarietes.size(); numVariete++)
    {
        Variete maVariete = lesVarietes[numVariete];
        resultat+=maVariete.getVariete();

    }
    return  resultat;
}

/**
 * @brief Cette fonction permet de retourner l'id du rayon à lequel appartient la categorie
 * @return Retourne un integer contenant l'id du rayon
 */
int Categorie::getIdRayon()
{
    return idRayon;
}

QVector<Variete> Categorie::getlisteVarietes()
{
    return lesVarietes;
}
