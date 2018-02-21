import QtQuick 2.9
import QtQuick.Window 2.2
import shapes 1.0

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    Ellipse {
        anchors.fill: parent
    }


    MouseArea {
        anchors.fill: parent
        onClicked: {
            Qt.quit()
        }
    }
}
