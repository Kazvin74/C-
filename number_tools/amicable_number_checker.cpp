// Amicable Number Checker

#include <iostream>
using namespace std;

int main() {

    long long first_num, second_num, sum_of_divisors_of_first_num = 0, sum_of_divisors_of_second_num = 0;

    cout << "First Number: ";
    cin >> first_num;
    cout << "Second Number: ";
    cin >> second_num;

    for (long long counter = 1; counter < first_num ; counter++)
        if (first_num % counter == 0)
            sum_of_divisors_of_first_num += counter;

    if (sum_of_divisors_of_first_num == second_num) {

        for (long long counter = 1; counter < second_num ; counter++)
            if (second_num % counter == 0)
                sum_of_divisors_of_second_num += counter;

        if (sum_of_divisors_of_second_num == first_num)
            cout << "The numbers are amicable numbers";
        else
            cout << "The numbers are not amicable numbers";
    }
    else
        cout << "The numbers are not amicable numbers";

    return 0;

}