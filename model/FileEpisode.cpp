#include "FileEpisode.h"


FileEpisode::FileEpisode(QFile *file):
    FileMedia(file), _ressourceEpisodes(QList<RessourceEpisode *>())
{
}

QString FileEpisode::getSimpleName()
{
    return "todo: " + getName();
}

bool FileEpisode::moveFile(int idRessource)
{
    return false;
}

QList<RessourceEpisode *> FileEpisode::getRessources()
{
    return _ressourceEpisodes;
}
