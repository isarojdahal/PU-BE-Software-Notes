#include <iostream>

using namespace std;
class Student
{
    char name[50];
    int roll;

public:
    void setInfo()
    {
        cout << "Enter name of student : ";
        cin >> name;
        cout << "Enter roll of student : ";
        cin >> roll;
    }
    void display()
    {
        cout << endl
             << "Name= " << name << endl;
        cout << endl
             << "Roll= " << roll << endl;
    }
};

int main()
{
    Student *ptr1 = new Student; // dynamically declare Student object
    cout << endl
         << "Enter information of student :" << endl;
    ptr1->setInfo(); // call setInfo() function
    cout << endl
         << "Information of student :" << endl;
    ptr1->display();
    // call display() function

    // pointed memory is released
    delete ptr1;
    return 0;
}