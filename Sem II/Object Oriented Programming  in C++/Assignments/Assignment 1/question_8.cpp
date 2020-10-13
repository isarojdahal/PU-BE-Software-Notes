#include <iostream>

using namespace std;

#define PI 3.14

double area(double length) //Area of Cube
{
    return 6 * length * length;
}

double area(double radius, int height) //Area of Cylinder
{
    return 2 * PI * radius * height;
}

double area(double length, double breadth) // Area of Rectangle
{
    return length * breadth;
}

int main()
{
    cout << "Area of cube : " << area(12) << endl;
    cout << "Area of Cylinder : " << area(1, 10) << endl;
    cout << "Area of Rectangular Box  : " << area(10, 20);
    return 1;
}