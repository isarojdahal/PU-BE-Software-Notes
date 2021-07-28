#include <iostream>
using namespace std;

class A
{

public:
    void methodOfA()
    {
        cout << "A method" << endl;
    }
};

class B : public A
{
public:
    void methodOfB()
    {
        cout << "B method" << endl;
    }
};

class C : public B
{
public:
    void methodOfC()
    {
        cout << "C method" << endl;
    }
};

int main()
{
    C obj;
    obj.methodOfA();
    obj.methodOfB();
    obj.methodOfC();

    return 1;
}