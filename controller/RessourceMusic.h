#ifndef RessourceMusic_h
#define RessourceMusic_h

#include <QObject>
#include <QString>

class RessourceMusic : public QObject {
    Q_OBJECT

 public:
    QString getArtist();
    QString getAlbulm();
    QString getTitle();


 private:
    QString _artist;
    QString _albulm;
    QString _title;
};

#endif // RessourceMusic_h
