#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>
#include <QLabel>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);

private:
    QWidget *mainWidget;
    QHBoxLayout *mainLayout;
    QVBoxLayout *leftLayout;
    QVBoxLayout *rightLayout;

    QLabel *userLabel;
    QLabel *osLabel;
    QLabel *kernelLabel;
    QLabel *uptimeLabel;
    QLabel *packagesLabel;
    QLabel *shellLabel;
    QLabel *resolutionLabel;
    QLabel *wmLabel;
    QLabel *wmThemeLabel;
    QLabel *gtkThemeLabel;
    QLabel *iconThemeLabel;
    QLabel *cpuLabel;
    QLabel *ramLabel;

    void loadData();
};

#endif
