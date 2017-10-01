#include "main_window.h"

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent)
{
    mainWidget = new QWidget;
    mainLayout = new QHBoxLayout;
    
    mainWidget->setLayout(mainLayout);
 
    setCentralWidget(mainWidget);
}
