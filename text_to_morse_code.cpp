/*
Text to Morse Code

Reference:
Morse Codes: https://morsedecoder.com
*/

#include <iostream>
using namespace std;

int main () {
    string text;
    cout << "Normal Text: " << endl;
    getline (cin, text);
    int length = text.size();
    cout << endl << "Morse Code: " << endl;
    for (int counter = 0; counter < length; counter++) {
        char character = text[counter];
        if (character == 'A' || character == 'a') cout << ".- ";
        else if (character == 'B' || character == 'b') cout << "-... ";
        else if (character == 'C' || character == 'c') cout << "-.-. ";
        else if (character == 'D' || character == 'd') cout << "-.. ";
        else if (character == 'E' || character == 'e') cout << ". ";
        else if (character == 'F' || character == 'f') cout << "..-. ";
        else if (character == 'G' || character == 'g') cout << "--. ";
        else if (character == 'H' || character == 'h') cout << ".... ";
        else if (character == 'I' || character == 'i') cout << ".. ";
        else if (character == 'J' || character == 'j') cout << ".--- ";
        else if (character == 'K' || character == 'k') cout << "-.- ";
        else if (character == 'L' || character == 'l') cout << ".-.. ";
        else if (character == 'M' || character == 'm') cout << "-- ";
        else if (character == 'N' || character == 'n') cout << "-. ";
        else if (character == 'O' || character == 'o') cout << "--- ";
        else if (character == 'P' || character == 'p') cout << ".--. ";
        else if (character == 'Q' || character == 'q') cout << "--.- ";
        else if (character == 'R' || character == 'r') cout << ".-. ";
        else if (character == 'S' || character == 's') cout << "... ";
        else if (character == 'T' || character == 't') cout << "- ";
        else if (character == 'U' || character == 'u') cout << "..- ";
        else if (character == 'V' || character == 'v') cout << "...- ";
        else if (character == 'W' || character == 'w') cout << ".-- ";
        else if (character == 'X' || character == 'x') cout << "-..- ";
        else if (character == 'Y' || character == 'y') cout << "-.-- ";
        else if (character == 'Z' || character == 'z') cout << "--.. ";
        else if (character == '0') cout << "----- ";
        else if (character == '1') cout << ".---- ";
        else if (character == '2') cout << "..--- ";
        else if (character == '3') cout << "...-- ";
        else if (character == '4') cout << "....- ";
        else if (character == '5') cout << "..... ";
        else if (character == '6') cout << "-.... ";
        else if (character == '7') cout << "--... ";
        else if (character == '8') cout << "---.. ";
        else if (character == '9') cout << "----. ";
        else if (character == '.') cout << ".-.-.- ";
        else if (character == ',') cout << "--..-- ";
        else if (character == '?') cout << "..--.. ";
        else if (character == 39) cout << ".----. ";
        else if (character == '!') cout << "-.-.-- ";
        else if (character == '/') cout << "-..-. ";
        else if (character == '(') cout << "-.--. ";
        else if (character == ')') cout << "-.--.- ";
        else if (character == '&') cout << ".-... ";
        else if (character == ':') cout << "---... ";
        else if (character == ';') cout << "-.-.-. ";
        else if (character == '=') cout << "-...- ";
        else if (character == '+') cout << ".-.-. ";
        else if (character == '-') cout << "-....- ";
        else if (character == '_') cout << "..--.- ";
        else if (character == '"') cout << ".-..-. ";
        else if (character == '$') cout << "...-..- ";
        else if (character == '@') cout << ".--.-. ";
        else if (character == ' ') cout << "/ ";
        else cout << "# ";
    }
}