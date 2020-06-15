#pragma once

#include <QObject>
#include <QRgb>

class cCommandPars final : public QObject
{
    Q_OBJECT
public:
    cCommandPars();

    ~cCommandPars();
signals:
    void lampOn();
    void lampOFF();
    void lampColor( const QRgb & collor );

public slots:
    void getCommand( const QByteArray & command );
};
