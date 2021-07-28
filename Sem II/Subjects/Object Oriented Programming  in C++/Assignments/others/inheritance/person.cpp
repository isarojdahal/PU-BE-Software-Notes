#include <iostream>

using namespace std;

class Person
{
private:
    int a;

protected:
    int d;

public:
    char name[10];
    int age;

    void inputData();
    void displayData();
};

void Person::inputData()
{
    cout << "Enter Person Name : ";
    cin >> name;
    cout << "Enter Person age : ";
    cin >> age;
}

void Person::displayData()
{

    cout << endl
         << "Person Name : " << name << endl;
    cout << "Person Age : " << age;
}

class Student : private Person
{
public:
    void getStudentData()
    {
        inputData();
    }

    void displayStudentData()
    {
        displayData();
    }
};

int main()
{
    Student student;
    student.getStudentData();
    student.displayStudentData();

    return 1;
}