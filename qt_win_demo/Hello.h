#include <QMainWindow>
#include <QLabel>
#include <QFileSelector>
#include <QFileDialog>

#include <QQuickWidget>
#include <QQmlFileSelector>
#include <QQmlApplicationEngine>

class Hello : public QMainWindow
{
    Q_OBJECT

public:
    explicit Hello(QWidget *parent = 0);
    ~Hello();

    QQuickWidget * file_label;
    //QLabel * file_label;
    QFileDialog * file_dialog;

    //QQmlEngine * engine;
    //QQmlFileSelector * file_selector;

    //QQmlApplicationEngine * app_engine;
};