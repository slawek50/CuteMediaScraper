#include "RessourceEpisode.h"


RessourceEpisode::RessourceEpisode(QString tvShow, QString season, int episodeNum, QString title):
    _tvShow(tvShow), _season(season), _episodeNum(episodeNum), _title(title)
{
}

QString RessourceEpisode::getTvShow()
{
    return _tvShow;
}

QString RessourceEpisode::getSeason()
{
    return _season;
}

int RessourceEpisode::getEpisodeNum()
{
    return _episodeNum;
}

QString RessourceEpisode::getTitle()
{
    return _title;
}
