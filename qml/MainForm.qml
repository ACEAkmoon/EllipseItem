import QtQuick 2.9
import QtQuick.Window 2.2
import shapes 1.0

Rectangle {
    id: mainForm
    width: parent.width
    height: parent.height
    visible: true
    color: "blue"

    gradient: Gradient {
                        GradientStop {
                            position: 1.0
                            SequentialAnimation on color {
                                loops: Animation.Infinite
                                ColorAnimation { from: "#0E1533"; to: "#14148c"; duration: 5000 }
                                ColorAnimation { from: "#14148c"; to: "#0E1533"; duration: 5000 }
                            }
                        }
                        GradientStop {
                            position: 0.0
                            SequentialAnimation on color {
                                loops: Animation.Infinite
                                ColorAnimation { from: "#437284"; to: "#14aaff"; duration: 5000 }
                                ColorAnimation { from: "#14aaff"; to: "#437284"; duration: 5000 }
                            }
                        }
                    }

    Ellipse {
        id: myEllipse
        width: 400
        height: 400
        color: "yellow"
        anchors.centerIn: parent

        Text {
            text: qsTr("Super Ellipse Item!")
            anchors.centerIn: parent
            font.pixelSize: 25
        }

        MouseArea {
            anchors.fill: myEllipse
            onClicked: {
                //Qt.quit();
                myEllipse.color = "green";
            }

        }
    }
}
