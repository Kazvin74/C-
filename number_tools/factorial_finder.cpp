// Factorial Finder

#include <iostream>
using namespace std;

int main() {

    long long num, factorial = 1;

    cout << "Number: ";
    cin >> num;

    for (long long counter = 1; counter <= num; counter++) {
        factorial *= counter;
    }

    cout << "Factorial: " << factorial;

    return 0;

}