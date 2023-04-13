// Triangular Number Checker

#include <iostream>
using namespace std;

int main() {

    int num, temp, sum = 0;
    bool is_triangular = false;

    cout << "Number: ";
    cin >> num;

    for (int counter = 1; counter < num; counter++) {
        sum += counter;
        if (sum == num) {
            is_triangular = true;
            break;
        }
    }

    if (is_triangular)
        cout << "The number is a triangular number";
    else
        cout << "The number is not a triangular number";

    return 0;

}