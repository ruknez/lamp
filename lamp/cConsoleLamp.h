#pragma once

#include "iLampImplementation.h"

class cConsoleLamp final : public iLampImplementation
{
    Q_OBJECT
public:
    cConsoleLamp();
    virtual ~cConsoleLamp();
public slots:
    virtual void OnLamp() override;
    virtual void OffLamp() override;
    virtual void ColorLamp( const QColor & collor ) override;
};
