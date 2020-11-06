#include <iostream>

using namespace std;

inline int square(int a)
{
    return a * a;
}
int main()
{

    int num;
    cout << "Enter a number : ";
    cin >> num;

    int result = square(num);
    cout << "Square of " << num << "is " << result;

    return 1;
}