#include "applicationmanager.h"
#include "ui_applicationmanager.h"

ApplicationManager::ApplicationManager(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ApplicationManager)
{
    ui->setupUi(this);
}

ApplicationManager::~ApplicationManager()
{
    delete ui;
}

