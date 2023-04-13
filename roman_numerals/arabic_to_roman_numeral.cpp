// Arabic to Roman Numeral

#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Arabic Numeral: ";
    cin >> num;
    cout << "Roman Numeral: ";

    while (num >= 1000) {
        cout << "M";
        num -= 1000;
    }

    if (num >= 900 && num <= 999) {
        cout << "CM";
        num -= 900;
    }

    while (num >= 500) {
        cout << "D";
        num -= 500;
    }

    if (num >= 400 && num <= 499) {
        cout << "CD";
        num -= 400;
    }

    while (num >= 100) {
        cout << "C";
        num -= 100;
    }

    if (num >= 90 && num <= 99) {
        cout << "XC";
        num -= 90;
    }

    while (num >= 50) {
        cout << "L";
        num -= 50;
    }

    if (num >= 40 && num <= 49) {
        cout << "XL";
        num -= 40;
    }

    while (num >= 10) {
        cout << "X";
        num -= 10;
    }

    if (num == 9) {
        cout << "IX";
        num -= 9;
    }

    while (num >= 5) {
        cout << "V";
        num -= 5;
    }

    if (num == 4) {
        cout << "IV";
        num -= 4;
    }

    while (num >= 1) {
        cout << "I";
        num -= 1;
    }

    return 0;

}