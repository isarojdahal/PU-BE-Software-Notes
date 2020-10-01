#include <iostream>

using namespace std;

int main()
{

    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;

    (a > b) ? cout << a << " is greater" : cout << b << " is greater";
}