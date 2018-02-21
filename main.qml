import QtQuick 2.9
import QtQuick.Window 2.2
import shapes 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Ellipse {
        width: 100
        height: 100
        anchors.centerIn: parent
    }


    MouseArea {
        anchors.fill: parent
        onClicked: {
            Qt.quit()
        }
    }
}
