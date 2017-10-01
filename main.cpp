#include <QApplication>
#include <QDesktopWidget>
#include "main_window.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    w.setMinimumSize(700, 500);
    w.move((QApplication::desktop()->width() - w.width()) / 2,
             (QApplication::desktop()->height() - w.height()) / 2);

    return a.exec();
}
