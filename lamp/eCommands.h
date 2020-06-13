#pragma once

#include <QByteArray>

/*
enum class eCommands
{
    ON = 0x12,
    OFF = 0x13,
    COLOR = 0x20
};
*/

namespace cmpConst {
const quint16 ON = 0x1200;
const quint16 OFF = 0x1300;
const quint8 COLOR = 0x20;

} // namespace cmpConst

// static_assert( static_cast< int >( eCommands::END ) == 3, "" );
