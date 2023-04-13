// Fibonacci Sequence

#include <iostream>
#include <cctype>
#include <iomanip>
using namespace std;

int main() {

    long long first_num, second_num, third_number, numbers_in_sequence, sequence_num;
    string include_sequence_num;

    cout << "Initial First Number: ";
    cin >> first_num;
    cout << "Initial Second Number: ";
    cin >> second_num;
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

        if (sequence_num == 1)
            cout << first_num << endl;
        else if (sequence_num == 2)
            cout << second_num << endl;
        else {
            third_number = first_num + second_num;
            cout << third_number << endl;
            first_num = second_num;
            second_num = third_number;
            third_number = 0;
        }

    }

    return 0;

}