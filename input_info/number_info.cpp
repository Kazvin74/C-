// Number Info

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    long double num;

    cout << "Number: ";
    cin >> num;

    cout << "Classification: ";
    if (num - (round(num/1)) != 0)
        cout << "Rational Number";
    else if (num < 0)
        cout << "Integer";
    else if (num == 0)
        cout << "Whole Number";
    else if (num > 0)
        cout << "Counting Number";

    cout << endl << "Sign: ";
    if (num < 0)
        cout << "Negative";
    else if (num == 0)
        cout << "Zero";
    else if (num > 0)
        cout << "Positive";

    if (num - (round(num/1)) == 0) {
        cout << endl << "Parity: ";
        if (num - round(num/2) == num/2)
            cout << "Even";
        else if (num - round(num/2) != num/2)
            cout << "Odd";
    }

    return 0;

}
