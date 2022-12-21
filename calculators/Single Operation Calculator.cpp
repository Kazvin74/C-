// Single Operation Calculator
// Created by Kazvin

#include <iostream>
using namespace std;

int main () {
    float FirstNumber;
    float SecondNumber;
    float OperationNumber = 1;
    char Operator;
    float Answer;
    for (;;) {
        cout << "Operation #" << OperationNumber << endl;
        cout << "First Number: ";
        cin >> FirstNumber;
        cout << "Second Number: ";
        cin >> SecondNumber;
        cout << "Operator (+, -, *, /): ";
        cin >> Operator;
        switch (Operator) {
        case '+':
            Answer = FirstNumber + SecondNumber;
            cout << "Sum: " << Answer << endl << endl;
            break;
        case '-':
            Answer = FirstNumber - SecondNumber;
            cout << "Difference: " << Answer << endl << endl;
            break;
        case '*':
            Answer = FirstNumber * SecondNumber;
            cout << "Product: " << Answer << endl << endl;
            break;
        case '/':
            Answer = FirstNumber / SecondNumber;
            cout << "Quotient: " << Answer << endl << endl;
            break;
        default:
            cout << "Invalid Operator" << endl << endl;
            break;
        }
        OperationNumber++;
    }
}
