// String Info

#include <iostream>
#include <string>
using namespace std;

int main() {

    string text;
    int length, ascii_value, uppercase_letters = 0, lowercase_letters = 0, numbers = 0, symbols = 0;

    cout << "Text: " << endl;
    getline(cin, text);

    length = text.length();

    for (int counter = 0; counter < length; counter++) {
        ascii_value = text[counter];
        if (ascii_value >= 48 && ascii_value <= 57)
            numbers++;
        else if (ascii_value >= 65 && ascii_value <= 90)
            uppercase_letters++;
        else if (ascii_value >= 97 && ascii_value <= 122)
            lowercase_letters++;
        else
            symbols++;
    }

    cout << endl << "Length: " << length << endl << endl << "Characters: " << endl;
    cout << "Uppercase letters: " << uppercase_letters << endl;
    cout << "Lowercase letters: " << lowercase_letters << endl;
    cout << "Numbers: " << numbers << endl;
    cout << "Symbols: " << symbols;

    return 0;

}