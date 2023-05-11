// Prime Number Checker

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    long long num, largest_factor = 1;

    cout << "Number: ";
    cin >> num;

    for (long long counter = 2; counter < num; counter++)
        if (num % counter == 0)
            largest_factor = counter;

    if (num == 3 || num == 7 || num == 31 || num == 127 || num == 8191 || num == 131071 ||
        num == 524287 || num == pow(2,31) - 1 || num == pow(2,61) - 1)
        cout << "The number is a mersenne prime number";
    else if (largest_factor == 1 && num != 1)
        cout << "The number is a prime number";
    else
        cout << "The number is not a prime number";

    return 0;

}