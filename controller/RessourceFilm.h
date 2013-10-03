#ifndef RessourceFilm_h
#define RessourceFilm_h

#include <QObject>
#include <QString>

class RessourceFilm : public QObject {
    Q_OBJECT

 public:
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
