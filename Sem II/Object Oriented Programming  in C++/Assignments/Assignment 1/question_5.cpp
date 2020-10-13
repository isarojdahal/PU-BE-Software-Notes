#include <iostream>

#define RATE 1.5
using namespace std;

int main()
{

    float principal, time;

    cout << "Enter Principal and Time : ";
    cin >> principal >> time;

    cout << "Simple Interest is " << (principal * time * RATE) / 100;

    return 1;
}