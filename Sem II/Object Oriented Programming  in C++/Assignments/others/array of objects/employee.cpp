#include <iostream>

using namespace std;

class Employee
{

private:
    char name[30];
    int idNumber, salary;

public:
    void setDetails(int n);
    void getDetails();
};

void Employee::setDetails(int n)
{

    cout << endl
         << "Enter Detail of Employee " << n << endl;
    cout << "Enter Employee Name : ";
    cin >> name;
    cout << "Enter Employee id : ";
    cin >> idNumber;
    cout << "Enter Employee Salary : ";
    cin >> salary;
}

void Employee::getDetails()
{
    cout << endl
         << "Name : " << name;
    cout << endl
         << "ID Number : " << idNumber;
    cout << endl
         << "Salary  : " << salary;
}
int main()
{

    Employee employee[50];
    int i, n;
    cout << "Enter number of employees ";
    cin >> n;

    for (i = 0; i < n; i++)
    {

        employee[i].setDetails(i + 1);
    }

    for (i = 0; i < n; i++)
    {

        employee[i].getDetails();
    }

    return 1;
}