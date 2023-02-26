// Collatz Conjecture
#include <iostream>
using namespace std;

int main () {
    unsigned long long number, sequence_number = 1;
    string include_sequence_number;
    cout << "Enter your number: ";
    cin >> number;
    cout << "Include sequence number? (Y or N): ";
    cin >> include_sequence_number;
    if (include_sequence_number != "Y" && include_sequence_number != "N") {
        cout << endl << "Invalid Input";
        return 0;
    }
    cout << endl << "Sequence: " << endl;
    while (number > 1) {
        if (number % 2 == 1)
            number = 3 * number + 1;
        else if (number % 2 == 0)
            number = number / 2;
        if (include_sequence_number == "Y")
            cout << sequence_number << ". ";
        cout << number << endl;
        sequence_number++;
    }
    cout << endl << "You are now stuck in a 4, 2, 1 loop";
}