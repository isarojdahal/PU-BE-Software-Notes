#include <iostream>
#include <cmath>

using namespace std;

class Point
{

public:
    int x, y, z;
    void setDistance();
    void calculateDistance();
};

void Point::setDistance()
{

    cout << "Enter coordinate x,y,z values : ";
    cin >> x >> y >> z;
}

void Point::calculateDistance()
{

    cout << "Distance from origin is : " << sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2)) << endl;
}

int main()
{
    Point point;
    point.setDistance();
    point.calculateDistance();
}