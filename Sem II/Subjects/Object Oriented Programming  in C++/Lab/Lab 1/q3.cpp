// Create a class Point that represents a three dimensional coordinate system. Each object of Point should have coordinates (x,y,z) and methods to assign coordinates to the point objects. Add a method to calculate the distance from origin and to print the point in the form of (x,y,z).

#include <iostream>
#include <cmath>

using namespace std;

class Point
{

public:
    int x, y, z;
    void input()
    {
        cout << "Enter coordinate for x y and z : ";
        cin >> x >> y >> z;
    }

    void display()
    {

        cout << endl
             << "Given Cooridnate : (" << x << "," << y << "," << z << ")";
    }
    void calculateDistance()
    {
        cout << endl
             << "Distance from origin is : " << pow(x * x + y * y + z * z, 0.5);
    }
};

int main()
{
    Point point;
    point.input();
    point.display();
    point.calculateDistance();

    return 1;
}