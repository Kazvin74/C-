// Single Operation Calculator by Kazvin
#include <iostream>
#include <math.h>
using namespace std;

int main () {
    int IntQuotient, OperationNumber = 1;
    double FirstNumber, SecondNumber, Answer;
    string Operator;
    while (1) {
        cout << "Operation #" << OperationNumber << endl;
        cout << "First Number: ";
        cin >> FirstNumber;
        cout << "Second Number: ";
        cin >> SecondNumber;
        cout << "Operator (+, -, *, /, %, ^, R): ";
        cin >> Operator;
        if (Operator == "+") Answer = FirstNumber + SecondNumber;
        else if (Operator == "-") Answer = FirstNumber - SecondNumber;
        else if (Operator == "*") Answer = FirstNumber * SecondNumber;
        else if (Operator == "/") Answer = FirstNumber / SecondNumber;
        else if (Operator == "%") {
            IntQuotient = FirstNumber / SecondNumber;
            Answer = FirstNumber - (IntQuotient * SecondNumber);
        }
        else if (Operator == "^") Answer = pow(FirstNumber, SecondNumber);
        else if (Operator == "R") Answer = pow(FirstNumber, 1/SecondNumber);
        else cout << "Invalid Operator";
        if (Operator == "+" || Operator == "-" || Operator == "*" || Operator == "/" ||
        Operator == "%" || Operator == "^" || "R") cout << "Answer: " << Answer;
        cout << endl << "____________________" << endl << endl;
        OperationNumber++;
    }
}