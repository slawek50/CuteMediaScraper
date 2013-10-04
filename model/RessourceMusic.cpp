#include "RessourceMusic.h"


RessourceMusic::RessourceMusic(QString artist, QString albulm, QString title):
    _artist(artist), _albulm(albulm), _title(title)
{
}

QString RessourceMusic::getArtist()
{
    return _artist;
}

QString RessourceMusic::getAlbulm()
{
    return _albulm;
}

QString RessourceMusic::getTitle()
{
    return _title;
}
