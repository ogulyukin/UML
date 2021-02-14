#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
int main() {
    setlocale(LC_ALL, "");
    ifstream stream;
    char document[256];
    string str;
    int leight = 1;
    string* text = new string[leight];
    stream.open("input.txt");
    (stream.is_open()) ? cout << "файл открыт\n" : cout << "файл не открыт\n";
    int count = 0;
    while(!stream.eof()){
        getline(stream, str);
        if (count >= leight){
            leight *= 2;
            string* mas = new string[leight];
            for(int i = 0; i < count; i++){
                mas[i] = text[i];
            }
            mas[count] = str;
            count++;
            delete[] text;
            text = mas;
        }
        else{
            text[count] = str;
            count++;
        }
    }
    stream.close();
    for (int i = 0; i <= count; i++){
        cout << text[i] << endl;
    }
    delete [] text;
    return 0;
}
