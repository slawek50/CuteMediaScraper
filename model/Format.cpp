#include "Format.h"

Format::Format(QString format):
    _format(format)
{
}


QString Format::getExemple()
{
    return "exemple format: " + _format;
}

QString Format::getFormat()
{
    return _format;
}
