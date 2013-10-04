#include "FileFilm.h"

FileFilm::FileFilm(QFile *file):
    FileMedia(file), _ressourceFilms(QList<RessourceFilm *>())
{
}

QString FileFilm::getSimpleName()
{
    /*
    // Prepare queryName from name
    _simpleName = _name;
    _simpleName.replace(QRegExp("[-_|\().]"), "+");
    _simpleName.replace(QRegExp("([+]+)"), "+");*/
    return "SimpleNameFilm: " + _name;
}

bool FileFilm::moveFile(int idRessource)
{
    return false;
}

QList<RessourceFilm *> FileFilm::getRessources()
{
    /*
    QString result;
    Ressource *ressource;
    foreach (ressource, _list) {
        result = result + ", " + ressource->getDisplayName();
    }

    return QString("result");*/
    return _ressourceFilms;
}
