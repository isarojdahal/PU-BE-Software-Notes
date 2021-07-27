#include <iostream>

using namespace std;

class Complex
{

private:
    int real, img;

public:
    void input()
    {

        cout << "Enter real and imaginary part : ";
        cin >> real >> img;
    }

    Complex operator*(Complex c)
    {
        Complex temp;
        temp.real = real * c.real;
        temp.img = img * c.img;

        return temp;
    }

    void display()
    {

        cout << "Real : " << real << " img : " << img;
    }
};

int main()
{
    Complex c1, c2;
    c1.input();
    c2.input();
    Complex result = c1 * c2;

    result.display();
}