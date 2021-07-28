#include <iostream>

using namespace std;

class Complex
{

    int real, img;

public:
    Complex(int real, int img)
    {

        this->real = real;
        this->img = img;
    }

    void display()
    {

        cout << "real : " << real << "\t imaginary : " << img;
    }

    //operator function as member function
    Complex operator-(Complex complex)
    {

        real = -complex.real;
        img = -complex.img;
        return *this;
    }
    // friend Complex operator-(Complex complex);
};

// as a friend function
// Complex operator-(Complex complex)
// {

//     complex.real = -complex.real;
//     complex.img = -complex.img;
//     return complex;
// }
int main()
{
    Complex complexOne(1, 2), complexTwo(3, 9);
    cout << "Before overloading " << endl;
    complexOne.display();

    complexTwo = complexOne.operator-(complexOne);
    complexTwo = -complexOne(complexOne);
    cout << endl
         << "After overloading " << endl;
    complexTwo.display();

    return 1;
}