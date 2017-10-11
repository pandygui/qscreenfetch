#ifndef UTILS_H
#define UTILS_H

#include <QObject>

class Utils : public QObject
{
    Q_OBJECT
    
public:
    Utils();
    
    static QString getQssContent(const QString &path);
    static QString getUserName();
};

#endif
