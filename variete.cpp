#include "variete.h"


Variete::Variete()
{

}

Variete::Variete(int unIdVariete, QString unLibelle, QString uneImage, QVector<Produit> desProduits)
{
    idVariete = unIdVariete;
    libelle = unLibelle;
    image = uneImage;
    lesProduits = desProduits;
}

int Variete::getIdVariete()
{
    return  idVariete;
}

QString Variete::getVariete()
{
    QString resultat = "Nom de la variété : " + libelle + "<br>";

    //pour chaque Produit enregistré
    for(int numProduit = 0; numProduit < lesProduits.size(); numProduit++)
    {
        Produit monProduit = lesProduits[numProduit];
        resultat+=monProduit.getProduit();
    }
    return  resultat;
}

QString Variete::getImage()
{
    return image;
}

QVector<Produit> Variete::getListeProduits()
{
    return lesProduits;
}
