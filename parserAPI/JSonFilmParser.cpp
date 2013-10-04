#include "JSonFilmParser.h"

QList<IRessource *> JSonFilmParser::searchAll(QString title)
{
    QList<RessourceFilm *> liste();
    return dynamic_cast<QList<IRessource *> >(liste);
}

QList<RessourceFilm *> JSonFilmParser::readRessources(QString string)
{
    return QList<RessourceFilm *>();
}
