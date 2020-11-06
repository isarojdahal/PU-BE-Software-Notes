/*Q4. Define a class named Complex with data members real and img. Use friendfunction to add two complex numbers.*/

#include <iostream>

using namespace std;
class Complex
{

private:
    int real, img;

public:
    void setData()
    {
        cout << "Enter real and imaginary number : ";
        cin >> real >> img;
    }
    friend void addComplex(Complex c1, Complex c2);
};

void addComplex(Complex c1, Complex c2)
{
    cout << "Sum of complex number is : " << (c1.real + c2.real) << " " << (c1.img + c2.img);
}

int main()
{
    Complex c1, c2;
    c1.setData();
    c2.setData();
    addComplex(c1, c2);
    return 1;
}