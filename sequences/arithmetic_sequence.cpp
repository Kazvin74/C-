// Arithmetic Sequence

#include <iostream>
#include <cctype>
using namespace std;

int main() {

    long long num, add_to, numbers_in_sequence, sequence_num;
    string include_sequence_num;

    cout << "Initial Number: ";
    cin >> num;
    cout << "Add to: ";
    cin >> add_to;
    cout << "Numbers in the sequence: ";
    cin >> numbers_in_sequence;
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

        if (sequence_num != 1)
            num += add_to;

        cout << num << endl;

    }

    return 0;

}