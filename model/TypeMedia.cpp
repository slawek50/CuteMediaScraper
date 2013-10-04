#include "TypeMedia.h"

TypeMedia::TypeMedia(QString name, QString pathFolder):
    _name(name), _pathFolder(pathFolder), _formats(QList<Format *>())
{
}

void TypeMedia::setFormat(int formatID)
{
    _formatID = formatID;
}

QString TypeMedia::getFormat()
{
    return QString("");
}

QList<Format *> TypeMedia::getFormats()
{
    return _formats;
}

int TypeMedia::addFormat(Format *format)
{
    _formats.append(format);
    return _formats.size() - 1;
}
