// Write a program to calculate Simple Interest using default value of r =1.5%. Ask the user for principal amount and time (I = PTR/100)

#include <iostream>

using namespace std;

float calculateSI(float principal, float time)
{

    float rate = 1.5;

    return (principal * time * rate) / 100;
}
int main()
{
    float principal, time;
    cout << "Enter Principal and time : ";
    cin >> principal >> time;

    cout << endl
         << "Simple Interest is : " << calculateSI(principal, time);
    return 1;
}