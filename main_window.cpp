#include "main_window.h"

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent)
{
    mainWidget = new QWidget;
    mainLayout = new QHBoxLayout;
    leftLayout = new QVBoxLayout;
    rightLayout = new QVBoxLayout;

    mainLayout->addLayout(leftLayout);
    mainLayout->addLayout(rightLayout);
    
    mainWidget->setLayout(mainLayout);
    setCentralWidget(mainWidget);
}
