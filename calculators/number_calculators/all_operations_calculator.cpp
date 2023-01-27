// All Operations Calculator by Kazvin
#include <iostream>
#include <math.h>
using namespace std;

int main () {
    int OperationNumber = 1;
    double FirstNumber, SecondNumber;
    while (1) {
        cout << "Operation #" << OperationNumber << endl;
        cout << "First Number: ";
        cin >> FirstNumber;
        cout << "Second Number: ";
        cin >> SecondNumber;
        double Sum = FirstNumber + SecondNumber;
        double Difference = FirstNumber - SecondNumber;
        double Product = FirstNumber * SecondNumber;
        double Quotient = FirstNumber / SecondNumber;
        long long IntQuotient = FirstNumber / SecondNumber;
        double Remainder = FirstNumber - (IntQuotient * SecondNumber);
        double Power = pow(FirstNumber, SecondNumber);
        double NthRoot = pow(FirstNumber, 1/SecondNumber);
        cout << endl << "Sum: " << Sum << endl;
        cout << "Difference: " << Difference << endl;
        cout << "Product: " << Product << endl;
        cout << "Quotient: " << Quotient << endl;
        cout << "Remainder: " << Remainder << endl;
        cout << "Power: " << Power << endl;
        cout << "Nth Root: " << NthRoot << endl;
        cout << "____________________" << endl << endl;
        OperationNumber++;
    }
}