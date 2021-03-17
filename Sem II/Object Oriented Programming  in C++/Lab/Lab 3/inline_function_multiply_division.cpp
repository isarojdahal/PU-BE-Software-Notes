// Write a program using inline function to calculate the multiplication and divison of two input given by user.

#include <iostream>

using namespace std;

inline void doMultiply(int a, int b)
{
    cout << endl
         << "Product is : " << (a * b);
}

inline void doDivision(int a, int b)
{
    cout << endl
         << "Division is : " << (float)(a / b);
}
int main()
{

    int a, b;
    cout << "Enter any two numbers : ";
    cin >> a >> b;

    doMultiply(a, b);
    doDivision(a, b);

    return 1;
}