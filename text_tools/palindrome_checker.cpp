// Palindrome Checker

#include <iostream>
#include <string>
using namespace std;

int main() {

    string text;

    cout << "Text: " << endl;
    getline(cin, text);

    int length = text.length();
    bool is_palindrome = true;

    for (long long counter = 0; counter < length / 2; counter++)
        if (text[counter] != text[length - counter - 1]) {
            is_palindrome = false;
            break;
        }

    cout << endl;

    if (is_palindrome)
        cout << "The text is a palindrome";
    else
        cout << "The text is not a palindrome";

    return 0;

}