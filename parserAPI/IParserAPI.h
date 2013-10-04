#ifndef IParserAPI_H
#define IParserAPI_H

#include <QString>
#include "../model/IRessource.h"

class IParserAPI
{
public:
    virtual QList<IRessource *> searchAll(QString title) = 0;
};

#endif // IParserAPI_H
