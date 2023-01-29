// Repeated Operation by Kazvin (v202301292342)
#include <iostream>
#include <math.h>
using namespace std;

int main () {
    long long FirstNumber, SecondNumber, NumberOfRepeats, SequenceNumber;
    string Operator, IncludeSequenceNumber;
    cout << "Enter your first number: ";
    cin >> FirstNumber;
    cout << "Enter your second number: ";
    cin >> SecondNumber;
    cout << "Operator (+, -, *): ";
    cin >> Operator;
    if (Operator != "+" && Operator != "-" && Operator != "*") {
        cout << endl << "Invalid Input";
        return 0;
    }
    cout << "Number of repeats: ";
    cin >> NumberOfRepeats;
    if (NumberOfRepeats < 1) {
        cout << endl << "Invalid Input";
        return 0;
    }
    cout << "Include sequence number? (Y or N): ";
    cin >> IncludeSequenceNumber;
    if (IncludeSequenceNumber != "Y" && IncludeSequenceNumber != "N") {
        cout << endl << "Invalid Input";
        return 0;
    }
    cout << endl << "Sequence: " << endl;
    for (SequenceNumber = 1; SequenceNumber <= NumberOfRepeats; SequenceNumber++) {
        if (Operator == "+") FirstNumber += SecondNumber;
        else if (Operator == "-") FirstNumber -= SecondNumber;
        else if (Operator == "*") FirstNumber *= SecondNumber;
        if (IncludeSequenceNumber == "Y")
            cout << SequenceNumber << ". ";
        cout << FirstNumber << endl;
    }
}