import QtQuick 2.0
import QtQuick.Controls 1.0;
import QtQuick.Layouts 1.0;

Rectangle {
    width: 360
    height: 360

    SplitView {

        anchors.fill: parent
        orientation: Qt.Vertical

        SplitView {
            height: parent.height / 4

            Text {
                text: "Path:"
                width: parent.width /4
            }
            TextEdit {
                id: name
            }
        }

        TextField {
            id: query
            height: parent.height / 2
        }

        Button {
            onClicked: {
                query.text = listFilesCtrl.addFile(name.text);
            }
        }
    }
}
