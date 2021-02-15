#include <iostream>
#include "Text.h"
#include "FileNextReader.h"
#include "TextReader.h"
#include "ConsoleReader.h"
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    FileNextReader textreader("input.txt");
    Text text = textreader.read_text();
    cout << text << endl;
    return 0;
}
