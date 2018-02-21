#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickView>
#include "ellipseitem.h"

//Artem Maksymenko
#include <QQmlContext>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);
    qmlRegisterType<EllipseItem>("shapes",1,0,"Ellipse");


    QQmlApplicationEngine engine;

    //Artem Maksymenko
    //EllipseItem ellipseitem;
    //engine.rootContext()->setContextProperty("ellipseitem", &ellipseitem);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
