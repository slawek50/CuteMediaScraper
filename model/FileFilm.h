#ifndef FileFilm_h
#define FileFilm_h

#include "FileMedia.h"
#include "RessourceFilm.h"

class FileFilm : public FileMedia {

 public:
    FileFilm(QFile *file);
    QString getSimpleName();
    bool moveFile(int idRessource);
    QList<RessourceFilm *> getRessources();

 public:
    QList<RessourceFilm *> _ressourceFilms;

};

#endif // FileFilm_h
