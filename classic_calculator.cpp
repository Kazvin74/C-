// Classic Calculator
#include <iostream>
#include <math.h>
using namespace std;

int main () {
    long long int_quotient, operation_number = 1;
    double first_number, second_number, answer;
    string Operator;
    while (1) {
        cout << "Operation #" << operation_number << endl << "Expression: ";
        cin >> first_number >> Operator >> second_number;
        if (Operator == "+")
            answer = first_number + second_number;
        else if (Operator == "-")
            answer = first_number - second_number;
        else if (Operator == "*")
            answer = first_number * second_number;
        else if (Operator == "/")
            answer = first_number / second_number;
        else if (Operator == "%") {
            int_quotient = first_number / second_number;
            answer = first_number - (int_quotient * second_number);
        }
        else if (Operator == "^")
            answer = pow(first_number, second_number);
        else if (Operator == "R")
            answer = pow(first_number, 1/second_number);
        else cout << "Invalid Operator";
        if (Operator == "+" || Operator == "-" || Operator == "*" ||
        Operator == "/" || Operator == "%" || Operator == "^" || "R")
            cout << "answer: " << answer;
        cout << endl << "____________________" << endl << endl;
        operation_number++;
    }
}