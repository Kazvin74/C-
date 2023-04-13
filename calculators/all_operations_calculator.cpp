// All Operations Calculator

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    long long operation_num = 1;
    long double first_num, second_num;

    while (true) {

        cout << "Operation #" << operation_num << endl;
        cout << "First Number: ";
        cin >> first_num;
        cout << "Second Number: ";
        cin >> second_num;

        long double sum = first_num + second_num;
        long double difference = first_num - second_num;
        long double product = first_num * second_num;
        long double quotient = first_num / second_num;
        long long int_quotient = first_num / second_num;
        long double remainder = first_num - (int_quotient * second_num);
        long double power = pow(first_num, second_num);
        long double nth_root = pow(first_num, 1.0/second_num);

        cout << endl << "Sum: " << sum << endl;
        cout << "Difference: " << difference << endl;
        cout << "Product: " << product << endl;
        cout << "Quotient: " << quotient << endl;
        cout << "Remainder: " << remainder << endl;
        cout << "Power: " << power << endl;
        cout << "Nth Root: " << nth_root << endl;
        cout << "____________________" << endl << endl;

        operation_num++;

    }

    return 0;

}