// Write a program using inline function to calculate the square of a number.

#include <iostream>

using namespace std;

inline void doSquare(int num)
{
    cout << "Square is : " << (num * num);
}
int main()
{

    int number;
    cout << "Enter a number : ";
    cin >> number;

    doSquare(number);

    return 1;
}