#include <iostream>

using namespace std;

inline int volumeOfSquare(int side)
{
    return side * side * side;
}

int main()
{

    int side;
    cout << "Enter a side of cube : ";
    cin >> side;

    int result = volumeOfSquare(side);
    cout << "Volume  of cube having side " << side << "is " << result;

    return 1;
}