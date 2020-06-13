#include "cNetworkReceiverTCP.h"


//===============================================================================
cNetworkReceiverTCP::cNetworkReceiverTCP( QHostAddress address_, quint32 port_ )
    : socket_( this )
{
    socket_.connectToHost( address_, port_ );
    connect( &socket_, SIGNAL( readyRead() ), this, SLOT( onReadyRead() ) );
}

//===============================================================================
void cNetworkReceiverTCP::onReadyRead()
{
    QByteArray datas = socket_.readAll();
    qDebug() << datas;
    commandReceived( datas );
    socket_.write( QByteArray( "ok !\n" ) );
}

cNetworkReceiverTCP::~cNetworkReceiverTCP()
{
}
