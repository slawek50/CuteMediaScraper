#ifndef JSonFilmParser_H
#define JSonFilmParser_H

#include "IParserAPI.h"
#include "../model/RessourceFilm.h"

class JSonFilmParser : public IParserAPI
{
public:
    QList<IRessource *> searchAll(QString title);

protected:
    QList<RessourceFilm *> readRessources(QString string);
    virtual QString readImage(QString value) = 0;

    QString _keyTitle;
    QString _keyYear;
    QString _keyImdbId;
    QString _keyImage;
};

#endif // JSonFilmParser_H
