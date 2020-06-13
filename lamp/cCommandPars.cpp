#include "cCommadPars.h"
#include "eCommands.h"

//===============================================================================
cCommandPars::cCommandPars()
{
}

//===============================================================================
cCommandPars::~cCommandPars()
{
}

//===============================================================================
void cCommandPars::getCommand( const QByteArray & command )
{
    if ( command.length() < 2 )
        return;

    if ( ( command.length() == 2 ) && ( 0 == memcmp( command.data(), &cmpConst::ON, sizeof( cmpConst::ON ) ) ) )
    {
        emit lampOn();
    }
    else if ( ( command.length() == 2 ) && ( 0 == memcmp( command.data(), &cmpConst::OFF, sizeof( cmpConst::OFF ) ) ) )
    {
        emit lampOFF();
    }
    else if ( 0 == memcmp( command.data(), &cmpConst::COLOR, sizeof( cmpConst::COLOR ) ) )
    {
        emit lampColor( QRgb() );
    }
}
