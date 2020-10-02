#include <iostream>

using namespace std;

struct Student
{

    char name[15], address[30];
    int roll, marks;
};

int main()
{

    Student student;

    cout << "Enter student name : ";
    cin >> student.name;

    cout << endl
         << "Enter student roll : ";
    cin >> student.roll;

    cout << endl
         << "Enter Student Marks : ";
    cin >> student.marks;

    cout << endl
         << "Enter student address : ";
    cin >> student.address;

    cout << endl
         << endl
         << "Student Detail" << endl
         << "-----------------------------" << endl;
    cout << "Student Name : " << student.name << endl
         << "Student Roll : " << student.roll << endl
         << "Student Marks : " << student.marks << endl
         << "Student Address : " << student.address << endl;
    return 1;
}