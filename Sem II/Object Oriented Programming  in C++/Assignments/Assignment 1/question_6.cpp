#include <iostream>

using namespace std;

void maximum(int a, int b)
{

    (a > b) ? cout << a << " is maximum" : cout << b << " is maximum";
}

void maximum(int a, int b, int c)
{

    if (a > b && a > c)
        cout << a << " is maximum";
    else if (b > a && b > c)
        cout << b << " is maximum";
    else
        cout << c << " is maximum";
}
int main()
{
    maximum(1, 2);
    maximum(1, 2, 3);
    return 1;
}