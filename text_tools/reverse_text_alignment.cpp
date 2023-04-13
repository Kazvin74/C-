// Reverse Text Alignment

#include <iostream>
#include <string>
using namespace std;

int main() {

    string text;

    cout << "Normal String: " << endl;
    getline(cin, text);

    int length = text.length();

    cout << endl << "Reversed String: " << endl;

    for (int counter = length - 1; counter >= 0; counter--)
        cout << text[counter];

    return 0;

}