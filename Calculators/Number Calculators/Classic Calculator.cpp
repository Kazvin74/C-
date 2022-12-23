/*
Classic Calculator
Created by Kazvin

Note:
- If any of the answers is more than 6 digits (like 1000000),
the answer would not be accurate. Please take note that it's not a bug.
- Also, this is just a modified version of my Single Operation Calculator.
- You can type "Ans" to make the first number or the second number equal
to the answer in the previous equation.

Format:
(FirstNumber)(space)(Operator)(space)(SecondNumber)
Example: 10 + 10
*/

#include <iostream>
#include <string>
using namespace std;

int main () {
    string FirstNumber = "0", SecondNumber = "0", Operator;
    double Answer;

    for (;;) {
        cout << "Enter your expression: " << endl;
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

        if (Operator == "+" || Operator == "-" || Operator == "*" || Operator == "/") {
            string StrAnswer = to_string(Answer);
            int AnswerLength = StrAnswer.length();
            if (AnswerLength >= 14)
                cout << StrAnswer.substr(0, AnswerLength-7) << endl;
            else
                cout << "= " << Answer;
        }

        cout << endl << endl;
    }
}
