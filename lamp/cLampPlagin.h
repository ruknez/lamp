#pragma once

#include <QHostAddress>
#include <QString>

class cLampPlagin
{
public:
    cLampPlagin();
    cLampPlagin( const QString & data );

private:
    quint32 port_;
    QHostAddress address_;
};
