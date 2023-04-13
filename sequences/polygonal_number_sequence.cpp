// Polygonal Number Sequence

#include <iostream>
using namespace std;

int main() {

    long long num_of_sides, numbers_in_sequence, sequence_num, num = 0;
    string include_sequence_num;

    cout << "Number of sides: ";
    cin >> num_of_sides;
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

        num = num - (num_of_sides - 3) + (sequence_num * (num_of_sides - 2));

        cout << num << endl;

    }

    return 0;

}