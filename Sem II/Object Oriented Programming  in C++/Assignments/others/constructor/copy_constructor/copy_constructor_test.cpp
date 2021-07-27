//program to demonstrate, when the copy constructor gets executed.

#include <iostream>

using namespace std;

class MyClass
{

public:
    MyClass()
    {

        cout << "Default COnstructor called";
    }

    MyClass(int x)
    {

        cout << "Parametrized Constructor Called";
    }
    MyClass(MyClass &obj)
    {
        cout << "Copy Construcor called";
    }

    MyClass doSomething()
    {
        MyClass temp;
        cout << "do something called";

        return temp;
    }
};

int main()
{
    MyClass obj;
    cout << endl
         << "=========" << endl;
    MyClass obj2(10);
    cout << endl
         << "=========" << endl;

    MyClass obj3 = obj;

    cout << endl
         << "=========" << endl;

    MyClass obj4(obj2);

    cout << endl
         << "=========" << endl;

    MyClass obj5;
    obj5.doSomething();

    return 0;
}
