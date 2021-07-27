#include <iostream>

using namespace std;

class Base
{
public:
    void print()
    {

        cout << "Printing from Base Class" << endl;
    }
};

class Derived : public Base
{

public:
    void print()
    {
        cout << "Printing from Derived Class" << endl;
    }
};

int main()
{

    Base *bptr, baseObj;
    bptr = &baseObj;
    bptr->print();
    //output:  Printing from Base Class

    Derived dObj;
    bptr = &dObj;
    bptr->print();
    //output: Printing from Base Class
}