#include "headers/ellipseitem.h"
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickView>

//////////////////////////////////////
//For example, signals, until not used
//#include <QQmlContext>
//////////////////////////////////////

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);
    qmlRegisterType<EllipseItem>("shapes",1,0,"Ellipse");


    QQmlApplicationEngine engine;

    ////////////////////////////////////////////////////////////////////////
    //For example, signals, until not used
    //---------------------------Example_1--------------------------------//
    //EllipseItem ellipseitem;
    //engine.rootContext()->setContextProperty("ellipseitem", &ellipseitem);
    //------------------------OR-Example_2--------------------------------//
    //EllipseItem ellipseitem;
    //QQuickView *view = new QQuickView;
    //QQmlContext *context = view->engine()->rootContext();
    //engine.rootContext()->setContextProperty("ellipseitem", &ellipseitem);
    //context->setContextProperty("ellipseitem", &ellipseitem);
    ////////////////////////////////////////////////////////////////////////

    engine.load(QUrl(QStringLiteral("qrc:/qml/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
