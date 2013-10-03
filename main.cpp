#include <QtGui/QGuiApplication>
#include <QQmlContext>
#include "qtquick2applicationviewer.h"
#include "controller/FileFilm.h"
#include <QFile>

int main(int argc, char *argv[])
{
    FileFilm film;

    QGuiApplication app(argc, argv);

    QtQuick2ApplicationViewer viewer;
    viewer.rootContext()->setContextProperty("film", &film);
    viewer.setMainQmlFile(QStringLiteral("qml/CuteMediaScraper/main.qml"));
    viewer.showExpanded();

    return app.exec();
}
