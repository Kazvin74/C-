// Integer Array Info

#include <iostream>
#include <string>
using namespace std;

int main() {

    long long length, smallest_num, largest_num, counter, sum = 0, smallest_num_occurrence = 1;
    long long largest_num_occurrence = 1, smallest_num_length, largest_num_length;
    long double average, median;

    cout << "Number of elements: ";
    cin >> length;

    long long array[length];
    cout << "Array: ";

    for (long long counter = 0; counter < length; counter++)
        cin >> array[counter];

    long long key, current_index;
    for (long long counter = 1; counter < length; counter++) {
	    key = array[counter];
	    current_index = counter - 1;
	    while (current_index >= 0 && array[current_index] > key) {
	        array[current_index + 1] = array[current_index];
		    current_index = current_index - 1;
	    }
	    array[current_index + 1] = key;
    }

    cout << endl << "Sorted Array: ";
    for (long long counter = 0; counter < length; counter++) {
        cout << array[counter] << " ";
    }

    for (long long counter = 0; counter < length; counter++)
        sum += array[counter];

    average = sum / length;
    smallest_num = array[0];
    largest_num = array[length - 1];

    if (length % 2 == 1)
        median = array[length / 2];
    else
        median = (array[length / 2] + array[length / 2 - 1]) / 2.0;

    counter = 1;
    while (array[counter] == smallest_num && counter < length) {
        smallest_num_occurrence++;
        counter++;
    }

    counter = length - 2;
    while (array[counter] == largest_num && counter >= 0) {
        largest_num_occurrence++;
        counter--;
    }

    cout << endl << endl << "Sum: " << sum << endl << "Average: " << average << endl;
    cout << "Median: " << median << endl << endl;
    cout << "Smallest Number: " << smallest_num << endl;
    cout << "Occurrences: " << smallest_num_occurrence << endl;
    cout << "Length: " << to_string(smallest_num).length() << endl << endl;
    cout << "Largest Number: " << largest_num << endl;
    cout << "Occurrences: " << largest_num_occurrence << endl;
    cout << "Length: " << to_string(largest_num).length();

    return 0;

}