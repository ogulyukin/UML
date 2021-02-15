//
// Created by oleg on 14.02.2021.
//

#ifndef UML_TEXTREADER_H
#define UML_TEXTREADER_H
#include "Text.h"

class TextReader {
public:
    TextReader();
    virtual Text read_text() const =0;
};


#endif //UML_TEXTREADER_H
