#include <iostream>

using namespace std;

class Address
{
public:
     char country[20], municipalityName[20];
     int provinceNumber, wardNumber;

     void inputAddressInfo()
     {

          cout << endl
               << "Enter Country name : ";
          cin >> country;
          cout << endl
               << "Enter Province number : ";
          cin >> provinceNumber;
          cout << endl
               << "Enter Municipality name : ";
          cin >> municipalityName;
          cout << endl
               << "Enter Ward number : ";
          cin >> wardNumber;
     }

     void displayAddressInfo()
     {

          cout << endl
               << " Country : " << country;
          cout << endl
               << "Province Number : " << provinceNumber;
          cout << endl
               << "Municipality Name : " << municipalityName;
          cout << endl
               << "Ward Number : " << wardNumber;
     }
};

class Student
{

     Address address; // Has a relationship : also known as association or containership or aggreration

public:
     char name[20];
     int roll;

     void inputStudentDetail()
     {
          address.inputAddressInfo();
          cout << endl
               << "Enter Student Name : ";
          cin >> name;
          cout << endl
               << "Enter Student Roll : ";
          cin >> roll;
     }

     void displayStudentDetail()
     {
          address.displayAddressInfo();
          cout << endl
               << " Student Name : " << name;
          cout << endl
               << " Student Roll : " << roll;
     }
};

int main()
{
     Student student;
     student.inputStudentDetail();
     student.displayStudentDetail();

     return 1;
}