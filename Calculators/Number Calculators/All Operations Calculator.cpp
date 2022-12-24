/*
All Operations Calculator
Created by Kazvin

Note:
If any of the answers is more than 6 digits (like 1000000),
the answer would not be accurate. Please take note that it's not a bug.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int OperationNumber = 1;
    double FirstNumber;
    double SecondNumber;

    for (;;) {
        cout << "Operation #" << OperationNumber << endl;
        cout << "First Number: ";
        cin >> FirstNumber;
        cout << "Second Number: ";
        cin >> SecondNumber;

        double Sum = FirstNumber + SecondNumber;
        if (Sum >= 1e07 || Sum <= 1e-07)
            cout << "Sum: " << fixed << setprecision(0) << Sum << endl;
        else
            cout << "Sum: " << Sum << endl;

        double Difference = FirstNumber - SecondNumber;
        if (Difference >= 1e07 || Difference <= 1e-07)
            cout << "Difference: " << fixed << setprecision(0) << Difference << endl;
        else
            cout << "Difference: " << Difference << endl;

        double Product = FirstNumber * SecondNumber;
        if (Product >= 1e07 || Product <= 1e-07)
            cout << "Product: " << fixed << setprecision(0) << Product << endl;
        else
            cout << "Product: " << Product << endl;

        double Quotient = FirstNumber / SecondNumber;
        if (Quotient >= 1e07 || Quotient <= 1e-07)
            cout << "Quotient: " << fixed << setprecision(0) << Quotient << endl;
        else
            cout << "Quotient: " << Quotient << endl << endl;

        OperationNumber++;
    }
}
