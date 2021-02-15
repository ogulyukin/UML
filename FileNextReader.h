//
// Created by oleg on 14.02.2021.
//

#ifndef UML_FILENEXTREADER_H
#define UML_FILENEXTREADER_H
#include "Text.h"
#include "TextReader.h"

class FileNextReader: public TextReader {
    string _filename;
public:
    Text read_text()const override;
    FileNextReader(const string &filename);

};


#endif //UML_FILENEXTREADER_H
