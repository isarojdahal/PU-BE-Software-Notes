#include <iostream>

using namespace std;

class Dervied;
class ThirdClass;
class Base
{
protected:
    int r1, i1;

    void inputComplex()
    {
        cout << "Enter real and imaginary part of complex number : ";
        cin >> r1 >> i1;
    }
};

class Derived : public Base
{

    friend class ThirdClass;

public:
    int r2, i2;
    void inputComplex2()
    {

        inputComplex();
        cout << "Enter real and imaginary part of another complex number : ";
        cin >> r2 >> i2;
    }

    void addComplex()
    {
        cout << endl
             << "Sum : " << (r1 + r2) << " " << (i1 + i2) << "i";
    }

    int getReal()
    {

        return r2;
    }

    int getImaginary()
    {

        return i2;
    }
};

class ThirdClass
{
private:
    int r3 = 1, i3 = 4;

public:
    void diffComplex()
    {
        cout << "Difference is " << (r3 - Derived.r2) << " " << (i3 - Derived.getImaginary());
    }
};
int main()
{

    return 1;
}