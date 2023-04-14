// Factor Finder

#include <iostream>
using namespace std;

int main() {

    long long num;

    cout << "Number: ";
    cin >> num;

    cout << "Factors: ";

    for (long long counter = 1; counter <= num; counter++)
        if (num % counter == 0)
            cout << counter << ", ";

    cout << "\b\b" << " ";

    return 0;

}