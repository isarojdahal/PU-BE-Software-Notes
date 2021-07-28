/*
Q9. Create a class called Mountain with data members name, height and location. Define  a  member  function  to  initialize  the  data  members.  A  friend function cmpHeight() to compare height of two objects and member function displayInfo() to  display  information  of  mountain.  In  main  create  two  objects  of  the  class mountain and display the information of mountain with greatest height.
*/

#include <iostream>

using namespace std;

class Mountain
{

private:
    char name[10], location[15];
    int height;

public:
    void setInfo()
    {

        cout << "Enter Mountain name : ";
        cin >> name;
        cout << "Enter Mountain height : ";
        cin >> height;
        cout << "Enter Mountain Location : ";
        cin >> location;
    }
    void displayInfo()
    {

        cout << endl
             << "Name : " << name << endl
             << " Height : " << height << endl
             << " Location : " << location;
    }
    friend void cmpHeight(Mountain m1, Mountain m2);
};

void cmpHeight(Mountain m1, Mountain m2)
{
    (m1.height > m2.height) ? m1.displayInfo() : cout << m2.displayInfo();
}
int main()
{
    Mountain m1, m2;

    m1.setInfo();
    m2.setInfo();

    cout << endl
         << "================\n Given Info \n\n";
    m1.displayInfo();
    m2.displayInfo();
    cout << "====================\n";

    cmpHeight(m1, m2);

    return 1;
}