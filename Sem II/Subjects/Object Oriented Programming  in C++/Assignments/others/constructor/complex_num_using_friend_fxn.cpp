// Define a class Complex. Write a program to add two complex
// numbers using friend function. Use constructor to initialize the objects

#include <iostream>

using namespace std;

class Complex
{
private:
    int realNumber, imgNumber;

public:
    Complex()
    {
    }

    Complex(int real, int img)
    {
        realNumber = real;
        imgNumber = img;
    }

    friend void addComplex(Complex, Complex);
};

void addComplex(Complex c1, Complex c2)
{
    cout << "Sum of two complex Number is : " << (c1.realNumber + c2.realNumber) << "+" << (c1.imgNumber + c2.imgNumber) << "i" << endl;
}

int main()
{
    Complex c1(1, 2), c2(2, 3);
    addComplex(c1, c2);
    return 1;
}