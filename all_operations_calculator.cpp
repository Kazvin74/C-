// All Operations Calculator
#include <iostream>
#include <math.h>
using namespace std;

int main () {
    int operation_number = 1;
    double first_number, second_number;
    while (1) {
        cout << "Operation #" << operation_number << endl;
        cout << "First Number: ";
        cin >> first_number;
        cout << "Second Number: ";
        cin >> second_number;
        double sum = first_number + second_number;
        double difference = first_number - second_number;
        double product = first_number * second_number;
        double quotient = first_number / second_number;
        long long int_quotient = first_number / second_number;
        double remainder = first_number - (int_quotient * second_number);
        double power = pow(first_number, second_number);
        double nth_root = pow(first_number, 1/second_number);
        cout << endl << "Sum: " << sum << endl;
        cout << "Difference: " << difference << endl;
        cout << "Product: " << product << endl;
        cout << "Quotient: " << quotient << endl;
        cout << "Remainder: " << remainder << endl;
        cout << "Power: " << power << endl;
        cout << "Nth Root: " << nth_root << endl;
        cout << "____________________" << endl << endl;
        operation_number++;
    }
}
