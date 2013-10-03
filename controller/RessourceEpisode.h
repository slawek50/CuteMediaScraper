#ifndef RessourceEpisode_h
#define RessourceEpisode_h

#include <QObject>
#include <QString>

class RessourceEpisode : public QObject {
    Q_OBJECT

 public:
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
