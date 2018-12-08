import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Dialogs 1.3
import QtQuick.Controls 1.4

Window {
    visible: true
    width: 340
    height: 180
    title: qsTr("第一个应用")

    Button {
        id: btn
        text: "加载文件"
        anchors.right: parent.right
        anchors.rightMargin: 5
        anchors.topMargin: 5
        onClicked: {
            fileDialog.open()
        } 
    }

    Text {
        id: fileName
        visible: false
        anchors.top : btn.bottom
    }

    FileDialog {
        id: fileDialog
        title: "请选择文件"        
        folder: shortcuts.desktop
        nameFilters: [ "表格(*.xlsx)"]
        onAccepted: {            
            fileName.text = "你选中了文件：" + getFileNameFromUrl(fileDialog.fileUrl.toString())
            fileName.visible = true
        }
    }

    function getFileNameFromUrl(url) {
        var len = url.length
        var idx = url.lastIndexOf('/', len)

        if(idx < 0) {
            return ""
        }

        return url.substring(idx + 1, len)
    }
}
