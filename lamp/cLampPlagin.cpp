#include "cLampPlagin.h"
#include "cConsoleLamp.h"
#include "cNetworkReceiverTCP.h"

cLampPlagin::cLampPlagin( const QHostAddress & address, qint32 port )
    : address_( address )
    , port_( port )
{
    commandGen_ = new cNetworkReceiverTCP( address_, port_ );
    parser_ = new cCommandPars();
    lampImplementation_ = new cConsoleLamp();


    connect( commandGen_, &iCommandGen::commandReceived, parser_, &cCommandPars::getCommand );

    connect( parser_, &cCommandPars::lampOn, lampImplementation_, &iLampImplementation::OnLamp );
    connect( parser_, &cCommandPars::lampOFF, lampImplementation_, &iLampImplementation::OffLamp );
    connect( parser_, &cCommandPars::lampColor, lampImplementation_, &iLampImplementation::ColorLamp );
}
