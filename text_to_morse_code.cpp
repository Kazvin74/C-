/*
Text to Morse Code by Kazvin (v202301282335)

Reference:
Morse Codes: https://morsedecoder.com
*/
#include <iostream>
using namespace std;

int main () {
    string Text;
    cout << "Normal text: " << endl;
    getline (cin, Text);
    int Length = Text.size();
    cout << endl << "Morse Code: " << endl;
    for (int Counter = 0; Counter < Length; Counter++) {
        char Character = Text[Counter];
        if (Character == 'A' || Character == 'a') cout << ".- ";
        else if (Character == 'B' || Character == 'b') cout << "-... ";
        else if (Character == 'C' || Character == 'c') cout << "-.-. ";
        else if (Character == 'D' || Character == 'd') cout << "-.. ";
        else if (Character == 'E' || Character == 'e') cout << ". ";
        else if (Character == 'F' || Character == 'f') cout << "..-. ";
        else if (Character == 'G' || Character == 'g') cout << "--. ";
        else if (Character == 'H' || Character == 'h') cout << ".... ";
        else if (Character == 'I' || Character == 'i') cout << ".. ";
        else if (Character == 'J' || Character == 'j') cout << ".--- ";
        else if (Character == 'K' || Character == 'k') cout << "-.- ";
        else if (Character == 'L' || Character == 'l') cout << ".-.. ";
        else if (Character == 'M' || Character == 'm') cout << "-- ";
        else if (Character == 'N' || Character == 'n') cout << "-. ";
        else if (Character == 'O' || Character == 'o') cout << "--- ";
        else if (Character == 'P' || Character == 'p') cout << ".--. ";
        else if (Character == 'Q' || Character == 'q') cout << "--.- ";
        else if (Character == 'R' || Character == 'r') cout << ".-. ";
        else if (Character == 'S' || Character == 's') cout << "... ";
        else if (Character == 'T' || Character == 't') cout << "- ";
        else if (Character == 'U' || Character == 'u') cout << "..- ";
        else if (Character == 'V' || Character == 'v') cout << "...- ";
        else if (Character == 'W' || Character == 'w') cout << ".-- ";
        else if (Character == 'X' || Character == 'x') cout << "-..- ";
        else if (Character == 'Y' || Character == 'y') cout << "-.-- ";
        else if (Character == 'Z' || Character == 'z') cout << "--.. ";
        else if (Character == '0') cout << "----- ";
        else if (Character == '1') cout << ".---- ";
        else if (Character == '2') cout << "..--- ";
        else if (Character == '3') cout << "...-- ";
        else if (Character == '4') cout << "....- ";
        else if (Character == '5') cout << "..... ";
        else if (Character == '6') cout << "-.... ";
        else if (Character == '7') cout << "--... ";
        else if (Character == '8') cout << "---.. ";
        else if (Character == '9') cout << "----. ";
        else if (Character == '.') cout << ".-.-.- ";
        else if (Character == ',') cout << "--..-- ";
        else if (Character == '?') cout << "..--.. ";
        else if (Character == 39) cout << ".----. ";
        else if (Character == '!') cout << "-.-.-- ";
        else if (Character == '/') cout << "-..-. ";
        else if (Character == '(') cout << "-.--. ";
        else if (Character == ')') cout << "-.--.- ";
        else if (Character == '&') cout << ".-... ";
        else if (Character == ':') cout << "---... ";
        else if (Character == ';') cout << "-.-.-. ";
        else if (Character == '=') cout << "-...- ";
        else if (Character == '+') cout << ".-.-. ";
        else if (Character == '-') cout << "-....- ";
        else if (Character == '_') cout << "..--.- ";
        else if (Character == '"') cout << ".-..-. ";
        else if (Character == '$') cout << "...-..- ";
        else if (Character == '@') cout << ".--.-. ";
        else if (Character == ' ') cout << "/ ";
        else cout << "# ";
    }
}