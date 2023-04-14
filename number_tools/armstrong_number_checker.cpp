// Armstrong Number Checker

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {

    long long num = 0, sum = 0, length = 0, digit;
    string str_num;

    cout << "Number: ";
    cin >> num;

    str_num = to_string(num);
    length = str_num.length();

    for (long long counter = 0; counter < length; counter++) {
        digit = str_num[counter] - '0';
        sum += pow(digit, length);
    }

    if (sum == num)
        cout << "The number is an armstrong number";
    else
        cout << "The number is not an armstrong number";

    return 0;

}