#ifndef LISTFILESCTRL_H
#define LISTFILESCTRL_H

#include <QObject>
#include <QString>
#include <QFile>
#include "qtquick2applicationviewer.h"
#include "../model/FileFilm.h"

class ListFilesCtrl : public QObject {
    Q_OBJECT

public:
    ListFilesCtrl(QtQuick2ApplicationViewer *view);
    Q_INVOKABLE QString addFile(QString filePath);

private:
    QList<QFile *> _files;
    QtQuick2ApplicationViewer *_view;
};

#endif // LISTFILESCTRL_H
