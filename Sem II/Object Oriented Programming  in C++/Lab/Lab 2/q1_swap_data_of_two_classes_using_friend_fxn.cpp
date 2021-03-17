// Write a program to swap data members of two classes by making member function of one class as friend function in another class.

#include <iostream>
using namespace std;

class B;

class A
{

private:
    int a1, a2;

public:
    void swapNumbers(A &, B &);
    void input()
    {
        cout << "Enter value of a1 and a2 : ";
        cin >> a1 >> a2;
    }

    void display()
    {
        cout << "Value of a1 and a2 : " << a1 << " and " << a2 << endl;
    }
};

class B
{

private:
    int b1, b2;
    friend void A::swapNumbers(A &, B &);

public:
    void input()
    {
        cout << "Enter value of b1 and b2 : ";
        cin >> b1 >> b2;
    }

    void display()
    {
        cout << "Value of b1 and b2 : " << b1 << " and " << b2 << endl;
    }
};

void A ::swapNumbers(A &objA, B &objB)
{
    int temp = objA.a1;
    objA.a1 = objB.b1;
    objB.b1 = temp;

    temp = objA.a2;
    objA.a2 = objB.b2;
    objB.b2 = temp;
}

int main()
{
    A objA;
    B objB;

    objA.input();
    objB.input();

    cout << endl
         << "Before swaping : " << endl;
    objA.display();
    objB.display();

    objA.swapNumbers(objA, objB);
    cout << endl
         << "After swaping : " << endl;
    objA.display();
    objB.display();

    return 1;
}