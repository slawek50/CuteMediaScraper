#include "RessourceFilm.h"


RessourceFilm::RessourceFilm(QString title, int year, QString imdbID, QString photoURL):
    _title(title), _year(year), _imdbID(imdbID), _photoURL(photoURL)
{
}

QString RessourceFilm::getTitle()
{
    return _title;
}

int RessourceFilm::getYear()
{
    return _year;
}

QString RessourceFilm::getImdbID()
{
    return _imdbID;
}

QString RessourceFilm::getPhotoURL()
{
    return _photoURL;
}
