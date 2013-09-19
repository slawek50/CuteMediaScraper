import QtQuick 2.0

Rectangle {
    width: 360
    height: 360
    Text {
        id: text
        text: qsTr("Hello World")
        anchors.centerIn: parent

    }
    MouseArea {
        anchors.fill: parent
        onClicked: {
            anchor.incValue();
            text.text = anchor.value
        }
    }
}
