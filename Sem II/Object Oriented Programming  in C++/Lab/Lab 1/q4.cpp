// Design a class called Person that contains appropriate members for storing name,age,gender  and telephone number. Write member functions that can read and display these data.

#include <iostream>

using namespace std;

class Person
{

private:
    char name[20], telephone[15], gender;
    int age;

public:
    void input()
    {
        cout << "Enter persons name : ";
        cin >> name;
        cout << endl
             << "Enter Person age : ";
        cin >> age;
        cout << endl
             << "Enter Person gender : ";
        cin >> gender;
        cout << endl
             << "Enter Person Telephone : ";
        cin >> telephone;
    }

    void display()
    {

        cout << endl
             << "Given person detail " << endl;
        cout << "Name : " << name;
        cout << endl
             << "Age : " << age;
        cout << endl
             << "Gender : " << gender;
        cout << endl
             << "Telephone : " << telephone;
    }
};

int main()
{
    Person person;
    person.input();
    person.display();

    return 1;
}