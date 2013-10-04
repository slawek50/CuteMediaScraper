#ifndef FileCtrl_h
#define FileCtrl_h

#include <QObject>
#include <QString>
#include "../model/FileFilm.h"

class FileCtrl : public QObject {
    Q_OBJECT

public:
    FileCtrl();
    void setFileFilm(FileFilm * fileFilm);
    Q_INVOKABLE QString getFileName();
    Q_INVOKABLE QString getPath();

private:
    FileFilm *_fileFilm;
};

#endif  // MediaFile_h
