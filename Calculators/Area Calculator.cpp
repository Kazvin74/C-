/*
Area Calculator
Created by Kazvin

References:
Area of Semicircle: https://www.easycalculation.com/area/area-semicircle-calculator.php
Area of Sector: https://thirdspacelearning.com/gcse-maths/geometry-and-measure/area-of-a-sector/
The rest: (search "[shape] area" on Google and the calculator in the top of search results)
*/

#include <iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
using namespace std;

int main() {
    const double Pi = 3.1415926535;
    double Area;
    cout << "Shapes:" << endl;
    cout << "C = Circle" << endl;
    cout << "SC = Semicircle" << endl;
    cout << "E = Ellipse" << endl;
    cout << "SE = Sector" << endl;
    cout << "T = Trapezoid" << endl;
    cout << "3 = Triangle" << endl;
    cout << "4 = Rectangle" << endl;
    cout << "5 = Pentagon" << endl;
    cout << "6 = Hexagon" << endl;
    cout << "7 = Heptagon" << endl;
    cout << "8 = Octagon" << endl;
    cout << "9 = Nonagon" << endl;
    cout << "10 = Decagon" << endl << endl;
    string Shape;
    cout << "Shape (ex. SC): ";
    cin >> Shape;
    int DecimalPlaces;
    cout << "Decimal Places: ";
    cin >> DecimalPlaces;
    cout << endl << "Shape: ";
    if (Shape == "C") {
        cout << "Circle" << endl;
        double Radius;
        cout << "Radius: ";
        cin >> Radius;
        Area = Pi * pow(Radius, 2);
    }
    else if (Shape == "SC") {
        cout << "Semicircle" << endl;
        double Radius;
        cout << "Radius: ";
        cin >> Radius;
        Area = Pi * pow(Radius, 2) * 0.5;
    }
    else if (Shape == "E") {
        cout << "Ellipse" << endl;
        double RadiusA, RadiusB;
        cout << "Radius A: ";
        cin >> RadiusA;
        cout << "Radius B: ";
        cin >> RadiusB;
        Area = Pi * RadiusA * RadiusB;
    }
    else if (Shape == "SE") {
        cout << "Sector" << endl;
        double Angle, Radius;
        cout << "Angle: ";
        cin >> Angle;
        cout << "Radius: ";
        cin >> Radius;
        Area = (Angle/360.0) * Pi * pow(Radius, 2);
    }
    else if (Shape == "T") {
        cout << "Trapezoid" << endl;
        double BaseA, BaseB, Height;
        cout << "Base A: ";
        cin >> BaseA;
        cout << "Base B: ";
        cin >> BaseB;
        cout << "Height: ";
        cin >> Height;
        Area = (BaseA + BaseB) * 0.5 * Height;
    }
    else if (Shape == "3") {
        cout << "Triangle" << endl;
        double Base, Height;
        cout << "Base: ";
        cin >> Base;
        cout << "Height: ";
        cin >> Height;
        Area = (Base * Height) * 0.5;
    }
    else if (Shape == "4") {
        cout << "Rectangle" << endl;
        double Base, Height;
        cout << "Base: ";
        cin >> Base;
        cout << "Height: ";
        cin >> Height;
        Area = (Base * Height);
    }
    else if (Shape == "5") {
        cout << "Pentagon" << endl;
        double Side;
        cout << "Side: ";
        cin >> Side;
        Area = 0.25 * (sqrt(5 * ( 5 + 2 * sqrt(5))) * pow(Side, 2));
    }
    else if (Shape == "6") {
        cout << "Hexagon" << endl;
        double Side;
        cout << "Side: ";
        cin >> Side;
        Area = (3 * sqrt(3)) * 0.5 * pow(Side, 2);
    }
    else if (Shape == "7") {
        cout << "Heptagon" << endl;
        double Side;
        cout << "Side: ";
        cin >> Side;
        Area = 3.6339124325 * pow(Side, 2);
    }
    else if (Shape == "8") {
        cout << "Octagon" << endl;
        double Side;
        cout << "Side: ";
        cin >> Side;
        Area = 2 * (1 + sqrt(2)) * pow(Side, 2);
    }
    else if (Shape == "9") {
        cout << "Nonagon" << endl;
        double Side;
        cout << "Side: ";
        cin >> Side;
        Area = 6.18182417 * pow(Side, 2);
    }
    else if (Shape == "10") {
        cout << "Decagon" << endl;
        double Side;
        cout << "Side: ";
        cin >> Side;
        Area = 2.5 * pow(Side, 2) * sqrt(5 + 2 * sqrt(5));
    }
    else {
        cout << "(Invalid Input)";
        return 0;
    }
    cout << "Area: " << fixed << setprecision(DecimalPlaces) << Area;
}
