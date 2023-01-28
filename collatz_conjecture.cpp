// Collatz Conjecture by Kazvin (v202301282335)
#include <iostream>
using namespace std;

int main () {
    unsigned long long Number, SequenceNumber = 1;
    string IncludeSequenceNumber;
    cout << "Enter your number: ";
    cin >> Number;
    cout << "Include sequence number? (Y or N): ";
    cin >> IncludeSequenceNumber;
    if (IncludeSequenceNumber != "Y" && IncludeSequenceNumber != "N") {
        cout << endl << "Invalid Input";
        return 0;
    }
    cout << endl << "Sequence: " << endl;
    while (Number > 1) {
        if (Number % 2 == 1)
            Number = 3 * Number + 1;
        else if (Number % 2 == 0)
            Number = Number / 2;
        if (IncludeSequenceNumber == "Y")
            cout << SequenceNumber << ". ";
        cout << Number << endl;
        SequenceNumber++;
    }
    cout << endl << "You are now stuck in a 4, 2, 1 loop";
}