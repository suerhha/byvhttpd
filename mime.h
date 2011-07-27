#ifndef MIME_H
#define MIME_H

#include "common.h"
#include <QMap>

class Mime
{
public:
    QString getMimeType(QString extension);

    static Mime & instance();

private:
    Mime();
    static Mime * m_instance;

    QMap<QString, QString> mime_types;
};

#endif // MIME_H
