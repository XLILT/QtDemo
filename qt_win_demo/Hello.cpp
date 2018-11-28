#include "Hello.h"
 
Hello::Hello(QWidget *parent)
    : QMainWindow(parent),
    file_label(new QQuickWidget(this)),
    file_dialog(new QFileDialog(this))
    //engine(new QQmlEngine(this)),
    //file_selector(new QQmlFileSelector(engine, this))
    //app_engine(new QQmlApplicationEngine(this))
{
    /*
    file_label->setFrameStyle(QFrame::Panel | QFrame::Sunken);
    file_label->setText("选择文件");
    file_label->setAlignment(Qt::AlignBottom | Qt::AlignRight);
    */

    file_label->setSource(QUrl(QStringLiteral("qrc:/main.qml")));
    file_label->show();

    //file_dialog->exec();

    /*
    app_engine->load(QUrl(QStringLiteral("qrc:/main.qml")));

    if (app_engine->rootObjects().isEmpty())
    {
        file_label->setText("选择文件 empty");
    }
    */
}
 
Hello::~Hello()
{ 
}