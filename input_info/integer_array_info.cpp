// Integer Array Info

#include <iostream>
#include <string>
using namespace std;

int main() {

    long long num_of_elements, smallest_num, largest_num, counter, sum = 0, smallest_num_occurrence = 1;
    long long largest_num_occurrence = 1, smallest_num_num_of_elements, largest_num_num_of_elements;
    long double average, median;

    cout << "Number of elements: ";
    cin >> num_of_elements;

    long long array[num_of_elements];
    cout << "Array: " << endl;

    for (long long counter = 0; counter < num_of_elements; counter++)
        cin >> array[counter];

    long long key, current_index;
    for (long long counter = 1; counter < num_of_elements; counter++) {
	    key = array[counter];
	    current_index = counter - 1;
	    while (current_index >= 0 && array[current_index] > key) {
	        array[current_index + 1] = array[current_index];
		    current_index = current_index - 1;
	    }
	    array[current_index + 1] = key;
    }

    cout << endl << "Sorted Array: ";
    for (long long counter = 0; counter < num_of_elements; counter++) {
        cout << array[counter] << " ";
    }

    for (long long counter = 0; counter < num_of_elements; counter++)
        sum += array[counter];

    average = sum / num_of_elements;
    smallest_num = array[0];
    largest_num = array[num_of_elements - 1];

    if (num_of_elements % 2 == 1)
        median = array[num_of_elements / 2];
    else
        median = (array[num_of_elements / 2] + array[num_of_elements / 2 - 1]) / 2.0;

    counter = 1;
    while (array[counter] == smallest_num && counter < num_of_elements) {
        smallest_num_occurrence++;
        counter++;
    }

    counter = num_of_elements - 2;
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