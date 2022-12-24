/*
Single Operations Calculator
Created by Kazvin

Note:
- If any of the answers is more than 6 digits (like 1000000) or more than
  6 decimal places (like 0.0000001), the answer would not be accurate. Please
  take note that it's not a bug.
- Also, this is just a modified version of my All Operations Calculator.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int OperationNumber = 1;
    double FirstNumber;
    double SecondNumber;
    string Operator;

    for (;;) {
        cout << "Operation #" << OperationNumber << endl;
        cout << "First Number: ";
        cin >> FirstNumber;
        cout << "Second Number: ";
        cin >> SecondNumber;
        cout << "Operator (+, -, *, /): ";
        cin >> Operator;

        if (Operator == "+") {
            double Sum = FirstNumber + SecondNumber;
            if (Sum >= 1e7 || Sum >= 1e-7)
                cout << "Sum: " << fixed << setprecision(0) << Sum;
            else
                cout << "Sum: " << Sum;
        }

        else if (Operator == "-") {
            double Difference = FirstNumber - SecondNumber;
            if (Difference >= 1e7 || Difference >= 1e-7)
                cout << "Difference: " << fixed << setprecision(0) << Difference;
            else
                cout << "Difference: " << Difference;
        }

        else if (Operator == "*") {
            double Product = FirstNumber * SecondNumber;
            if (Product >= 1e7 || Product >= 1e-7)
                cout << "Product: " << fixed << setprecision(0) << Product;
            else
                cout << "Product: " << Product;
        }

        else if (Operator == "/") {
            double Quotient = FirstNumber / SecondNumber;
            if (Quotient >= 1e7 || Quotient >= 1e-7)
                cout << "Quotient: " << fixed << setprecision(0) << Quotient;
            else
                cout << "Quotient: " << Quotient;
        }

        else
            cout << "Invalid Operator";

        cout << endl << endl;
        OperationNumber++;
    }
}