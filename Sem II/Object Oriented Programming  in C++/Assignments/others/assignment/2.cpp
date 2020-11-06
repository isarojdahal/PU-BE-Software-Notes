/*Q2. Write a program to define class Rectangle with length and breadth as private members and appropriate member functions to read data members, calculate and display the area.Define member functions outside class.

*/

#include <iostream>

using namespace std;
class Rectangle
{

private:
    int length, breadth;

public:
    void setData();
    void displayData();
    void findArea();
};

void Rectangle ::setData()
{

    cout << "Enter rectangle length and breadth : ";
    cin >> length >> breadth;
}

void Rectangle ::displayData()
{

    cout << "Given Length : " << length << " Breadth : " << breadth;
}

void Rectangle ::findArea()
{

    cout << "Area of rectangle is : " << (length * breadth);
}

int main()
{

    Rectangle rectangle;

    rectangle.setData();
    rectangle.displayData();
    rectangle.findArea();

    return 1;
}
