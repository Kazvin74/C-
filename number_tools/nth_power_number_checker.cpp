// Nth Power Number Checker

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    long long num, power;
    long double root;

    cout << "Number: ";
    cin >> num;

    cout << "Power: ";
    cin >> power;

    while (power < 2) {
        cout << "\033[31mInvalid input, power should be greater than or equal to 2\033[0m" << endl << endl;
        cout << "Power: ";
        cin >> power;
    }

    root = pow(num, 1.0/power);

    if (root == floor(root))
        cout << endl << "The number is a ";
    else
        cout << endl << "The number is not a ";

    if (power == 2)
        cout << "square number";

    else if (power == 3)
        cout << "cube number";

    else {

        cout << power;

        if ((power % 100 >= 11 && power % 100 <= 13) || power % 10 >= 4 || power % 10 == 0)
            cout << "th";
        else if (power % 10 == 1)
            cout << "st";
        else if (power % 10 == 2)
            cout << "nd";
        else if (power % 10 == 3)
            cout << "rd";

        cout << " power number";

    }

    return 0;

}