#include <iostream>

using namespace std;

struct Date
{
    int d, m, y;
};

struct Person
{
    char name[15], address[30];
    Date d;
};

int main()
{

    Person person;

    cout << "Enter Person name : ";
    cin >> person.name;

    cout << endl
         << "Enter Person Address : ";
    cin >> person.address;

    cout << endl
         << "Enter Person Birth Year : ";
    cin >> person.d.y;

    cout << endl
         << "Enter Person Birth Month : ";
    cin >> person.d.m;

    cout << endl
         << "Enter Person Birth Day : ";
    cin >> person.d.d;

    cout << endl
         << endl
         << "Person Detail" << endl
         << "-----------------------------" << endl;
    cout << "Person Name : " << person.name << endl
         << "Person Address : " << person.address << endl
         << "Person  DOB : " << person.d.y << "/" << person.d.m << "/" << person.d.d << endl;

    return 1;
}