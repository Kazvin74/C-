// Fibonacci Sequence by Kazvin

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    unsigned long long FirstNumber, SecondNumber, ThirdNumber, NumbersInSequence, SequenceNumber = 1;
    string IncludeSequenceNumber;

    cout << "Initial First Number: ";
    cin >> FirstNumber;
    cout << "Initial Second Number: ";
    cin >> SecondNumber;
    cout << "Numbers in the sequence: ";
    cin >> NumbersInSequence;
    cout << endl << "Include sequence number? (Y or N) " << endl;
    cin >> IncludeSequenceNumber;

    if (IncludeSequenceNumber != "Y" && IncludeSequenceNumber != "N") {
        cout << endl << "Invalid Input";
        return 0;
    }

    cout << endl << "Sequence:" << endl;

    while (SequenceNumber <= NumbersInSequence) {

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

        SequenceNumber++;

    }

}