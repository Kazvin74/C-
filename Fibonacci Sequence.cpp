/*
Fibonacci Sequence
Created by Kazvin
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double FirstNumber, SecondNumber, ThirdNumber, NumbersInSequence;
    int SequenceNumber = 1;
    string IncludeSequenceNumber;
    cout << "Initial First Number: ";
    cin >> FirstNumber;
    cout << "Initial Second Number: ";
    cin >> SecondNumber;
    cout << "Numbers in the sequence: ";
    cin >> NumbersInSequence;
    cout << endl << "Include sequence number? (Y or N) " << endl;
    cin >> IncludeSequenceNumber;
    if (IncludeSequenceNumber != "Y" || IncludeSequenceNumber != "N") {
        cout << endl << "Invalid Input";
        return 0;
    }
    cout << endl << "Sequence:" << endl;
    if (IncludeSequenceNumber == "N") {
        while (SequenceNumber <= NumbersInSequence) {
            if (SequenceNumber == 1)
                cout << fixed << setprecision(0) << FirstNumber << endl;
            else if (SequenceNumber == 2)
                cout << fixed << setprecision(0) << SecondNumber << endl;
            else {
                ThirdNumber = FirstNumber + SecondNumber;
                cout << fixed << setprecision(0) << ThirdNumber << endl;
                FirstNumber = SecondNumber;
                SecondNumber = ThirdNumber;
                ThirdNumber = 0;
            }
            SequenceNumber++;
        }
    }
    else if (IncludeSequenceNumber == "Y") {
        while (SequenceNumber <= NumbersInSequence) {
            if (SequenceNumber == 1)
                cout << SequenceNumber << ". " << fixed << setprecision(0) << FirstNumber << endl;
            else if (SequenceNumber == 2)
                cout << SequenceNumber << ". " << fixed << setprecision(0) << SecondNumber << endl;
            else {
                ThirdNumber = FirstNumber + SecondNumber;
                cout << SequenceNumber << ". " << fixed << setprecision(0) << ThirdNumber << endl;
                FirstNumber = SecondNumber;
                SecondNumber = ThirdNumber;
                ThirdNumber = 0;
            }
            SequenceNumber++;
        }
    }
}
