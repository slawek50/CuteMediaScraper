#ifndef FileMedia_h
#define FileMedia_h

#include <QObject>
#include <QFile>
#include <QString>
#include <QStringBuilder>
#include <QRegExp>
#include "TypeMedia.h"

class FileMedia : public QObject {
    Q_OBJECT

public:
    FileMedia();
    Q_INVOKABLE QString getName();
    Q_INVOKABLE QString getPath();
    QString getPathName();
    Q_INVOKABLE virtual QString getSimpleName()  = 0;
    virtual bool moveFile(int idRessource)  = 0;

private:
    QString _name;
    QString _ext;
    QString _path;
    TypeMedia *myMediaType;
};

#endif  // MediaFile_h
