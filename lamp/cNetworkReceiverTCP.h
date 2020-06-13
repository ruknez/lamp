#pragma once

#include "iCommandGen.h"
#include <QHostAddress>
#include <QTcpSocket>

class cNetworkReceiverTCP final : public iCommandGen
{
    Q_OBJECT
public:
    cNetworkReceiverTCP( QHostAddress address_, quint32 port_ );

    virtual ~cNetworkReceiverTCP() override;
signals:
    virtual void commandReceived( const QByteArray & command ) override;

private slots:
    void onReadyRead();

private:
    QTcpSocket socket_;
};
