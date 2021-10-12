#include "applicationmanager.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ApplicationManager window;

    window.resize(450,600);
    window.setWindowTitle("Breakout");
    window.show();

    return a.exec();
}
