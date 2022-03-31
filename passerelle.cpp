#include "passerelle.h"
#include <QDebug>

/**
 * @brief Cette fonction permet d'aller chercher dans la base la liste de tout les rayons et de les mettres dans un QVector d'objet Rayon
 * @return Retourne un QVector contenant une liste d'objet Rayon
 */
QVector<Rayon> Passerelle::chargerLesRayons(int idProducteur)
{
    qDebug()<<"chargerRayon()";

    //on creer un Qvector de la classe Rayon
    QVector<Rayon> lesRayons;
    //on instancie une variable de type JeuEnregistrement
    JeuEnregistrement mesRayons = JeuEnregistrement("SELECT `identifiantRayon`, `libelle`, `lienImage` FROM `Rayon`;");

    //on boucle
    while (! mesRayons.fin())
    {
        int unIdRayon = mesRayons.getValeur("identifiantRayon").toInt();
        QString unLibelle = mesRayons.getValeur("libelle").toString();
        QString uneImage = mesRayons.getValeur("lienImage").toString();

        qDebug()<<"nom rayon : "<<unLibelle;

        Rayon monRayon = Rayon(unIdRayon, unLibelle, uneImage, chargerCategorie(unIdRayon, idProducteur));
        lesRayons.append(monRayon);
        mesRayons.next();
    }
    return lesRayons;
}

/**
 * @brief Cette fonction permet d'aller chercher dans la base la liste de toute les Categories appartenant a un rayon donné en parametre et de les mettres dans un QVector d'objet Categorie
 * @param idRayon : Integer Contient l'id du rayon voulu
 * @return Retourne un QVector contenant une liste d'objet Categorie
 */
QVector<Categorie> Passerelle::chargerCategorie(int idRayon, int idProducteur)
{
    qDebug()<<"chargerCategorie()";

    //on creer un Qvector de la classe Categorie
    QVector<Categorie> lesCategories;
    //on instancie une variable de type JeuEnregistrement
    JeuEnregistrement mesCategories = JeuEnregistrement("SELECT `identifiantCategorie`, `libelle`, `lienImage` FROM `Categorie` WHERE identifiantRayon = "
                                                        +QString::number(idRayon)+";");

    //on boucle
    while(! mesCategories.fin())
    {
        int unIdCategorie = mesCategories.getValeur("identifiantCategorie").toInt();
        QString unLibelle = mesCategories.getValeur("libelle").toString();
        QString uneImage = mesCategories.getValeur("lienImage").toString();

        qDebug()<<"nom categorie : "<<unLibelle;

        Categorie maCategorie = Categorie(unIdCategorie, unLibelle, uneImage, chargerVariete(unIdCategorie, idProducteur));
        lesCategories.append(maCategorie);
        mesCategories.next();
    }
    return lesCategories;
}

/**
 * @brief Cette fonction permet d'aller chercher dans la base la liste de toute les Varietes et de les mettres dans un QVector d'objet Variete
 * @return Retourne un QVector contenant une liste d'objet Variete
 */
QVector<Variete> Passerelle::chargerVariete(int idCategorie, int idProducteur)
{
    qDebug()<<"chargerVariete()";

    //on creer un Qvector de la classe Variete
    QVector<Variete> lesVarietes;
    //on instancie une variable de type JeuEnregistrement
    JeuEnregistrement mesVarietes = JeuEnregistrement("SELECT `identifiantVariete`, `libelle`, `lienImage` FROM `Variete` WHERE identifiantCategorie = "+QString::number(idCategorie)+";");

    //on boucle
    while(! mesVarietes.fin())
    {
        int unIdVariete = mesVarietes.getValeur("identifiantVariete").toInt();
        QString unLibelle = mesVarietes.getValeur("libelle").toString();
        QString uneImage = mesVarietes.getValeur("lienImage").toString();

        qDebug()<<"nom variete : "<<unLibelle;

        Variete maVariete = Variete(unIdVariete, unLibelle, uneImage, chargerProduit(unIdVariete, idProducteur));
        lesVarietes.append(maVariete);
        mesVarietes.suivant();
    }
    return lesVarietes;
}

/**
 * @brief Cette fonction permet d'aller chercher dans la base la liste de toute les Unites et de les mettres dans un QVector d'objet Unite
 * @return Retourne un QVector contenant une liste d'objet Unite
 */
QVector<Unite> Passerelle::chargerUnite()
{
    //on creer un Qvector de la classe Unite
    QVector<Unite> lesUnites;
    //on instancie une variable de type JeuEnregistrement
    JeuEnregistrement mesUnites = JeuEnregistrement("SELECT `identifiantUnite`, `libelle`, `lienImage` FROM `Unite`;");

    //on boucle
    while(! mesUnites.fin())
    {
        int unIdUnite = mesUnites.getValeur("identifiantUnite").toInt();
        QString unLibelle = mesUnites.getValeur("libelle").toString();
        QString uneImage = mesUnites.getValeur("lienImage").toString();

        Unite monUnite = Unite(unIdUnite, unLibelle, uneImage);
        lesUnites.append(monUnite);
        mesUnites.suivant();
    }
    return lesUnites;
}

QVector<Produit> Passerelle::chargerProduit(int idVariete, int idProducteur)
{
    qDebug()<<"chargerProduit()";
    //on creer un Qvector de la classe Produit
    QVector<Produit> lesProduits;

    //on instancie une variable de type JeuEnregistrement
    JeuEnregistrement mesProduits = JeuEnregistrement("SELECT `identifiantProduit`, `libelle`, `prix`, `quantite`, `image`, `description`, `dateEnregistrement` "
                                                      "FROM `Produit` WHERE `identifiantVariete` = "+QString::number(idVariete)+" "
                                                                                                                                "AND `identifiantProducteur` = "+QString::number(idProducteur)+";");

    if(mesProduits.size() != 0)
    {
        //on boucle
        while(! mesProduits.fin())
        {
            int unIdProduit = mesProduits.getValeur("identifiantProduit").toInt();
            QString unLibelle = mesProduits.getValeur("libelle").toString();
            QString uneImage = mesProduits.getValeur("image").toString();
            float unPrix = mesProduits.getValeur("prix").toFloat();
            int uneQuantite = mesProduits.getValeur("quantite").toInt();
            QDate uneDate = mesProduits.getValeur("dateEnregistrement").toDate();
            QString uneDescription = mesProduits.getValeur("description").toString();

            qDebug()<<"nom produit : "<<unLibelle;

            Produit unProduit = Produit(unIdProduit, unLibelle,unPrix, uneQuantite, uneImage,uneDescription, uneDate);
            lesProduits.append(unProduit);
            mesProduits.next();
        };
    }
    else
    {
        lesProduits.append(Produit());
    }

    return lesProduits;

}

