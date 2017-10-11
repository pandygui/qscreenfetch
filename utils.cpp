#include "utils.h"
#include <QFile>
#include <QSettings>
#include <QDebug>

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

QString Utils::getOsInfo()
{
    /*
    QFile file("/etc/lsb-release");
    file.open(QIODevice::ReadOnly);

    QString buffer = file.readAll();
    QStringList list = buffer.split(QRegExp("\n"));
    QString distribDescription = list.at(2);
    QString distribCodeName = list.at(3);

    QString ff = "\"Deepin 15.4.1 \"";
    
    qDebug() << distribDescription.split("=").at(1).split("\"").at(1);
    */

    QSettings file("/etc/lsb-release", QSettings::IniFormat);

    return file.value("DISTRIB_DESCRIPTION").toString() + file.value("DISTRIB_CODENAME").toString();
}
