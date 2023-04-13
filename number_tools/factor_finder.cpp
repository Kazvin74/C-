// Factor Finder

#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Number: ";
    cin >> num;

    cout << "Factors: ";

    for (int counter = 1; counter <= num; counter++)
        if (num % counter == 0)
            cout << counter << ", ";

    cout << "\b\b" << " ";

    return 0;

}