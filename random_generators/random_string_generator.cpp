/*
Random String Generator

Configuration: (uppercase)(lowercase)(numbers)(symbols)
Values: 0 (exclude in string), 1 (include in string)

Example: 0110
This means that only lowercase letters and
numbers will be part of the generated string
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    srand(time(NULL));

    long long string_length, num_of_strings, type;
    string config;
    char character;
    bool exit_loop;

    cout << "String Length: ";
    cin >> string_length;
    cout << "Number of Strings: ";
    cin >> num_of_strings;
    cout << "Configuration: ";
    cin >> config;

    while (config[0] != '0' && config[0] != '1' ||
        config[1] != '0' && config[1] != '1' ||
        config[2] != '0' && config[2] != '1' ||
        config[3] != '0' && config[3] != '1' ||
        config == "0000" || config.length() != 4) {
        cout << "\033[31mInvalid input, please try again\033[0m" << endl << endl;
        cout << "Configuration: ";
        cin >> config;
    }

    for (int counter1 = 1; counter1 <= num_of_strings; counter1++) {

        cout << "String " << counter1 << ": ";

        for (int counter2 = 0; counter2 < string_length; counter2++) {

            exit_loop = false;

            while (!exit_loop) {
                type = rand() % 4 + 1;
                if (type == 1 && config[0] == '1' ||
                    type == 2 && config[1] == '1' ||
                    type == 3 && config[2] == '1' ||
                    type == 4 && config[3] == '1')
                    exit_loop = true;
            }

            if (type == 1)
                character = rand() % 26 + 65;
            else if (type == 2)
                character = rand() % 26 + 97;
            else if (type == 3)
                character = rand() % 10 + 48;
            else
                do
                    character = rand() % 94 + 33;
                while ((character >= 48 && character <= 57) ||
                        (character >= 65 && character <= 90) ||
                        (character >= 97 && character <= 122));

            cout << character;

        }

        cout << endl;
    }

    return 0;

}