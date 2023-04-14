// GCF and LCM of two numbers

#include <iostream>
using namespace std;

int main() {

    long long first_num, second_num, larger_num, GCF = 1, LCM = 1;

    cout << "First Number: ";
    cin >> first_num;
    cout << "Second Number: ";
    cin >> second_num;

    if (first_num >= second_num)
        larger_num = first_num;
    else
        larger_num = second_num;

    for (long long counter = 1; counter <= larger_num; counter++)
        if (first_num % counter == 0 && second_num % counter == 0)
            GCF = counter;

    long long counter = larger_num;
    while (counter % first_num != 0 || counter % second_num != 0)
        counter++;

    LCM = counter;

    cout << endl << "GCF: " << GCF << endl << "LCM: " << LCM;

    return 0;

}