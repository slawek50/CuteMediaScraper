#include <QtGui/QGuiApplication>
#include <QQmlContext>
#include <QFile>
#include "qtquick2applicationviewer.h"
#include "controller/FileCtrl.h"
#include "controller/ListFilesCtrl.h"
#include "model/FileFilm.h"

int main(int argc, char *argv[])
{
    // Create view
    QGuiApplication app(argc, argv);
    QtQuick2ApplicationViewer viewer;
    viewer.setMainQmlFile(QStringLiteral("qml/CuteMediaScraper/main.qml"));
    viewer.showExpanded();

    // Create Controllers
    ListFilesCtrl listFilesCtrl(&viewer);
    FileCtrl fileCtrl;

    // Map Controllers to view
    viewer.rootContext()->setContextProperty("fileCtrl", &fileCtrl);
    viewer.rootContext()->setContextProperty("listFilesCtrl", &listFilesCtrl);



    return app.exec();
}
