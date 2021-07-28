// Create a class called Mountain with data member height. Write a program to compare the height of given Mountain object and display the maximum one.

#include <iostream>

using namespace std;

class Mountain
{

private:
    int height;

public:
    void input()
    {
        cout << "Enter Mountain height : ";
        cin >> height;
        cout << endl;
    }
    void compareHeight(Mountain);
};

void Mountain::compareHeight(Mountain m)
{
    if (height > m.height)
        cout << "Mountain 1 height is greater";
    else
        cout << "Mountain 2 height is greater";
}
int main()
{
    Mountain m1, m2;
    m1.input();
    m2.input();
    m1.compareHeight(m2);

    return 1;
}