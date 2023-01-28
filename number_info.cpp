// Number Info by Kazvin (v202301282335)
#include <iostream>
#include <cmath>
using namespace std;

int main () {
    long double Number;
    cout << "Number: ";
    cin >> Number;
    cout << "Classification: ";
    if (Number - (round(Number/1)) != 0)
        cout << "Rational";
    else if (Number < 0)
        cout << "Rational, Integer";
    else if (Number == 0)
        cout << "Rational, Integer, Whole";
    else if (Number > 0)
        cout << "Rational, Integer, Whole, Counting";
    cout << endl << "Sign: ";
    if (Number < 0)
        cout << "Negative";
    else if (Number == 0)
        cout << "Zero";
    else if (Number > 0)
        cout << "Positive";
    if (Number - (round(Number/1)) == 0) {
        cout << endl << "Parity: ";
        if (Number - round(Number/2) == Number/2)
            cout << "Even";
        else if (Number - round(Number/2) != Number/2)
            cout << "Odd";
    }
}