//  Define a class Bank. Calculate simple interest using default value of
// rate=1.5%. Use constructor to initialize the object and appropriate
// member functions to display and calculate the result.

#include <iostream>

using namespace std;

class Bank
{

public:
    int principal, time;
    float rate;

    Bank(int p, int t)
    {
        cout << "Parameterized Constructor is called";
        principal = p;
        time = t;
        rate = 1.5;
    }

    void displayData()
    {

        cout << "Given data : " << endl
             << "Principal : " << principal << endl
             << " Rate : " << rate << endl
             << "Time : " << time;
    }

    void calculateInterest()
    {
        float interest = (principal * time * rate) / 100.0;
        cout << endl
             << "Interest is : " << interest;
    }
};

int main()
{
    Bank b(1000, 10);
    b.displayData();
    b.calculateInterest();
    return 1;
}