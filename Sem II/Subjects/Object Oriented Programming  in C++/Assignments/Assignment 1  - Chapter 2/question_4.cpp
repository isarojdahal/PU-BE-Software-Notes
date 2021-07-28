#include <iostream>

using namespace std;

inline float multiplication(float num1, float num2)
{

    return num1 * num2;
}

inline float divison(float num1, float num2)
{

    return num1 / num2;
}

int main()
{
    float num1, num2;
    cout << "Enter two numbers : ";
    cin >> num1 >> num2;

    cout << "Multiplication is : " << multiplication(num1, num2) << " and Division is : " << divison(num1, num2);

    return 1;
}