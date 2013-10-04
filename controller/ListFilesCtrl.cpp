#include "ListFilesCtrl.h"


ListFilesCtrl::ListFilesCtrl(QtQuick2ApplicationViewer *view):
    _view(view)
{
}

QString ListFilesCtrl::addFile(QString filePath)
{
    QString result("not found");

    // Check extension
    QString ext(filePath.mid(filePath.lastIndexOf("."), filePath.length()));

    // If file ==> Film
    if (ext == ".avi" || ext == ".mp4" || ext == ".mkv") {
        QFile file(filePath);
        _files.append(&file);
        FileFilm fileFilm(&file);
        result = fileFilm.getSimpleName();
    }

    return result;
}
