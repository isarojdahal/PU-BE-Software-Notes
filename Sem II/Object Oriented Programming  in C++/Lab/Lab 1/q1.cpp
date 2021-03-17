//Write a complete definition of the class Rational with its methods defined outside

#include <iostream>

using namespace std;

class Rational
{
private:
    int p, q;

public:
    void input();
    void display();
};

void Rational::input()
{
    cout << "Enter value of p and q : ";
    cin >> p >> q;
}

void Rational::display()
{
    cout << endl
         << "Given rational number is " << p << "/" << q;
}

int main()
{

    return 1;
}