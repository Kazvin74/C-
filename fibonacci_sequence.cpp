// Fibonacci Sequence
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long long first_number, second_number, third_number, numbers_in_sequence, sequence_number;
    string include_sequence_number;
    cout << "Initial First Number: ";
    cin >> first_number;
    cout << "Initial Second Number: ";
    cin >> second_number;
    cout << "Numbers in the sequence: ";
    cin >> numbers_in_sequence;
    cout << "Include sequence number? (Y or N): ";
    cin >> include_sequence_number;
    if (include_sequence_number != "Y" && include_sequence_number != "N") {
        cout << endl << "Invalid Input";
        return 0;
    }
    cout << endl << "Sequence:" << endl;
    for (sequence_number = 1; sequence_number <= numbers_in_sequence; sequence_number++) {
        if (include_sequence_number == "Y")
            cout << sequence_number << ". ";
        if (sequence_number == 1)
            cout << first_number << endl;
        else if (sequence_number == 2)
            cout << second_number << endl;
        else {
            third_number = first_number + second_number;
            cout << third_number << endl;
            first_number = second_number;
            second_number = third_number;
            third_number = 0;
        }
    }
}