//
// Created by oleg on 14.02.2021.
//
#include "FileNextReader.h"
#include <fstream>
Text FileNextReader::read_text()const{
    ifstream stream;
    stream.open(_filename);
    if (!stream.is_open()){
        throw "Can't open file!";
    }
    Text text;
    string str;
    while(!stream.eof()){
        getline(stream, str);
        text.add(str);
    }
    stream.close();
    return text;
}
FileNextReader::FileNextReader(const string& filename): _filename(filename){

}