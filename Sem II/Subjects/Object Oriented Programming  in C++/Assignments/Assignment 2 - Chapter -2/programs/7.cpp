/*
Q7. Write a program to swap private data of two classes using friend function.
*/

#include <iostream>

using namespace std;

class Second;
class First
{
    int a;

public:
    friend void swap(First, Second);
};

class Second
{
    int b;

public:
    friend void swap(First, Second);
};

void swap(First f, Second s)
{
    int temp;
    f.a = 10;
    s.b = 20;
    cout << "\nThe default value of";
    cout << "\na=" << f.a;
    cout << "\nb=" << s.b;

    //swaping
    temp = f.a;
    f.a = s.b;
    s.b = temp;
    cout << "\nNow the changed value of";
    cout << "\na=" << f.a;
    cout << "\nb=" << s.b;
}
int main()
{
    First f;
    Second s;
    swap(f, s);
    return 1;
}