#include <iostream>

using namespace std;

template <typename T>

void findMax(T a, T b, T c)
{
    if (a > b && a > c)
        cout << a << " is maximum" << endl;
    else if (b > c)
        cout << b << " is maximum" << endl;
    else
        cout << c << " is maximum" << endl;
}

int main()
{
    findMax(1, 2, 3);
    findMax(1.2, 2.3, 2.1);
    findMax('a', 's', 'p');

    return 1;
}