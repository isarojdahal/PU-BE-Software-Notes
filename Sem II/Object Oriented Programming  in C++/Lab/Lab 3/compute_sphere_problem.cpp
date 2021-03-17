// Write and test the following computeSphere() function that returns the volume v and surface area s of a sphere with the given radius.
// void computeSphere(float &v,float &s,float r);

#include <iostream>

using namespace std;

void computeSphere(float &v, float &s, float r)
{
    v = 4 / 3 * 3.14 * r * r * r;
    s = 4 * 3.14 * r * r;
}

int main()
{

    float radius, volumeOfSphere, surfaceOfSphere;
    cout << "Enter radius of sphere : ";
    cin >> radius;

    computeSphere(volumeOfSphere, surfaceOfSphere, radius);

    cout << endl
         << "Volume of sphere : " << volumeOfSphere;
    cout << endl
         << "Surface Area of sphere : " << surfaceOfSphere;

    return 1;
}