#ifndef RessourceEpisode_h
#define RessourceEpisode_h

#include <QString>
#include "IRessource.h"

class RessourceEpisode : public IRessource {

 public:
    RessourceEpisode(QString tvShow, QString season, int episodeNum, QString title);
    QString getTvShow();
    QString getSeason();
    int getEpisodeNum();
    QString getTitle();

 private:
    QString _tvShow;
    QString _season;
    int _episodeNum;
    QString _title;
};

#endif // RessourceEpisode_h
