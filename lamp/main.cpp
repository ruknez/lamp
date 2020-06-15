#include <QApplication>
#include <QDebug>
#include <QHostAddress>

#include "cLampPlagin.h"
int main( int argc, char * argv[] )
{
    QApplication a( argc, argv );
    //    MainWindow w;
    //    w.show();

    cLampPlagin pl( QHostAddress( "127.0.0.1" ), 9999 );

    qDebug() << "LOLOLO \n";
    return a.exec();
}
