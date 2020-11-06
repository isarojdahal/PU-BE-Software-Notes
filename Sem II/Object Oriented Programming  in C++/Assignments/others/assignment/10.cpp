/*
Q10. Write a programto count the total number of students that have registered their names to playing football in sports week. Define a class that has static data member  to  count  the  number  of  students  and  define  member  functions  as required.
*/

#include <iostream>

using namespace std;
class Student
{

public:
    char name[20];
    static int playerNo;
    void getInfo()
    {
        cout << "Enter student Name : ";
        cin >> name;
        playerNo++;
    }

    void totalPlayers()
    {
        cout << "Total players : " << playerNo;
    }
};

int Student ::playerNo;

int main()
{
    Student obj, obj2, obj3;

    obj.getInfo();
    obj2.getInfo();
    obj3.totalPlayers();

    return 1;
}