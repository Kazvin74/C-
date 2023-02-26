// Temperature Converter #2 (converts to all units)
#include <iostream>
using namespace std;

int main() {
    string input_unit;
    long double input_temperature, celsius, fahrenheit, kelvin, rankine, newton, reaumur, romer, delisle;
    cout << "C = Celsius" << endl;
    cout << "F = Fahrenheit" << endl;
    cout << "K = Kelvin" << endl;
    cout << "RA = Rankine" << endl;
    cout << "N = Newton" << endl;
    cout << "RE = Reaumur" << endl;
    cout << "RO = Romer" << endl;
    cout << "D = Delisle" << endl;
    cout << "__________" << endl << endl;
    cout << "Input Temperature: ";
    cin >> input_temperature;
    cout << "Input Unit: ";
    cin >> input_unit;
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
    fahrenheit = celsius * 1.8 + 32;
    kelvin = celsius + 273.15;
    rankine = celsius * 1.8 + 491.67;
    newton = celsius * 0.33;
    reaumur = celsius * 0.8;
    romer = celsius * 0.525 + 7.5;
    delisle = celsius * 1.5 - 100;
    cout << endl << "Celsius: " << celsius << endl;
    cout << "Fahrenheit: " << fahrenheit << endl;
    cout << "Kelvin: " << kelvin << endl;
    cout << "Rankine: " << rankine << endl;
    cout << "Newton: " << newton << endl;
    cout << "Reaumur: " << reaumur << endl;
    cout << "Romer: " << romer << endl;
    cout << "Delisle: " << delisle << endl;
}