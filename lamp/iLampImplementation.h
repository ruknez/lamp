#pragma once

#include <QColor>
#include <QObject>

class iLampImplementation : public QObject
{
    Q_OBJECT
    // public:
    //    virtual ~iLampImplementation() = 0;
public slots:
    virtual void OnLamp() = 0;
    virtual void OffLamp() = 0;
    virtual void ColorLamp( const QColor & collor ) = 0;
};
