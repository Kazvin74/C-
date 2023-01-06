/*
Classic Calculator
Created by Kazvin

Note:
- If any of the answers is more than 6 digits (like 1000000) or more than
  6 decimal places (like 0.0000001), the answer would not be accurate. Please
  take note that it's not a bug.
- Also, this is just a modified version of my Single Operation Calculator.
- You can type "Ans" to make the first number or the second number equal
  to the answer in the previous equation.

Format:
(FirstNumber)(space)(Operator)(space)(SecondNumber)
Example: 10 + 10
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () {
    string FirstNumber = "0", SecondNumber = "0", Operator;
    int OperationNumber = 1;
    double Answer;

    for (;;) {
        cout << "Operation #" << OperationNumber << endl << "Expression: ";
        cin >> FirstNumber >> Operator >> SecondNumber;

        if (FirstNumber == "Ans")
            FirstNumber = to_string(Answer);

        if (SecondNumber == "Ans")
            SecondNumber = to_string(Answer);

        if (Operator == "+")
            Answer = stod(FirstNumber) + stod(SecondNumber);

        else if (Operator == "-") 
            Answer = stod(FirstNumber) - stod(SecondNumber);

        else if (Operator == "*") 
            Answer = stod(FirstNumber) * stod(SecondNumber);

        else if (Operator == "/")
            Answer = stod(FirstNumber) / stod(SecondNumber);

        else
            cout << "Invalid Operator";

        cout << "Answer: ";

        if (Operator == "+" || Operator == "-" || Operator == "*" || Operator == "/") {
            if (Answer >= 1e7 || Answer <= 1e-7)
                cout << fixed << setprecision(0) << Answer;
            else
                cout << "= " << Answer;
        }
        OperationNumber++;
        cout << endl << endl;
    }
}
