#include "src/sample.h"
#include "src/mainwindow.h"

int main(int argc, char *argv[])
{
    Sample app(argc, argv);

    MainWindow mainWin;
    mainWin.show();

    return app.exec();
}
