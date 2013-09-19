#include <QtGui/QGuiApplication>
#include <QQmlContext>
#include "qtquick2applicationviewer.h"
#include "controller/anchor.h"

int main(int argc, char *argv[])
{
    Anchor anchor;

    QGuiApplication app(argc, argv);

    QtQuick2ApplicationViewer viewer;
    viewer.rootContext()->setContextProperty("anchor", &anchor);
    viewer.setMainQmlFile(QStringLiteral("qml/CuteMediaScraper/main.qml"));
    viewer.showExpanded();

    return app.exec();
}
