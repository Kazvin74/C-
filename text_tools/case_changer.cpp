// Case Changer
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

int main() {

    srand(time(NULL));

    string convert_to, text;
    int length, alpha_char_counter = 0;
    bool is_uppercase;

    cout << "U = Uppercase" << endl;
    cout << "L = Lowercase" << endl;
    cout << "AL = Alternate case (lowercase first)" << endl;
    cout << "AU = Alternate case (uppercase first)" << endl;
    cout << "T = Toggle case" << endl;
    cout << "R = Random case" << endl;
    cout << "C = Capitalize each word" << endl;
    cout << "S = Sentence case" << endl << endl;

    cout << "Change case to: ";
    cin >> convert_to;

    while (!(convert_to == "U" || convert_to == "L" || convert_to == "AL" || convert_to == "AU" ||
            convert_to == "T" || convert_to == "R" || convert_to == "C" || convert_to == "S")) {
        cout << "\033[31mInvalid input, please try again\033[0m" << endl << endl;
        cout << "Change case to: ";
        cin >> convert_to;
    }

    cin.ignore();
    cout << endl << "Text: " << endl;
    getline(cin, text);

    length = text.length();

    cout << endl;

    if (convert_to == "U") {
        for (int counter = 0; counter < length; counter++)
            text[counter] = toupper(text[counter]);
        cout << "Uppercase";
    }


    else if (convert_to == "L") {
        for (int counter = 0; counter < length; counter++)
            text[counter] = tolower(text[counter]);
        cout << "Lowercase";
    }

    else if (convert_to == "AL") {
        for (int counter = 0; counter < length; counter++) {
            if (alpha_char_counter % 2 == 0 && isalpha(text[counter])) {
                text[counter] = tolower(text[counter]);
                alpha_char_counter++;
            }
            else if (alpha_char_counter % 2 == 1 && isalpha(text[counter])) {
                text[counter] = toupper(text[counter]);
                alpha_char_counter++;
            }
        }
        cout << "Alternate case (lowercase first)";
    }

    else if (convert_to == "AU") {
        for (int counter = 0; counter < length; counter++) {
            if (alpha_char_counter % 2 == 0 && isalpha(text[counter])) {
                text[counter] = toupper(text[counter]);
                alpha_char_counter++;
            }
            else if (alpha_char_counter % 2 == 1 && isalpha(text[counter])) {
                text[counter] = tolower(text[counter]);
                alpha_char_counter++;
            }
        }
        cout << "Alternate case (uppercase first)";
    }

    else if (convert_to == "T") {
        for (int counter = 0; counter < length; counter++) {
            if (text[counter] == tolower(text[counter]))
                text[counter] = toupper(text[counter]);
            else
                text[counter] = tolower(text[counter]);
        }
        cout << "Toggle case";
    }

    else if (convert_to == "R") {
        for (int counter = 0; counter < length; counter++) {
            is_uppercase = rand() % 2;
            if (is_uppercase)
                text[counter] = toupper(text[counter]);
            else
                text[counter] = tolower(text[counter]);
        }
        cout << "Random case";
    }

    else if (convert_to == "C") {
        for (int counter = 0; counter < length; counter++) {
            if (counter == 0 || !isalpha(text[counter - 1]))
                text[counter] = toupper(text[counter]);
            else
                text[counter] = tolower(text[counter]);
        }
        cout << "Capitalized each word ";
    }

    else if (convert_to == "S") {
        for (int counter = 0; counter < length; counter++) {
            if (counter == 0 || text[counter] == '.')
                is_uppercase = true;
            if (is_uppercase && isalpha(text[counter])) {
                text[counter] = toupper(text[counter]);
                is_uppercase = false;
            }
            else
                text[counter] = tolower(text[counter]);
        }
        cout << "Sentence case";
    }

    cout << " text:" << endl << text;

    return 0;

}