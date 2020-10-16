#include <iostream>

using namespace std;

class Distance
{
private:
    int feet;
    float inches;

public:
    void getData();
    void setData();
    void doSum(Distance d1, Distance d2);
};

void Distance::getData()
{
    cout << "Feet : " << feet << endl
         << " Inches : " << inches;
}

void Distance::setData()
{

    cout << "Enter feet and inches :  ";
    cin >> feet >> inches;
}

void Distance::doSum(Distance d1, Distance d2)
{
    feet = d1.feet + d2.feet;
    inches = d1.inches + d2.inches;
}

int main()
{

    Distance d1, d2, result;

    d1.setData();
    d2.setData();
    result.doSum(d1, d2);
    result.getData();
    return 1;
}