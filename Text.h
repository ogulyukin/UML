//
// Created by oleg on 14.02.2021.
//
#include <string>
#pragma once
#ifndef UML_TEXT_H
#define UML_TEXT_H
#include "Text.h"
using namespace std;

class Text {
    string* _text;
    unsigned int _lenght;
    unsigned int _count;
public:
    Text();
    Text(const Text &text);
    ~Text();
    unsigned int lenght()const;
    const string& get(unsigned int index);
    void add(const string &str);
};
ostream& operator<<(ostream& os, Text& text);

#endif //UML_TEXT_H
