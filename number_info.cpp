// Number Info
#include <iostream>
#include <cmath>
using namespace std;

int main () {
    long double number;
    cout << "number: ";
    cin >> number;
    cout << "Classification: ";
    if (number - (round(number/1)) != 0)
        cout << "Rational";
    else if (number < 0)
        cout << "Rational, Integer";
    else if (number == 0)
        cout << "Rational, Integer, Whole";
    else if (number > 0)
        cout << "Rational, Integer, Whole, Counting";
    cout << endl << "Sign: ";
    if (number < 0)
        cout << "Negative";
    else if (number == 0)
        cout << "Zero";
    else if (number > 0)
        cout << "Positive";
    if (number - (round(number/1)) == 0) {
        cout << endl << "Parity: ";
        if (number - round(number/2) == number/2)
            cout << "Even";
        else if (number - round(number/2) != number/2)
            cout << "Odd";
    }
}