#ifndef IMDBParser_H
#define IMDBParser_H

#include "JSonFilmParser.h"

class IMDBParser : public JSonFilmParser
{
public:
    IMDBParser();
    QString readImage(QString value);
};

#endif // IMDBParser_H
