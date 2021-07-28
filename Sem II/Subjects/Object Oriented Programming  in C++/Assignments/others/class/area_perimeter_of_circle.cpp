#include <iostream>

#define PI 3.14

using namespace std;

class Circle
{

public:
    float radius;
    void input();
    void calculateArea();
    void calculateSurface();
};

void Circle::input()
{

    cout << "Enter radius of circle : ";
    cin >> radius;
}

void Circle::calculateArea()
{

    cout << "Area of circle is " << PI * radius * radius;
}

void Circle::calculateSurface()
{

    cout << endl
         << "Circumference of Circle : " << 2 * PI * radius;
}
int main()
{
    Circle circle;
    circle.input();
    circle.calculateArea();
    circle.calculateSurface();
    return 1;
}