#include "FileMusic.h"

FileMusic::FileMusic(QFile *file):
    FileMedia(file), _ressourceMusics(QList<RessourceMusic *>())
{
}

QString FileMusic::getSimpleName()
{
    return "SimpelNameMusic: " + _name;
}

bool FileMusic::moveFile(int idRessource)
{
    return false;
}

QList<RessourceMusic *> FileMusic::getRessources()
{
    return _ressourceMusics;
}
