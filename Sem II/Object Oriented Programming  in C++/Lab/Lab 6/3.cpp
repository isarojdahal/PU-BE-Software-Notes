#include <iostream>

using namespace std;

class Complex
{

private:
    int real, img;

public:
    Complex()
    {
        this->real = 0;
        this->img = 0;
    }

    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    }

    void operator+(Complex c)
    {
        this->real += c.real;
        this->img += c.img;
    }
    void operator-(Complex c)
    {
        this->real -= c.real;
        this->img -= c.img;
    }
    void operator*(Complex c)
    {
        this->real *= c.real;
        this->img *= c.img;
    }

    void display()
    {
        cout << endl
             << "real : " << this->real << " img : " << this->img;
    }
};

int main()
{

    int a, b;

    int sum = a + b;

    // Complex c1(1, 2), c2(1, 2);
    // c1 + c2;
    // c1.display();
    // c1 - c2;
    // c1.display();
    // c1 *c2;
    // c1.display();

    // return 1;
}
