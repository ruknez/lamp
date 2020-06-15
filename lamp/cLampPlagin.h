#pragma once

#include <QHostAddress>
#include <QObject>
#include <QPointer>
#include <QString>

#include "cCommandPars.h"
#include "iCommandGen.h"
#include "mainwindow.h"

class cLampPlagin : public QObject
{
    Q_OBJECT
public:
    cLampPlagin( const QHostAddress & address, qint32 port );

private:
    QHostAddress address_;
    quint32 port_;

    QPointer< iCommandGen > commandGen_ = nullptr;
    QPointer< cCommandPars > parser_ = nullptr;
    QPointer< iLampImplementation > lampImplementation_ = nullptr;
};
