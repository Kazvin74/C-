// Prime Number Checker

#include <iostream>
using namespace std;

int main() {

    int num, largest_factor = 1;

    cout << "Number: ";
    cin >> num;

    for (int counter = 2; counter < num; counter++)
        if (num % counter == 0)
            largest_factor = counter;

    if (largest_factor == 1 && num != 1)
        cout << "The number is a prime number";
    else
        cout << "The number is not a prime number";

    return 0;

}