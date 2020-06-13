#pragma once

#include <QObject>

class iCommandGen : public QObject
{
    Q_OBJECT
public:
signals:
    virtual void commandReceived( const QByteArray & command ) = 0;
};
