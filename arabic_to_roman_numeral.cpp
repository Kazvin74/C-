// Arabic to Roman Numeral
#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    cout << "Arabic Numeral: ";
    cin >> number;
    string str_number = to_string(number), RomanNumeral;
    int number_length = str_number.length();
    int ones_index = number_length - 1, tens_index = number_length - 2, hundreds_index = number_length - 3;
    if (str_number[ones_index] == '1')
        RomanNumeral = "I";
    else if (str_number[ones_index] == '2')
        RomanNumeral = "II";
    else if (str_number[ones_index] == '3')
        RomanNumeral = "III";
    else if (str_number[ones_index] == '4')
        RomanNumeral = "IV";
    else if (str_number[ones_index] == '5')
        RomanNumeral = "V";
    else if (str_number[ones_index] == '6')
        RomanNumeral = "VI";
    else if (str_number[ones_index] == '7')
        RomanNumeral = "VII";
    else if (str_number[ones_index] == '8')
        RomanNumeral = "VIII";
    else if (str_number[ones_index] == '9')
        RomanNumeral = "IX";
    if (str_number[tens_index] == '1')
        RomanNumeral = "X" + RomanNumeral;
    else if (str_number[tens_index] == '2')
        RomanNumeral = "XX" + RomanNumeral;
    else if (str_number[tens_index] == '3')
        RomanNumeral = "XXX" + RomanNumeral;
    else if (str_number[tens_index] == '4')
        RomanNumeral = "XL" + RomanNumeral;
    else if (str_number[tens_index] == '5')
        RomanNumeral = "L" + RomanNumeral;
    else if (str_number[tens_index] == '6')
        RomanNumeral = "LX" + RomanNumeral;
    else if (str_number[tens_index] == '7')
        RomanNumeral = "LXX" + RomanNumeral;
    else if (str_number[tens_index] == '8')
        RomanNumeral = "LXXX" + RomanNumeral;
    else if (str_number[tens_index] == '9')
        RomanNumeral = "XC" + RomanNumeral;
    if (str_number[hundreds_index] == '1')
        RomanNumeral = "C" + RomanNumeral;
    else if (str_number[hundreds_index] == '2')
        RomanNumeral = "CC" + RomanNumeral;
    else if (str_number[hundreds_index] == '3')
        RomanNumeral = "CCC" + RomanNumeral;
    else if (str_number[hundreds_index] == '4')
        RomanNumeral = "CD" + RomanNumeral;
    else if (str_number[hundreds_index] == '5')
        RomanNumeral = "D" + RomanNumeral;
    else if (str_number[hundreds_index] == '6')
        RomanNumeral = "DC" + RomanNumeral;
    else if (str_number[hundreds_index] == '7')
        RomanNumeral = "DCC" + RomanNumeral;
    else if (str_number[hundreds_index] == '8')
        RomanNumeral = "DCCC" + RomanNumeral;
    else if (str_number[hundreds_index] == '9')
        RomanNumeral = "CM" + RomanNumeral;
    cout << "Roman Numeral: ";
    if (number_length >= 4) {
        int Thousands = stoi(str_number.substr(0, hundreds_index));
        for (int Counter = 1; Counter <= Thousands; Counter++) {
            cout << "M";
        }
    }
    cout << RomanNumeral;
}