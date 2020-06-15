#include "MyTCPServer.h"
#include <QApplication>
#include <QtGui>


int main( int argc, char ** argv )
{
    QApplication app( argc, argv );
    MyServer server( 9999 );

    server.show();

    return app.exec();
}
