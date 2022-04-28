// Площадь круга и окружности.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    const float pi = 3.141592;
    float r, area, circumference;

    cout << "This program calculates the area of circle and the circumference. You only have to enter what the radius of the circle is:" << endl;

    cout << "Radius of the circle = ";
    cin >> r;

    area = pi * pow(r, 2);
    cout << "Area of the circle = " << area << endl;

    circumference = 2 * pi * r;
    cout << "The circumference = " << circumference << endl;
}
