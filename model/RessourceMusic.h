#ifndef RessourceMusic_h
#define RessourceMusic_h

#include <QString>
#include "IRessource.h"

class RessourceMusic : public IRessource {

 public:
    RessourceMusic(QString artist, QString albulm, QString title);
    QString getArtist();
    QString getAlbulm();
    QString getTitle();


 private:
    QString _artist;
    QString _albulm;
    QString _title;
};

#endif // RessourceMusic_h
