#include "cNetworkReceiverTCP.h"


//===============================================================================
cNetworkReceiverTCP::cNetworkReceiverTCP( QHostAddress address_, quint32 port_ )
    : socket_( this )
{
    qDebug() << "port = " << port_;
    socket_.connectToHost( address_, port_ );
    connect( &socket_, SIGNAL( readyRead() ), this, SLOT( onReadyRead() ) );
}

//===============================================================================
void cNetworkReceiverTCP::onReadyRead()
{
    QByteArray datas = socket_.readAll();
    qDebug() << "onReadyRead = " << datas;
    commandReceived( datas );
    socket_.write( QByteArray( "ok !\n" ) );
}

cNetworkReceiverTCP::~cNetworkReceiverTCP()
{
}
