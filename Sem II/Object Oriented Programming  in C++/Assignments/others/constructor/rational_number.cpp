// Write a program to define a class Rational. Use constructor to
// initialize the values of data members of object (i.e num and denum)
// and display the rational number. Use appropriate member functions as
// required.

#include <iostream>

using namespace std;

class Rational
{

public:
    int numerator, denominator;
    Rational(int num, int denum)
    {
        numerator = num;
        denominator = denum;
    }

    void displayRationalNumber()
    {

        cout << endl
             << "Given Rational number is : " << numerator << "/" << denominator;
    }
};

int main()
{

    Rational rational(2, 3);
    rational.displayRationalNumber();

    return 1;
}