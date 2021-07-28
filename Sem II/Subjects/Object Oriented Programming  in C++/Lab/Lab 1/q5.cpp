// Write a program to represent a Circle. Include member function to perform the following task:
// a. Calculate area of the circle.
// b. Calculate perimeter of the circle.

#define PI 3.14
#include <iostream>

using namespace std;

class Circle
{

    int radius;

public:
    void inputRadius()
    {

        cout << "Enter radius of circle : ";
        cin >> radius;
    }
    void calculateArea()
    {
        cout << endl
             << "Area of circle is : " << (PI * radius * radius);
    }

    void calculatePerimeter()
    {
        cout << endl
             << "Perimeter of Circle is : " << (2 * PI * radius);
    }
};

int main()
{
    Circle circle;
    circle.inputRadius();
    circle.calculateArea();
    circle.calculatePerimeter();

    return 1;
}