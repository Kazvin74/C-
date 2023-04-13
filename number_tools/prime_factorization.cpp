// Prime Factorization

#include <iostream>
using namespace std;

int main() {

    int num;

    cout << "Number: ";
    cin >> num;

    for (int factor = 2; factor <= num; factor++)
        while (num % factor == 0) {
                num /= factor;
                cout << factor << " * ";
        }

    cout << "\b\b\b" << "  ";

    return 0;

}