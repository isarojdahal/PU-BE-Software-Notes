#include <iostream>

using namespace std;

class Person
{

private:
     char name[30], tele[30], gender[8];
     int age;

public:
     void setInfo()
     {

          cout << endl
               << "Enter Person name : ";
          cin >> name;
          cout << endl
               << "Enter Person telephone : ";
          cin >> tele;
          cout << endl
               << "Enter Person age : ";
          cin >> age;
          cout << endl
               << "Enter Person gender : ";
          cin >> gender;
     }

     void getInfo()
     {

          cout << endl
               << "\tPERSON DETAILS\n=========================\n";
          cout << "Name : " << name;
          cout << endl
               << "Age : " << age;
          cout << endl
               << "Gender : " << gender;
          cout << endl
               << "Telephone : " << tele;
     }
};

int main()
{

     Person p1, p2, p3;
     p1.setInfo();
     p2.setInfo();
     p3.setInfo();

     p1.getInfo();
     p2.getInfo();
     p3.getInfo();

     return 1;
}