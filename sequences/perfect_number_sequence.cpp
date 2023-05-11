// Perfect Number Sequence

#include <iostream>
using namespace std;

int main() {

    unsigned long long num = 0, numbers_in_sequence, sequence_num, sum_of_proper_divisors;
    string include_sequence_num;
    bool perfect_num_found;

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

        perfect_num_found = false;

        if (include_sequence_num == "Y")
            cout << sequence_num << ". ";

        while (!perfect_num_found) {

            num++;
            sum_of_proper_divisors = 1;

            for (long long counter = 2; counter < num; counter++)
                if (num % counter == 0)
                    sum_of_proper_divisors += counter;

            if (sum_of_proper_divisors == num)
                perfect_num_found = true;

        }

        cout << num << endl;

    }

    return 0;

}