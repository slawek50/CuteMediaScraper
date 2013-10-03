#ifndef FileMusic_h
#define FileMusic_h

#include "FileMedia.h"
#include "RessourceMusic.h"

class FileMusic : public FileMedia {

 public:
    FileMusic();
    QString getSimpleName();
    bool moveFile(int idRessource);

 public:
    QList<RessourceMusic *> _ressourceMusics;

};

#endif // FileMusic_h
