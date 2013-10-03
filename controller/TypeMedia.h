#ifndef TypeMedia_h
#define TypeMedia_h

#include <QObject>
#include <QList>
#include <QString>
#include "Format.h"

class TypeMedia : public QObject {
    Q_OBJECT

 public:
    TypeMedia();
    QString getFormat();
    QList<Format *> getFormats();

 private:
    QString _name;
    QString _pathFolder;
    int _formatID;
    QList<Format *> _formats;

};

#endif // TypeMedia_h
