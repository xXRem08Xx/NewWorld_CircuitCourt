#include "pdf.h"
#include <QPdfWriter>
#include <QVector>
#include <QDebug>
#include <QSqlQuery>
#include "passerelle.h"

/**
 * @brief PDF::PDF
 * @param parent
 */
PDF::PDF(QWidget* parent):QTextBrowser (parent)
{

}

void PDF::ecrireTexte(QString leTexte)
{
    //ecrit le texte
    setHtml(toHtml()+"<p>"+leTexte+"</p>");
}

void PDF::chargerImage(QString chemin)
{
    //ecrit l'image
    setHtml(toHtml()+"<img src=\""+chemin+"\" />");

}

void PDF::fermer()
{
    qDebug()<<"void PDF::fermer()";
    //ferme le pdf en l'enregistrant
    QPdfWriter* printer = new QPdfWriter("ploum.pdf");
    printer->newPage();
    printer->setTitle("Circuit Court : Catalogue de nos Produits");
    printer->setPageSize(QPagedPaintDevice::A4);
    print(printer);
    qDebug()<<"ici";
}

void PDF::setName(QString nomDocument)
{
    nomDoc=nomDocument;
}

void PDF::brochurePDF(int idProducteur)
{
    qDebug()<<"void PDF::brochurePDF()";
    setName("catalogue.pdf");

    QVector<Rayon> mesRayons = Passerelle::chargerLesRayons(idProducteur);

    //pour chaque Rayon enregistré
    for(int numRayon = 0;numRayon < 2; numRayon++) //mesRayons.size() ; numRayon++ )
    {
        Rayon monRayon = mesRayons[numRayon];
        ecrireTexte(monRayon.getRayon());

        qDebug()<<"ecrireTexte : "<<monRayon.getRayon();
    }
    fermer();
}

