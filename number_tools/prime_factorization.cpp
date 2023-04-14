// Prime Factorization

#include <iostream>
using namespace std;

int main() {

    long long num;

    cout << "Number: ";
    cin >> num;

    for (long long factor = 2; factor <= num; factor++)
        while (num % factor == 0) {
                num /= factor;
                cout << factor << " * ";
        }

    cout << "\b\b\b" << "  ";

    return 0;

}