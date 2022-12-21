// All Operations Calculator
// Created by Kazvin
// Needs to be fixed

#include <iostream>
using namespace std;

int main () {
    float FirstNumber;
    float SecondNumber;
    float OperationNumber = 1;
    float Sum;
    float Difference;
    float Product;
    float Quotient;
    for (;;) {
        cout << "Operation #" << OperationNumber << endl;
        cout << "First Number: ";
        cin >> FirstNumber;
        cout << "Second Number: ";
        cin >> SecondNumber;
        Sum = FirstNumber + SecondNumber;
        Difference = FirstNumber - SecondNumber;
        Product = FirstNumber * SecondNumber;
        Quotient = FirstNumber / SecondNumber;
        cout << "Sum: " << Sum << endl;
        cout << "Difference: " << Difference << endl;
        cout << "Product: " << Product << endl;
        cout << "Quotient: "<< Quotient << endl << endl;
        OperationNumber++;
    }
}
