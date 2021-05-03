#include <iostream>
#include <cmath>

#define PI 3.14

using namespace std;

class Volume
{
public:
    //rectangle
    float calculateVolume(float length, float breadth, float height)
    {

        return length * breadth * height;
    }

    //sphere
    float calculateVolume(float radius)
    {
        return (4 / 3) * PI * pow(radius, 3);
    }

    //cylinder
    float calculateVolume(float radius, float height)
    {

        return PI * pow(radius, 2) * height;
    }
};

int main()
{
    Volume volume;

    float length, breadth, height, sphereRadius, cylinderRadius, cylinderHeight;
    cout << endl
         << "Enter length, breadth and height of rectangular box : ";
    cin >> length >> breadth >> height;

    cout << endl
         << "Enter radius of sphere : ";
    cin >> sphereRadius;

    cout << endl
         << "Enter radius and height of cylinder : ";
    cin >> cylinderRadius >> cylinderHeight;

    cout << endl
         << endl;

    cout << "Volume of rectangle : " << volume.calculateVolume(length, breadth, height) << endl;
    cout << "Volume of sphere : " << volume.calculateVolume(sphereRadius) << endl;
    cout << "Volume of cylinder : " << volume.calculateVolume(cylinderRadius, cylinderHeight) << endl;

    return 1;
}