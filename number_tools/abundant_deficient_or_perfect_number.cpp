// Abundant, Deficient, or Perfect Number

#include <iostream>
using namespace std;

int main() {

    int num, sum_of_proper_divisors = 1;

    cout << "Number: ";
    cin >> num;

    for (int counter = 2; counter < num; counter++)
        if (num % counter == 0)
            sum_of_proper_divisors += counter;

    if (sum_of_proper_divisors == num)
        cout << "The number is a perfect number";
    if (sum_of_proper_divisors > num)
        cout << "The number is an abundant number";
    if (sum_of_proper_divisors < num)
        cout << "The number is a deficient number";

    return 0;

}