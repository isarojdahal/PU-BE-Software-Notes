#include <iostream>

using namespace std;

double volume(double length) //Volume of Cube
{
    return length * length * length;
}

double volume(double radius, double height) //Volume of Cylinder
{
    return 3.14 * radius * radius * height;
}

double volume(double length, double breadth, double height) // Volume of Rectangular Box
{
    return length * breadth * height;
}

int main()
{
    cout << "Volume of cube : " << volume(12) << endl;
    cout << "Volume of Cylinder : " << volume(1, 10) << endl;
    cout << "Volume of Rectangular Box  : " << volume(1, 2, 3);
    return 1;
}