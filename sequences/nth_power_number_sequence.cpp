// Nth Power Number Sequence

#include <iostream>
using namespace std;

int main() {

    unsigned long long numbers_in_sequence, sequence_num, power, result;
    string include_sequence_num;

    cout << "Numbers in the sequence: ";
    cin >> numbers_in_sequence;

    cout << "Power of the numbers: ";
    cin >> power;

    while (power < 2) {
        cout << "\033[31mInvalid input, please try again\033[0m" << endl << endl;
        cout << "Power of the numbers: ";
        cin >> power;
    }

    cout << "Include sequence number (Y or N): ";
    cin >> include_sequence_num;

    while (include_sequence_num != "Y" && include_sequence_num != "N") {
        cout << "\033[31mInvalid input, please try again\033[0m" << endl << endl;
        cout << "Include sequence number (Y or N): ";
        cin >> include_sequence_num;
    }

    cout << endl << "Sequence:" << endl;

    for (sequence_num = 1; sequence_num <= numbers_in_sequence; sequence_num++) {

        if (include_sequence_num == "Y")
            cout << sequence_num << ". ";

        result = sequence_num;

        for (long long counter = 1; counter < power; counter++) {
            result *= sequence_num;
        }

        cout << result << endl;

    }

    return 0;

}