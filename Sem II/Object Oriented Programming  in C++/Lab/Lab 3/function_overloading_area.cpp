// Write a program to find the area of cube,cylinder and rectangle using the concept of function overloading.

#include <iostream>

using namespace std;

void area(float length)
{
    cout << "Area of cube : " << (6 * length);
}

void area(float radius, float height)
{
    cout << "Area of cylinder : " << (3.14 * radius * height);
}

void area(float length, int breadth)
{
    cout << "Area of rectangle : " << (length * breadth);
}
int main()
{

    float cubeLength;
    cout << "Enter length of cube : ";
    cin >> cubeLength;
    area(cubeLength);

    float radius, height;
    cout << endl
         << "Enter radius and height of Cylinder : ";
    cin >> radius >> height;
    area(radius, height);

    float length;
    int breadth;
    cout << endl
         << "Enter length and breadth of rectangle : ";
    cin >> length >> breadth;
    area(length, breadth);

    return 1;
}