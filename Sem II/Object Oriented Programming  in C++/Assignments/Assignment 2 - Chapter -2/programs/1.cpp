/*
Q1.  Write  a  complete  definition  of  the  class  Rational  with  its  method  defined outside. The program shoulda.Define Rational object called xb.Assign values to data of xc.Compare num and den and display minimum valued.Define another Rational object called ye.Multiply two rational numbersf.Check if you can print num and den of x from main. Discuss the reason behind your observationg.If you were not able to access num and den of x from outside, what should you do so that you can access them from anywhere?
*/

#include <iostream>

using namespace std;

class Rational
{

public:
    int deno, num;

    void setData();

    void minValue();
    void multiplyRational(Rational x, Rational y);
};

void Rational ::setData()
{

    cout << "Enter Numerator and Denominator : ";
    cin >> num >> deno;
}
void Rational ::minValue()
{
    (deno < num) ? cout << deno << " is minimum" : cout << num << " is minimum";
}

void Rational::multiplyRational(Rational x, Rational y)
{
    cout << endl
         << " Multiplication is : " << (x.num * y.num) << "/" << (x.deno * y.deno);
}

int main()
{

    Rational x, y, obj;
    x.setData();
    x.minValue();

    y.setData();
    y.minValue();

    obj.multiplyRational(x, y);

    return 1;
}