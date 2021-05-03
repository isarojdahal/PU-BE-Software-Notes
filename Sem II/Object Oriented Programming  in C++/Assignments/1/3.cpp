#include <iostream>

using namespace std;

class Base
{
public:
    virtual void work() = 0;
};

class Derived : public Base
{
public:
    void work()
    {
        cout << "Derived class is derived from the base class." << endl;
    }
};

int main()
{
    Base *b;
    //Base b;
    Derived d;
    b = &d;
    b->work();
    return 0;
}