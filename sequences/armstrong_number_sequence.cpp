// Armstrong Number Sequence

#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;

int main() {

    unsigned long long num = 0, sum, numbers_in_sequence, sequence_num, digit, length;
    string include_sequence_num, str_num;
    bool armstrong_num_found;

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

        armstrong_num_found = false;

        if (include_sequence_num == "Y")
            cout << sequence_num << ". ";

        while (!armstrong_num_found) {

            num++;
            sum = 0;
            str_num = to_string(num);
            length = str_num.length();

            for (long long counter = 0; counter < length; counter++) {
                digit = str_num[counter] - '0';
                sum += pow(digit, length);
            }

            if (sum == num)
                armstrong_num_found = true;

        }

        cout << num << endl;

    }

    return 0;

}