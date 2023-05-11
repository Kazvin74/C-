// Collatz Conjecture

#include <iostream>
using namespace std;

int main() {

    unsigned long long num, sequence_num = 1;
    string include_sequence_num;

    cout << "Enter your number: ";
    cin >> num;
    cout << "Include sequence number (Y or N): ";
    cin >> include_sequence_num;

    while (include_sequence_num != "Y" && include_sequence_num != "N") {
        cout << "\033[31mInvalid input, please try again\033[0m" << endl << endl;
        cout << "Include sequence number (Y or N): ";
        cin >> include_sequence_num;
    }

    cout << endl << "Sequence: " << endl;

    while (num > 1) {
        if (num % 2 == 1)
            num = 3 * num + 1;
        else if (num % 2 == 0)
            num = num / 2;
        if (include_sequence_num == "Y")
            cout << sequence_num << ". ";
        cout << num << endl;
        sequence_num++;
    }

    cout << endl << "You are now stuck in a 4, 2, 1 loop";

    return 0;

}