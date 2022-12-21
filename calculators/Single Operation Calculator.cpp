// Single Operation Calculator
// Created by Kazvin

#include <iostream>
using namespace std;

int main () {
    float FirstNumber, SecondNumber, Answer, OperationNumber = 1;
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
            Answer = FirstNumber + SecondNumber;
            cout << "Sum: " << Answer << endl << endl;
        }
        else if (Operator == "-") {
            Answer = FirstNumber - SecondNumber;
            cout << "Difference: " << Answer << endl << endl;
        }
        else if (Operator == "*") {
            Answer = FirstNumber * SecondNumber;
            cout << "Product: " << Answer << endl << endl;
        }
        else if (Operator == "/") {
            Answer = FirstNumber / SecondNumber;
            cout << "Quotient: " << Answer << endl << endl;
        }
        else
            cout << "Invalid Operator" << endl << endl;
        
        OperationNumber++;
    }
}
