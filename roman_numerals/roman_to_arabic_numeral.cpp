// Roman to Arabic Numeral

#include <iostream>
#include <string>
using namespace std;

int main() {

    string roman_numeral;

    cout << "Roman Numeral: ";
    cin >> roman_numeral;

    int length = roman_numeral.length(), arabic_numeral = 0,
    numbers[length], previous_value = 2000, current_value;

    for (long long counter = 0; counter < length; counter++) {
        if (roman_numeral[counter] == 'M')
            numbers[counter] = 1000;
        else if (roman_numeral[counter] == 'D')
            numbers[counter] = 500;
        else if (roman_numeral[counter] == 'C')
            numbers[counter] = 100;
        else if (roman_numeral[counter] == 'L')
            numbers[counter] = 50;
        else if (roman_numeral[counter] == 'X')
            numbers[counter] = 10;
        else if (roman_numeral[counter] == 'V')
            numbers[counter] = 5;
        else if (roman_numeral[counter] == 'I')
            numbers[counter] = 1;
        else {
            cout << "\033[31mInvalid roman numeral\033[0m";
            return 0;
        }
    }

    for (long long counter = 0; counter < length; counter++) {

        current_value = numbers[counter];

        if (current_value <= previous_value)
            arabic_numeral += current_value;
        else {
            arabic_numeral -= previous_value * 2;
            arabic_numeral += current_value;
        }

        previous_value = current_value;

    }

    cout << "Arabic Numeral: " << arabic_numeral;

    return 0;

}