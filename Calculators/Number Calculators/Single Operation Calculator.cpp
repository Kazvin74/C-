/*
Single Operations Calculator
Created by Kazvin

Note:
If any of the answers is more than 6 digits (like 1000000),
the answer would not be accurate. Please take note that it's not a bug.

Also, this is just a modified version of my All Operations Calculator.
*/

#include <iostream>
#include <string>
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
            string StrSum = to_string(Sum);
            int SumLength = StrSum.length();
            if (SumLength >= 14)
                cout << "Sum: " << StrSum.substr(0, SumLength-7) << endl;
            else
                cout << "Sum: " << Sum;
        }

        else if (Operator == "-") {
            double Difference = FirstNumber - SecondNumber;
            string StrDifference = to_string(Difference);
            int DifferenceLength = StrDifference.length();
            if (DifferenceLength >= 14)
                cout << "Difference: " << StrDifference.substr(0, DifferenceLength-7) << endl;
            else
                cout << "Difference: " << Difference;
        }

        else if (Operator == "*") {
            double Product = FirstNumber * SecondNumber;
            string StrProduct = to_string(Product);
            int ProductLength = StrProduct.length();
            if (ProductLength >= 14)
                cout << "Product: " << StrProduct.substr(0, ProductLength-7) << endl;
            else
                cout << "Product: " << Product;
        }

        else if (Operator == "/") {
            double Quotient = FirstNumber / SecondNumber;
            string StrQuotient = to_string(Quotient);
            int QuotientLength = StrQuotient.length();
            if (QuotientLength >= 14)
                cout << "Quotient: " << StrQuotient.substr(0, QuotientLength-7) << endl;
            else
                cout << "Quotient: " << Quotient;
        }

        else
            cout << "Invalid Operator";

        cout << endl << endl;
        OperationNumber++;
    }
}
