#include "FileMedia.h"

FileMedia::FileMedia()
{
    QFile file("/Volumes/tmp/Shreck-2|_(2013).TEAM.avi");

    // Read name & extention
    QString fileName = file.fileName();
    int start = fileName.lastIndexOf("/") + 1;
    int end = fileName.lastIndexOf(".");
    _name = fileName.mid(start, end - start);
    _ext = fileName.mid(end, fileName.length());
    _path = fileName.mid(0, start);

/*
    // Prepare queryName from name
    _simpleName = _name;
    _simpleName.replace(QRegExp("[-_|\().]"), "+");
    _simpleName.replace(QRegExp("([+]+)"), "+");

    // Create / Generate List
    _list = QList<Ressource *>();
    for (int var = 0; var < 5; ++var) {
        _list.insert(0, new Ressource("toto", 2013));
    }
    */
}

QString FileMedia::getName()
{
    return _name + _ext;
}

QString FileMedia::getPath()
{
    return _path;
}

QString FileMedia::getPathName()
{
    return _path + _name;
}
/*
QString FileMedia::getRessources()
{
   /** QString result;
    Ressource *ressource;
    foreach (ressource, _list) {
        result = result + ", " + ressource->getDisplayName();
    }

    return QString("result");
}
*/
