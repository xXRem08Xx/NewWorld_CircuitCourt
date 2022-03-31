#include "rayon.h"
/**
 * @brief Constructeur vide de la Classe Rayon
 */
Rayon::Rayon()
{

}

/**
 * @brief Constructeur de la Classe Rayon avec des arguments passé en parametre
 * @param unId : int Contient l'id du rayon
 * @param unLibelle : String Contient le nom du rayon
 * @param uneImage : String Contient le chemin de l'image du rayon
 */
Rayon::Rayon(int unId, QString unLibelle, QString uneImage, QVector<Categorie> desCategories)
{
    id = unId;
    libelle = unLibelle;
    image = uneImage;
    lesCategories = desCategories;
}

/**
 * @brief Fonction permettant de recuperer le chemin de l'image du rayon
 * @return Retourne le chemin de l'image
 */
QString Rayon::getImageRayon()
{
    return image;
}

/**
 * @brief Fonction permettant d'obtenir l'affichage des informations du rayon suivant l'id passé comme argument
 * @param unId : Int Contient l'id du rayon voulu
 * @return Retourne une chaine de caractere contenant la liste des informations du rayon
 */
QString Rayon::getRayon()
{
    QString ChaineResultat = "Nom du rayon : " + libelle + "<br>";
    for (int numCategorie = 0; numCategorie < lesCategories.size(); numCategorie++)
    {
        Categorie maCategorie = lesCategories[numCategorie];
        ChaineResultat+=maCategorie.getCategorie();

    }
    return ChaineResultat;
}

int Rayon::getIdRayon()
{
    return  id;
}

QVector<Categorie> Rayon::getListeCategories()
{
    return lesCategories;
}
