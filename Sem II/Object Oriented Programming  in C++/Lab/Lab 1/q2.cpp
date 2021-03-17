// Write a program to implement this class. The program should include the following:
// a. Define Rational object x.
// b. Assign 22/7 to x
// c. Print the object's value as a rational number (22/7)
// d. Print the same rational number as a real number
// e. Invert x, such that x is 1/x
// f. Repeat the process c and d
// g. Check if you can print num and den of x from outside

#include <iostream>

using namespace std;

class Rational
{

private:
    int num, den;

public:
    void input(int p, int q)
    {

        num = p;
        den = q;
    }

    void display()
    {
        cout << endl
             << "Given rational number is : " << num << "/" << den;
    }

    void displayAsReal()
    {
        cout << endl
             << "Real number : " << (num / den);
    }

    void invertRational()
    {

        cout << endl
             << "Inverted Rational number : " << den << "/" << num;
    }
};

int main()
{
    Rational x;
    x.input(22, 7);
    x.display();
    x.displayAsReal();
    x.invertRational();
    x.input(9, 11);
    cout << endl;
    x.display();

    return 1;
}