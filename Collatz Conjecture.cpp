/*
Collatz Conjecture
Created by Kazvin
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double Number, DoubleQuotient;
    int Remainder, IntQuotient, SequenceNumber = 1;
    string IncludeSequenceNumber;
    cout << "Enter your number: ";
    cin >> Number;
    cout << endl << "Include sequence number? (Y or N) " << endl;
    cin >> IncludeSequenceNumber;
    if (IncludeSequenceNumber != "Y" || IncludeSequenceNumber != "N") {
        cout << endl << "Invalid Input";
        return 0;
    }
    cout << endl << "Sequence: " << endl;

    while (Number > 1) {
        IntQuotient = Number / 2;
        DoubleQuotient = Number / 2;
        Remainder = Number - (IntQuotient * 2);

        if (Remainder == 1)
            Number = 3 * Number + 1;
        else if (Remainder == 0)
            Number = Number / 2;

        if (IncludeSequenceNumber == "N")
            cout << Number << endl;
        else if (IncludeSequenceNumber == "Y")
            cout << SequenceNumber << ". " << Number << endl;

        SequenceNumber++;
    }
    cout << endl << "You are now stuck in a 4, 2, 1 loop";
}
