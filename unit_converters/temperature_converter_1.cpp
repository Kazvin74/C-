/*
Temperature Converter #1 (converts to one unit only)

Link:
Formulas: https://www.metric-conversions.org/temperature/[input_unit]-to-[output_unit].htm
*/

#include <iostream>
using namespace std;

int main() {

    string input_unit, output_unit;
    long double input_temperature, output_temperature, celsius;

    cout << "C = Celsius" << endl;
    cout << "F = Fahrenheit" << endl;
    cout << "K = Kelvin" << endl;
    cout << "RA = Rankine" << endl;
    cout << "N = Newton" << endl;
    cout << "RE = Reaumur" << endl;
    cout << "RO = Romer" << endl;
    cout << "D = Delisle" << endl;

    cout << endl << "Input Unit: ";
    cin >> input_unit;

    while (!(input_unit == "C" || input_unit == "F" || input_unit == "K" ||
            input_unit == "RA" || input_unit == "N" || input_unit == "RE" ||
            input_unit == "RO" || input_unit == "D")) {
        cout << "\033[31mInvalid input, please try again\033[0m" << endl << endl;
        cout << "Input Unit: ";
        cin >> input_unit;
    }

    cout << "Input Temperature: ";
    cin >> input_temperature;

    cout << endl << "Output Unit: ";
    cin >> output_unit;

    while (!(output_unit == "C" || output_unit == "F" || output_unit == "K" ||
            output_unit == "RA" || output_unit == "N" || output_unit == "RE" ||
            output_unit == "RO" || output_unit == "D")) {
        cout << "\033[31mInvalid input, please try again\033[0m" << endl << endl;
        cout << "Output Unit: ";
        cin >> output_unit;
    }

    if (input_unit == "C")
        celsius = input_temperature;
    else if (input_unit == "F")
        celsius = (input_temperature - 32) / 1.8;
    else if (input_unit == "K")
        celsius = input_temperature - 273.15;
    else if (input_unit == "RA")
        celsius = (input_temperature - 491.67) / 1.8;
    else if (input_unit == "N")
        celsius = input_temperature / 0.33;
    else if (input_unit == "RE")
        celsius = input_temperature / 0.8;
    else if (input_unit == "RO")
        celsius = (input_temperature - 7.5) / 0.525;
    else if (input_unit == "D")
        celsius = (input_temperature + 100) / 1.5;

    if (output_unit == "C")
        output_temperature = celsius;
    else if (output_unit == "F")
        output_temperature = celsius * 1.8 + 32;
    else if (output_unit == "K")
        output_temperature = celsius + 273.15;
    else if (output_unit == "RA")
        output_temperature = celsius * 1.8 + 491.67;
    else if (output_unit == "N")
        output_temperature = celsius * 0.33;
    else if (output_unit == "RE")
        output_temperature = celsius * 0.8;
    else if (output_unit == "RO")
        output_temperature = celsius * 0.525 + 7.5;
    else if (output_unit == "D")
        output_temperature = celsius * 1.5 - 100;

    cout << "Output Temperature: " << output_temperature;

    return 0;

}