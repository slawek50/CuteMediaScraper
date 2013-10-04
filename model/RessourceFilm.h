#ifndef RessourceFilm_h
#define RessourceFilm_h

#include <QString>
#include "IRessource.h"

class RessourceFilm : public IRessource {

 public:
    RessourceFilm(QString title, int year, QString imdbID, QString photoURL);
    QString getTitle();
    int getYear();
    QString getImdbID();
    QString getPhotoURL();


 private:
    QString _title;
    int _year;
    QString _imdbID;
    QString _photoURL;
};

#endif // RessourceFilm_h
