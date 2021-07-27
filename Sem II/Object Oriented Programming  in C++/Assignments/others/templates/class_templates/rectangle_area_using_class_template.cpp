#include <iostream>

using namespace std;

template <typename T>
class Rectangle
{

    T length, breadth;

public:
    Rectangle()
    {
    }

    Rectangle(T x, T y)
    {
        this->length = x;
        this->breadth = y;
    }

    T calculateArea()
    {

        return length * breadth;
    }
};

int main()
{
    Rectangle<int> obj1(2, 3);
    cout << "Area : " << obj1.calculateArea() << endl;

    Rectangle<float> obj2(2, 3);
    cout << "Area : (Float) : " << obj2.calculateArea();

    return 1;
}