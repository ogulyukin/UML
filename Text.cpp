//
// Created by oleg on 14.02.2021.
//
#include <iostream>
#include "Text.h"

using namespace std;

Text::Text(): _count(0), _lenght(1){
    _text = new string[_lenght];
}
Text::Text(const Text &text){
    _text = new string[text._lenght];
    for(int i = 0; i <text._lenght; i++){
        _text[i] = text._text[i];
    }
}
Text::~Text(){
    delete [] _text;
}
unsigned int Text::lenght()const{
    return _lenght;
}
const string& Text::get(unsigned int index){
    return _text[index];
}
void Text::add(const string &str){
    if (_count >= _lenght){
        _lenght *= 2;
        string* mas = new string[_lenght];
        for(int i = 0; i < _count; i++){
            mas[i] = _text[i];
        }
        mas[_count] = str;
        _count++;
        delete[] _text;
        _text = mas;
    }
    else{
        _text[_count] = str;
        _count++;
    }
}
ostream& operator<<(ostream& os, Text& text){
    for (int i = 0; i <= text.lenght(); i++){
        os << text.get(i) << endl;
    }
    return os;
}