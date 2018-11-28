#include "Hello.h"

#include <QApplication>

int main(int argc, char *argv[])
{    
    QApplication app(argc, argv);

    Hello h;
    h.show();

    return app.exec();
}