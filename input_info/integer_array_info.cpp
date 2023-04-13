// Integer Array Info

#include <iostream>
using namespace std;

int main() {

    int length, smallest_num, largest_num;
    int smallest_num_occurrence = 0, largest_num_occurrence = 0;
    long double sum = 0, average, median;

    cout << "Number of elements: ";
    cin >> length;

    int array[length];
    cout << "Array: ";

    for (int counter = 0; counter < length; counter++)
        cin >> array[counter];

    for (int counter = 0; counter < length; counter++)
        sum += array[counter];

    average = sum / length;
    smallest_num = array[0];
    largest_num = array[0];

    for (int counter = 0; counter < length; counter++) {
        if (smallest_num > array[counter]) {
            smallest_num = array[counter];
            smallest_num_occurrence = 1;
        }
        else if (smallest_num == array[counter])
            smallest_num_occurrence++;
        if (largest_num < array[counter]) {
            largest_num = array[counter];
            largest_num_occurrence = 1;
        }
        else if (largest_num == array[counter])
            largest_num_occurrence++;
    }

    int key, current_index;
    for (int counter = 1; counter < length; counter++) {
	    key = array[counter];
	    current_index = counter - 1;
	    while (current_index >= 0 && array[current_index] > key) {
	        array[current_index + 1] = array[current_index];
		    current_index = current_index - 1;
	    }
	    array[current_index + 1] = key;
    }

    if (length % 2 == 1)
        median = array[length / 2];
    else
        median = (array[length / 2] + array[length / 2 - 1]) / 2.0;

    cout << endl << "Sum: " << sum << endl << "Average: " << average << endl;
    cout << "Median: " << median << endl << endl;
    cout << "Smallest Number: " << smallest_num << endl;
    cout << "Occurrences: " << smallest_num_occurrence << endl << endl;
    cout << "Largest Number: " << largest_num << endl;
    cout << "Occurrences: " << largest_num_occurrence;

    return 0;

}