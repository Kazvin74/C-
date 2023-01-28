// Fibonacci Sequence by Kazvin (v202301282335)
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long long FirstNumber, SecondNumber, ThirdNumber, NumbersInSequence, SequenceNumber;
    string IncludeSequenceNumber;
    cout << "Initial First Number: ";
    cin >> FirstNumber;
    cout << "Initial Second Number: ";
    cin >> SecondNumber;
    cout << "Numbers in the sequence: ";
    cin >> NumbersInSequence;
    cout << "Include sequence number? (Y or N): ";
    cin >> IncludeSequenceNumber;
    if (IncludeSequenceNumber != "Y" && IncludeSequenceNumber != "N") {
        cout << endl << "Invalid Input";
        return 0;
    }
    cout << endl << "Sequence:" << endl;
    for (SequenceNumber = 1; SequenceNumber <= NumbersInSequence; SequenceNumber++) {
        if (IncludeSequenceNumber == "Y")
            cout << SequenceNumber << ". ";
        if (SequenceNumber == 1)
            cout << FirstNumber << endl;
        else if (SequenceNumber == 2)
            cout << SecondNumber << endl;
        else {
            ThirdNumber = FirstNumber + SecondNumber;
            cout << ThirdNumber << endl;
            FirstNumber = SecondNumber;
            SecondNumber = ThirdNumber;
            ThirdNumber = 0;
        }
    }
}