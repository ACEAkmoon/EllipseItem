import QtQuick 2.9
import QtQuick.Window 2.2
import shapes 1.0

Window {
    id: mainWindow
    width: 600
    height: 480
    visible: true
    title: qsTr("Hello World")
    minimumHeight: mainWindow.height
    maximumHeight: mainWindow.height
    minimumWidth: mainWindow.width
    maximumWidth:  mainWindow.width
    //visibility: "FullScreen"
    color: "transparent"

    MainForm {}
}
