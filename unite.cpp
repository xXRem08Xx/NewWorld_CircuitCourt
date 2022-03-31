#include "unite.h"


Unite::Unite()
{

}

Unite::Unite(int unIdUnite, QString unLibelle, QString uneImage)
{
    idUnite = unIdUnite;
    libelle = unLibelle;
    image = uneImage;
}

int Unite::getIdUnite()
{
    return idUnite;
}

QString Unite::getUnite()
{
    QString resultat = "Nom de l'unité : " + libelle + "<br>";
    return resultat;
}

QString Unite::getImage()
{
    return image;
}


