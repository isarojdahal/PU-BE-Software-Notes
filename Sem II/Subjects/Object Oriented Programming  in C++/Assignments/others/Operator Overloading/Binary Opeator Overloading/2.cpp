#include <iostream>
#include <cstring>

using namespace std;

class MyString
{

private:
    char str[20];

public:
    MyString()
    {
    }

    MyString(char str[])
    {
        strcpy(this->str, str);
    }

    MyString operator+(MyString mystring)
    {

        MyString temp;
        strcpy(temp.str, strcat(str, mystring.str));
        return temp;
    }

    void display()
    {

        cout << "Concatenated string : " << str;
    }
};

int main()
{

    MyString obj("Hello"), obj2("World"), sum;
    sum = obj + obj2;
    sum.display();

    return 1;
}