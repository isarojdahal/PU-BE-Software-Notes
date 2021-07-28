#include <iostream>

using namespace std;

int max(int a, int b)
{

    return (a > b) ? a : b;
}

int max(int a, int b, int c)
{

    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}

int main()
{
    cout << "Max is : " << max(2, 3);
    cout << "Max is : " << max(2, 3, 6);
    return 1;
}