#include <iostream>

using namespace std;

void computeSphere(float &v, float &s, float r)
{
    v = 4 / 3 * 3.14 * r * r * r;
    s = 4 * 3.14 * r * r;
}

int main()
{
    float volume, surfaceArea, radius;
    cout << "Enter radius of Sphere : ";
    cin >> radius;

    computeSphere(volume, surfaceArea, radius);

    cout << "Volume of Sphere : " << volume << endl
         << "Surface Area of Sphere : " << surfaceArea << endl;
    return 1;
}