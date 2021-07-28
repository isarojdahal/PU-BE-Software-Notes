#include <iostream>

using namespace std;

template <typename T>
void swapData(T a, T b)
{

    cout << endl
         << "Before Swapping : " << a << "," << b;
    T temp;
    temp = a;
    a = b;
    b = temp;

    cout << endl
         << "After Swapping : " << a << "," << b << endl
         << endl;
}

int main()
{

    float a = 12.0, b = 12.32;
    swapData<float>(a, b);
    swapData<int>(12, 14);
    swapData<char>('a', 'd');
}