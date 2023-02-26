/*
Area Calculator

References:
area of Semicircle: https://www.easycalculation.com/area/area-semicircle-calculator.php
area of Sector: https://thirdspacelearning.com/gcse-maths/geometry-and-measure/area-of-a-sector/
The rest: (search "[shape] area" on Google and the calculator on the top of search results)
*/

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
using namespace std;

int main () {
    double area, radius, radius_1, radius_2, angle, base, base_1, base_2, height, side, pi = 3.1415926535;
    int decimal_places;
    string shape;
    cout << "Shapes:" << endl << "C = Circle" << endl << "SC = Semicircle" << endl;
    cout << "E = Ellipse" << endl << "SE = Sector" << endl << "T = Trapezoid" << endl;
    cout << "3 = Triangle" << endl << "4 = Rectangle" << endl << "5 = Pentagon" << endl;
    cout << "6 = Hexagon" << endl << "7 = Heptagon" << endl << "8 = Octagon" << endl;
    cout << "9 = Nonagon" << endl << "10 = Decagon" << endl << endl;
    cout << "Shape (ex. SC): ";
    cin >> shape;
    cout << "Decimal Places: ";
    cin >> decimal_places;
    cout << endl;
    if (shape == "C") {
        cout << "Radius: ";
        cin >> radius;
        area = pi * pow(radius, 2);
    }
    else if (shape == "SC") {
        cout << "Radius: ";
        cin >> radius;
        area = pi * pow(radius, 2) * 0.5;
    }
    else if (shape == "E") {
        cout << "Radius A: ";
        cin >> radius_1;
        cout << "Radius B: ";
        cin >> radius_2;
        area = pi * radius_1 * radius_2;
    }
    else if (shape == "SE") {
        cout << "Angle: ";
        cin >> angle;
        cout << "Radius: ";
        cin >> radius;
        area = (angle/360.0) * pi * pow(radius, 2);
    }
    else if (shape == "T") {
        cout << "Base A: ";
        cin >> base_1;
        cout << "Base B: ";
        cin >> base_2;
        cout << "Height: ";
        cin >> height;
        area = (base_1 + base_2) * 0.5 * height;
    }
    else if (shape == "3") {
        cout << "Base: ";
        cin >> base;
        cout << "Height: ";
        cin >> height;
        area = (base * height) * 0.5;
    }
    else if (shape == "4") {
        cout << "Base: ";
        cin >> base;
        cout << "Height: ";
        cin >> height;
        area = (base * height);
    }
    else if (shape == "5" || shape == "6" || shape == "7" || shape == "8" || shape == "9" || shape == "10") {
        cout << "Side: ";
        cin >> side;
        if (shape == "5")
            area = 0.25 * (sqrt(5 * ( 5 + 2 * sqrt(5))) * pow(side, 2));
        else if (shape == "6")
            area = (3 * sqrt(3)) * 0.5 * pow(side, 2);
        else if (shape == "7")
            area = 3.6339124325 * pow(side, 2);
        else if (shape == "8")
            area = 2 * (1 + sqrt(2)) * pow(side, 2);
        else if (shape == "9")
            area = 6.18182417 * pow(side, 2);
        else if (shape == "10")
            area = 2.5 * pow(side, 2) * sqrt(5 + 2 * sqrt(5));
    }
    else {
        cout << "Invalid Input";
        return 0;
    }
    cout << "Area: " << fixed << setprecision(decimal_places) << area;
}