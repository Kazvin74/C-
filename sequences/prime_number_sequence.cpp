// Prime Number Sequence

#include <iostream>
#include <cctype>
using namespace std;

int main() {

    unsigned long long num = 1, numbers_in_sequence, sequence_num, largest_factor = 1;
    string include_sequence_num;
    bool prime_num_found;

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

        prime_num_found = false;

        if (include_sequence_num == "Y")
            cout << sequence_num << ". ";

        while (!prime_num_found) {

            num++;
            largest_factor = 1;

            for (int counter = 2; counter < num; counter++)
                if (num % counter == 0)
                    largest_factor = counter;

            if (largest_factor == 1)
                prime_num_found = true;

        }

        cout << num << endl;

    }

    return 0;

}