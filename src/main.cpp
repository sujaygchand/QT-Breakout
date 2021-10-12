#include "applicationmanager.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ApplicationManager window;
    window.show();
    return a.exec();
}
