#include "FileCtrl.h"


FileCtrl::FileCtrl()
{

}

void FileCtrl::setFileFilm(FileFilm *fileFilm)
{
    _fileFilm = fileFilm;
}

QString FileCtrl::getFileName()
{
    return _fileFilm->getSimpleName();
}

QString FileCtrl::getPath()
{
    return _fileFilm->getPath();
}
