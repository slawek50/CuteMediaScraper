#ifndef FileFilm_h
#define FileFilm_h

#include "FileMedia.h"
#include "RessourceFilm.h"

class FileFilm : public FileMedia {

 public:
    FileFilm();
    QString getSimpleName();
    bool moveFile(int idRessource);

 public:
    QList<RessourceFilm *> _ressourceFilms;

};

#endif // FileFilm_h
