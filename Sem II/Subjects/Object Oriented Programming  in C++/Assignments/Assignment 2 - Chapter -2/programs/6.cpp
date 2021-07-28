/*
Q6. Write a program to define class Distance with data members feet and inches of appropriate type. Define friend functionwhich accepts two objects of Distanceand adds them.

*/

#include <iostream>

using namespace std;

class Distance
{

private:
    int feet, inches;

public:
    void setData()
    {

        cout << "Enter feet and inches : ";
        cin >> feet >> inches;
    }

    friend void addData(Distance d1, Distance d2);
};

void addData(Distance d1, Distance d2)
{
    int totalFeet = d1.feet + d2.feet + (d1.inches % 12) + (d2.inches % 12);
    int totalInches = (d1.inches / 12) + (d2.inches / 12.0);
    cout << "Sum :" << totalFeet << " Foot and " << totalInches << " Inches ";
}

int main()
{
    Distance d1, d2, obj;
    d1.setData();
    d2.setData();
    addData(d1, d2);

    return 1;
}
