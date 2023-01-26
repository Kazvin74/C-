/*
Area Calculator by Kazvin

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

int main () {

    double Area, Radius, RadiusA, RadiusB, Angle, Base, BaseA, BaseB, Height, Side, Pi = 3.1415926535;
    int DecimalPlaces;
    string Shape;

    cout << "Shapes:" << endl << "C = Circle" << endl << "SC = Semicircle" << endl;
    cout << "E = Ellipse" << endl << "SE = Sector" << endl << "T = Trapezoid" << endl;
    cout << "3 = Triangle" << endl << "4 = Rectangle" << endl << "5 = Pentagon" << endl;
    cout << "6 = Hexagon" << endl << "7 = Heptagon" << endl << "8 = Octagon" << endl;
    cout << "9 = Nonagon" << endl << "10 = Decagon" << endl << endl;

    cout << "Shape (ex. SC): ";
    cin >> Shape;
    cout << "Decimal Places: ";
    cin >> DecimalPlaces;

    cout << endl;

    if (Shape == "C") {
        cout << "Radius: ";
        cin >> Radius;
        Area = Pi * pow(Radius, 2);
    }
    else if (Shape == "SC") {
        cout << "Radius: ";
        cin >> Radius;
        Area = Pi * pow(Radius, 2) * 0.5;
    }
    else if (Shape == "E") {
        cout << "Radius A: ";
        cin >> RadiusA;
        cout << "Radius B: ";
        cin >> RadiusB;
        Area = Pi * RadiusA * RadiusB;
    }
    else if (Shape == "SE") {
        cout << "Angle: ";
        cin >> Angle;
        cout << "Radius: ";
        cin >> Radius;
        Area = (Angle/360.0) * Pi * pow(Radius, 2);
    }
    else if (Shape == "T") {
        cout << "Base A: ";
        cin >> BaseA;
        cout << "Base B: ";
        cin >> BaseB;
        cout << "Height: ";
        cin >> Height;
        Area = (BaseA + BaseB) * 0.5 * Height;
    }
    else if (Shape == "3") {
        cout << "Base: ";
        cin >> Base;
        cout << "Height: ";
        cin >> Height;
        Area = (Base * Height) * 0.5;
    }
    else if (Shape == "4") {
        cout << "Base: ";
        cin >> Base;
        cout << "Height: ";
        cin >> Height;
        Area = (Base * Height);
    }
    else if (Shape == "5" || Shape == "6" || Shape == "7" || Shape == "8" || Shape == "9" || Shape == "10") {
        cout << "Side: ";
        cin >> Side;
        if (Shape == "5")
            Area = 0.25 * (sqrt(5 * ( 5 + 2 * sqrt(5))) * pow(Side, 2));
        else if (Shape == "6")
            Area = (3 * sqrt(3)) * 0.5 * pow(Side, 2);
        else if (Shape == "7")
            Area = 3.6339124325 * pow(Side, 2);
        else if (Shape == "8")
            Area = 2 * (1 + sqrt(2)) * pow(Side, 2);
        else if (Shape == "9")
            Area = 6.18182417 * pow(Side, 2);
        else if (Shape == "10")
            Area = 2.5 * pow(Side, 2) * sqrt(5 + 2 * sqrt(5));
    }
    else {
        cout << "Invalid Input";
        return 0;
    }

    cout << "Area: " << fixed << setprecision(DecimalPlaces) << Area;

}