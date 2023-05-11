// Classic Calculator

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    long long int_quotient, operation_num = 1;
    long double first_num, second_num, answer;
    bool invalid_operator;
    string Operator;

    while (true) {

        invalid_operator = false;

        cout << "Operation #" << operation_num << endl << "Expression: ";
        cin >> first_num >> Operator >> second_num;

        if (Operator == "+")
            answer = first_num + second_num;
        else if (Operator == "-")
            answer = first_num - second_num;
        else if (Operator == "*")
            answer = first_num * second_num;
        else if (Operator == "/")
            answer = first_num / second_num;
        else if (Operator == "%") {
            int_quotient = first_num / second_num;
            answer = first_num - (int_quotient * second_num);
        }
        else if (Operator == "^")
            answer = pow(first_num, second_num);
        else if (Operator == "R")
            answer = pow(first_num, 1.0/second_num);
        else {
            cout << "\033[31mInvalid operator\033[0m";
            invalid_operator = true;
        }

        if (!invalid_operator)
            cout << "Answer: " << answer;

        cout << endl << "____________________" << endl << endl;

        operation_num++;

    }

}