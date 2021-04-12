#include <iostream>

using namespace std;

class Person
{

    char name[20];
    int age;

public:
    void inputInfo()
    {

        cout << "Enter person name and age : ";
        cin >> name >> age;
    }

    void displayInfo()
    {

        cout << endl
             << endl
             << "Person name : " << name << endl;
        cout << "Person age : " << age;
    }
};

class Student : protected Person
{

    int regNumber;

public:
    void inputStudentInfo()
    {
        inputInfo();
        cout << "Enter student Registration Number : ";
        cin >> regNumber;
    }
    void displayStudentInfo()
    {
        displayInfo();
        cout << endl
             << "Student Registration Number : " << regNumber;
    }
};

int main()
{
    Student student;
    student.inputStudentInfo();
    student.displayStudentInfo();

    return 1;
}