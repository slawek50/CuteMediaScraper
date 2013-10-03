#ifndef FileEpisode_h
#define FileEpisode_h

#include "FileMedia.h"
#include "RessourceEpisode.h"

class FileEpisode : public FileMedia {

 public:
    QString getSimpleName();
    bool moveFile(int idRessource);

 private:
    QList<RessourceEpisode *> _ressourceEpisodes;

};

#endif // FileEpisode_h
