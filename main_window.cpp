#include "main_window.h"
#include "utils.h"

MainWindow::MainWindow(QWidget *parent)
        : QMainWindow(parent)
{
    mainWidget = new QWidget;
    mainLayout = new QHBoxLayout;
    leftLayout = new QVBoxLayout;
    rightLayout = new QVBoxLayout;

    userLabel = new QLabel("rekols@DESKTOP-FNY6J44");
    osLabel = new QLabel("OS: Deepin 15.4.1 unstable");
    kernelLabel = new QLabel("Kernel: x86_64 Linux 4.9.0-deepin12-amd64");
    uptimeLabel = new QLabel("Uptime: 23h 54m");
    packagesLabel = new QLabel("Packages: 17722");
    shellLabel = new QLabel("Shell: bash 4.4.11");
    resolutionLabel = new QLabel("Resolution: 1920×1080");
    wmLabel = new QLabel("WM: Mutter(DeepinGala)");
    wmThemeLabel = new QLabel("WM Theme: Adwaita");
    gtkThemeLabel = new QLabel("GTK Theme: Deepin [GTK2/3]");
    iconThemeLabel = new QLabel("Icon Theme: deepin");
    cpuLabel = new QLabel("CPU: Intel Core i5-6200U CPU @ 2.1GHz");
    ramLabel = new QLabel("RAM: 1832MiB / 7883MiB");

    rightLayout->addWidget(userLabel);
    rightLayout->addWidget(osLabel);
    rightLayout->addWidget(kernelLabel);
    rightLayout->addWidget(uptimeLabel);
    rightLayout->addWidget(packagesLabel);
    rightLayout->addWidget(shellLabel);
    rightLayout->addWidget(resolutionLabel);
    rightLayout->addWidget(wmLabel);
    rightLayout->addWidget(wmThemeLabel);
    rightLayout->addWidget(gtkThemeLabel);
    rightLayout->addWidget(iconThemeLabel);
    rightLayout->addWidget(cpuLabel);
    rightLayout->addWidget(ramLabel);

    mainLayout->addLayout(leftLayout);
    mainLayout->addLayout(rightLayout);
    
    mainWidget->setLayout(mainLayout);
    setCentralWidget(mainWidget);

    loadData();
}

void MainWindow::loadData()
{
    userLabel->setText(Utils::getUserName());
    osLabel->setText(Utils::getOsInfo());
}
