#include <iostream>

using namespace std;

class Base
{

private:
    int xSum, ySum;

public:
    int x1, x2, y1, y2;
    void input()
    {
        cout << "Enter coordinate of first vector (x1,y1) : ";
        cin >> x1 >> y1;
        cout << "Enter coordinate of second vector (x2,y2) : ";
        cin >> x2 >> y2;
    }

    void setXSum(int sum)
    {
        xSum = sum;
    }

    void setYSum(int sum)
    {
        ySum = sum;
    }

    friend void display(Base b);
};

class Derived : public Base
{

public:
    void add_vector(Base b)
    {
        setXSum(b.x1 + b.x2);
        setYSum(b.y1 + b.y2);
    }
};

void display(Base b)
{
    cout << "Sum is : (" << b.xSum << "," << b.ySum << ")";
}

int main()
{

    Base b;
    b.input();

    Derived d;
    d.add_vector(b);

    display(b);

    return 1;
}