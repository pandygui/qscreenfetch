#include "utils.h"
#include <QFile>

Utils::Utils()
{

}

QString Utils::getQssContent(const QString &path)
{
    QFile file(path);
    
    file.open(QIODevice::ReadOnly);
    QString qss = file.readAll();
    file.close();
    
    return qss;
}
