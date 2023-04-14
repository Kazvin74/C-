// Random Integer Generator

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

	srand(time(NULL));

    long long num_of_ints, min_range, max_range, possible_combinations, include_occurrences, num;

    cout << "Number of integers to generate: ";
    cin >> num_of_ints;
    cout << "Minimum range: ";
    cin >> min_range;
    cout << "Maximum range: ";
    cin >> max_range;

    cout << endl << "0 = Don't include occurrences" << endl;
    cout << "1 = Include occurrences, but don't include numbers that didn't occur" << endl;
    cout << "2 = Include occurrences, and include number that didn't occur" << endl << endl;
    cout << "Include occurrences: ";
    cin >> include_occurrences;

    while (!(include_occurrences == 0 || include_occurrences == 1 || include_occurrences == 2)) {
        cout << "\033[31mInvalid input, please try again\033[0m" << endl << endl;
        cout << "Include occurrences: ";
        cin >> include_occurrences;
    }

    if (min_range > max_range) {
        cout << endl << "\033[31mSwapped the values of the min_range and the max_range variable\033[0m" << endl;
        long long temp = min_range;
        min_range = max_range;
        max_range = temp;
    }

    possible_combinations = max_range - min_range + 1;
    long long occurrences[possible_combinations];

    cout << endl << "Numbers:" << endl;

    for (long long counter = 0; counter < possible_combinations; counter++)
        occurrences[counter] = 0;

    for (long long counter = 1; counter <= num_of_ints; counter++) {
        num = rand() % possible_combinations + min_range;
        cout << counter << ": " << num << endl;
        occurrences[num - min_range]++;
    }

    if (include_occurrences == 1) {
        cout << endl << "Occurrences:" << endl;
        for (long long counter = 0; counter < possible_combinations; counter++)
            if (occurrences[counter] != 0)
                cout << counter + min_range << ": " << occurrences[counter] << endl;
    }
    else if (include_occurrences == 2) {
        cout << endl << "Occurrences:" << endl;
        for (long long counter = 0; counter < possible_combinations; counter++)
            cout << counter + min_range << ": " << occurrences[counter] << endl;
    }

    return 0;

}