#include <iostream>

using namespace std;

class Student
{
public:
    int rollNumber;
    void inputDetails()
    {
        cout << "Enter Student Rollno : ";
        cin >> rollNumber;
    }

    void displayDetails()
    {
        cout << "Given Rollno : " << rollNumber << endl;
    }
};

class Examination : public Student
{
public:
    int subject1, subject2;
    void setMarks()
    {
        cout << "Enter Subject1 and Subject2 Marks : ";
        cin >> subject1 >> subject2;
    }

    void displayMarks()
    {
        cout << endl
             << "Given Marks : " << endl
             << "Subject 1 : " << subject1 << endl
             << "Subject 2 : " << subject2;
    }
};

class Result : public Examination
{
public:
    int total;
    void displayResult()
    {
        cout << endl
             << endl
             << "Total Marks : " << (subject1 + subject2);
    }
};

int main()
{
    Result result;
    result.inputDetails();
    result.displayDetails();
    result.setMarks();
    result.displayMarks();
    result.displayResult();
    return 1;
}