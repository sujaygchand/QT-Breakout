#ifndef APPLICATIONMANAGER_H
#define APPLICATIONMANAGER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ApplicationManager; }
QT_END_NAMESPACE

class ApplicationManager : public QMainWindow
{
    Q_OBJECT

public:
    ApplicationManager(QWidget *parent = nullptr);
    ~ApplicationManager();

private:
    Ui::ApplicationManager *ui;
};
#endif // APPLICATIONMANAGER_H
