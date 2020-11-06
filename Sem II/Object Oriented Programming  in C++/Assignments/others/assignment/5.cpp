/*Q5. Write a program to define class Distance with data members feet and inches of appropriate type. Define member function of the class which accepts two objects of the class and adds them.
*/

#include <iostream>

using namespace std;

class Distance
{

private:
    float feet, inches;

public:
    void setData()
    {

        cout << "Enter feet and inches : ";
        cin >> feet >> inches;
    }

    void addData(Distance d1, Distance d2)
    {

        cout << "Sum :" << (d1.feet + d2.feet) << " Foot and " << (d1.inches + d2.inches) << " Inches ";
    }
};

int main()
{
    Distance d1, d2, obj;
    d1.setData();
    d2.setData();
    obj.addData(d1, d2);

    return 1;
}
