#ifndef FileEpisode_h
#define FileEpisode_h

#include "FileMedia.h"
#include "RessourceEpisode.h"

class FileEpisode : public FileMedia {

 public:
    FileEpisode(QFile *file);
    QString getSimpleName();
    bool moveFile(int idRessource);
    QList<RessourceEpisode *> getRessources();

 private:
    QList<RessourceEpisode *> _ressourceEpisodes;

};

#endif // FileEpisode_h
