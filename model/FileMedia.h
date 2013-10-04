#ifndef FileMedia_h
#define FileMedia_h

#include <QObject>
#include <QFile>
#include <QString>
#include <QStringBuilder>
#include <QRegExp>
#include "TypeMedia.h"
#include "IRessource.h"

class FileMedia : public QObject {
    Q_OBJECT

public:
    FileMedia(QFile *file);
    QString getName();
    QString getPath();
    QString getPathName();
    virtual QString getSimpleName()  = 0;
    virtual bool moveFile(int idRessource)  = 0;
    QList<IRessource *> getRessources();

protected:
    QString _name;
    QString _ext;
    QString _path;
    TypeMedia *_typeMedia;
};

#endif  // MediaFile_h
