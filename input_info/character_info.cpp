// Character Info

#include <iostream>
using namespace std;

int main() {

    char character;

    cout << "Enter a character: ";
    cin >> character;

    int ascii_value = character;
    cout << endl << "ASCII Value: " << ascii_value << endl << "Classification: ";

    if (ascii_value >= 48 && ascii_value <= 57)
        cout << "Number";
    else if (ascii_value >= 65 && ascii_value <= 90)
        cout << "Uppercase letter";
    else if (ascii_value >= 97 && ascii_value <= 122)
        cout << "Lowercase letter";
    else
        cout << "Symbol";

    return 0;

}