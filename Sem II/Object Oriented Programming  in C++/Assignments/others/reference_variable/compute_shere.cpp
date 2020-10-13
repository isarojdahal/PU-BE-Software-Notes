#include <iostream>

using namespace std;

void computeSphere(float &v, float &s, float r)
{
    v = 4 / 3 * 3.14 * r * r * r;
    s = 4 * 3.14 * r * r;
}

int main()
{

    float v, s, r;
    cout << "Enter radius of sphere : ";
    cin >> r;

    computeSphere(v, s, r);

    cout << "Volume of sphere : " << v;

    cout << endl
         << "Surface Area of Sphere : " << s;

    return 1;
}