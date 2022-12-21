// Collatz Conjecture
// Created by Kazvin
// Coded in my phone

#include <iostream>
using namespace std;

int main() {  
    int number;
    cout << "Enter your number: ";
    cin >> number;
    cout << endl << "Sequence: " << endl << number << endl;
    while (number > 1) {
        // If the number is an odd number, it will multiply the number by 3 and add 1 (3x + 1)
        if (number % 2 == 1) {
            number = 3 * number + 1;
        }
        // If the number is an even number, it will divide the number by 2 (x/2)
        else if (number % 2 == 0) {
            number = number / 2;
        }
        cout << number << endl;
    }    
    cout << endl << "You are now stuck in a 4, 2, 1 loop";    
}
