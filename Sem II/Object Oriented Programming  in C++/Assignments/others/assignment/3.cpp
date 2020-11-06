// Q3.  Define  a  class  named  Complex  with data  members  real  and  img.  Use appropriate member function of the class which accepts two objects of the class and addsthem.

#include <iostream>

using namespace std;
class Complex
{

public:
    int real, img;

    void getData()
    {

        cout << "Enter real and imaginary value : ";
        cin >> real >> img;
    }

    void addData(Complex c1, Complex c2)
    {

        cout << " The sum of two complex number is : " << (c1.real + c2.real) << " " << (c1.img + c2.img) << endl;
    }
};

int main()
{
    Complex c1, c2, obj;

    c1.getData();
    c2.getData();
    obj.addData(c1, c2);

    return 1;
}