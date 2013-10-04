#ifndef FileMusic_h
#define FileMusic_h

#include "FileMedia.h"
#include "RessourceMusic.h"

class FileMusic : public FileMedia {

 public:
    FileMusic(QFile *file);
    QString getSimpleName();
    bool moveFile(int idRessource);
    QList<RessourceMusic *> getRessources();

 public:
    QList<RessourceMusic *> _ressourceMusics;

};

#endif // FileMusic_h
