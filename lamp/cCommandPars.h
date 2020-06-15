#pragma once

#include <QColor>
#include <QObject>

class cCommandPars final : public QObject
{
    Q_OBJECT
public:
    cCommandPars();

    virtual ~cCommandPars();
signals:
    void lampOn();
    void lampOFF();
    void lampColor( const QColor & collor );

public slots:
    void getCommand( const QByteArray & command );
};
