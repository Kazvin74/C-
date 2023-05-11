// String Array Info

#include <iostream>
#include <string>
using namespace std;

int main() {

    long long num_of_elements, sum_of_characters = 0, shortest_string_length, longest_string_length;
    string shortest_string, longest_string;

    cout << "Number of elements: ";
    cin >> num_of_elements;

    string array[num_of_elements];
    cout << endl << "Array: " << endl;

    for (long long counter = 0; counter < num_of_elements; counter++)
        cin >> array[counter];

    for (long long counter = 0; counter < num_of_elements; counter++)
        sum_of_characters += array[counter].length();

    shortest_string = array[0];
    shortest_string_length = array[0].length();
    for (long long counter = 1; counter < num_of_elements; counter++) {
        if (shortest_string_length > array[counter].length()) {
            shortest_string = array[counter];
            shortest_string_length = array[counter].length();
        }
        else if (shortest_string_length == array[counter].length()) {
            shortest_string += ", " + array[counter];
            shortest_string_length = array[counter].length();
        }
    }

    longest_string = array[0];
    longest_string_length = array[0].length();
    for (long long counter = 1; counter < num_of_elements; counter++) {
        if (longest_string_length < array[counter].length()) {
            longest_string = array[counter];
            longest_string_length = array[counter].length();
        }
        else if (longest_string_length == array[counter].length()) {
            longest_string += ", " + array[counter];
            longest_string_length = array[counter].length();
        }
    }

    cout << endl << "Sum of characters: " << sum_of_characters << endl << endl;
    cout << "Shortest String/s: " << shortest_string << endl << "Length: " << shortest_string_length << endl << endl;
    cout << "Longest String/s: " << longest_string << endl << "Length: " << longest_string_length;

    return 0;

}