// Repeated Operation
#include <iostream>
#include <math.h>
using namespace std;

int main () {
    long long first_number, second_number, number_of_repeats, sequence_number;
    string Operator, include_sequence_number;
    cout << "Enter your first number: ";
    cin >> first_number;
    cout << "Enter your second number: ";
    cin >> second_number;
    cout << "Operator (+, -, *): ";
    cin >> Operator;
    if (Operator != "+" && Operator != "-" && Operator != "*") {
        cout << endl << "Invalid Input";
        return 0;
    }
    cout << "Number of repeats: ";
    cin >> number_of_repeats;
    if (number_of_repeats < 1) {
        cout << endl << "Invalid Input";
        return 0;
    }
    cout << "Include sequence number? (Y or N): ";
    cin >> include_sequence_number;
    if (include_sequence_number != "Y" && include_sequence_number != "N") {
        cout << endl << "Invalid Input";
        return 0;
    }
    cout << endl << "Sequence: " << endl;
    for (sequence_number = 1; sequence_number <= number_of_repeats; sequence_number++) {
        if (Operator == "+") first_number += second_number;
        else if (Operator == "-") first_number -= second_number;
        else if (Operator == "*") first_number *= second_number;
        if (include_sequence_number == "Y")
            cout << sequence_number << ". ";
        cout << first_number << endl;
    }
}