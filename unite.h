#ifndef UNITE_H
#define UNITE_H
#include <QString>

class Unite
{
private:
    int idUnite;
    QString libelle;
    QString image;

public:
    Unite();
    Unite(int unIdUnite,QString unLibelle, QString uneImage);
    int getIdUnite();
    QString getUnite();
    QString getImage();
};

#endif // UNITE_H
