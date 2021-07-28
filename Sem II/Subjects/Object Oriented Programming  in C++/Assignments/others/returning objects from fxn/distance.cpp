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
    Distance doSum(Distance obj);
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

Distance Distance ::doSum(Distance obj)
{
    Distance d;
    d.feet = feet + obj.feet;
    d.inches = inches + obj.inches;
    return d;
}

int main()
{

    Distance d1, d2, result;

    d1.setData();
    d2.setData();
    result = d1.doSum(d2);
    result.getData();
    return 1;
}