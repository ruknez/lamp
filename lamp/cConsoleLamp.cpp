#include "cConsoleLamp.h"
#include <QDebug>

cConsoleLamp::cConsoleLamp()
{
}

cConsoleLamp::~cConsoleLamp()
{
}

void cConsoleLamp::OnLamp()
{
    qDebug() << "OnLamp";
}
void cConsoleLamp::OffLamp()
{
    qDebug() << "OffLamp";
}
void cConsoleLamp::ColorLamp( const QColor & collor )
{
    qDebug() << "ColorLamp" << collor;
}
