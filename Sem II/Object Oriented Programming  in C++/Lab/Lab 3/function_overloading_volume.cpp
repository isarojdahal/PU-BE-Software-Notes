//Write a program  to find the volume of 3 objects namely cube, cylinder and rectangular box using the same function name : volume()

#include <iostream>

using namespace std;

void volume(float length)
{

    cout << endl
         << "Volume of cube : " << (length * length * length);
}

void volume(float radius, float height)
{
    cout << endl
         << "Volume of cylinder : " << (3.14 * radius * radius * height);
}

void volume(float length, float breadth, float height)
{
    cout << endl
         << "Volume of rectangular box : " << (length * breadth * height);
}

int main()
{

    float cubeLength;
    cout << endl
         << endl
         << "Enter length of cube : ";
    cin >> cubeLength;
    volume(cubeLength);

    float radius, cylinderHeight;
    cout << endl
         << endl
         << "Enter radius and height of cylinder : ";
    cin >> radius >> cylinderHeight;
    volume(radius, cylinderHeight);

    float length, breadth, height;
    cout << endl
         << endl
         << "Enter rectangular box length,breadth and height : ";
    cin >> length >> breadth >> height;
    volume(length, breadth, height);
    return 1;
}