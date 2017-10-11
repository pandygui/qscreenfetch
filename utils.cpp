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

QString Utils::getUserName()
{
    QString name = qgetenv("USER");

    if (name.isEmpty())
        name = qgetenv("USERNAME");

    return name;
}
