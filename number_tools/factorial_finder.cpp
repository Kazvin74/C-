// Factorial Finder

#include <iostream>
using namespace std;

int main() {

    int num, factorial = 1;

    cout << "Number: ";
    cin >> num;

    for (int counter = 1; counter <= num; counter++) {
        factorial *= counter;
    }

    cout << "Factorial: " << factorial;

    return 0;

}