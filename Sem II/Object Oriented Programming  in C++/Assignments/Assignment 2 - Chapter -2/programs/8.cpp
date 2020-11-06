/*
Q8. Create classes called Class1,Class2, Class3, Class4with each having one private member. Add member function to set a value (say setValue) on each class. Add one more function max() that is friendly to allclasses, max() function should compare four private member of fourclasses and show maximum among them. Create one-one object of each class and set a value on them. Display the maximum number among them.
*/

#include <iostream>

using namespace std;

class Class2;
class Class3;
class Class4;

class Class1
{
private:
    int val;

public:
    void setValue(int value)
    {
        val = value;
    }

    friend void max(Class1 c1, Class2 c2, Class3 c3, Class4 c4);
};

class Class2
{

private:
    int val;

public:
    void setValue(int value)
    {
        val = value;
    }
    friend void max(Class1 c1, Class2 c2, Class3 c3, Class4 c4);
};

class Class3
{

private:
    int val;

public:
    void setValue(int value)
    {
        val = value;
    }
    friend void max(Class1 c1, Class2 c2, Class3 c3, Class4 c4);
};

class Class4
{

private:
    int val;

public:
    void setValue(int value)
    {
        val = value;
    }
    friend void max(Class1 c1, Class2 c2, Class3 c3, Class4 c4);
};

void max(Class1 c1, Class2 c2, Class3 c3, Class4 c4)
{

    if (c1.val > c2.val && c1.val > c3.val && c1.val > c4.val)
    {
        cout << "Class 1 value is maximum";
    }

    else if (c2.val > c3.val && c2.val > c4.val)
    {

        cout << "Class 2 value is maximum";
    }

    else if (c3.val > c4.val)
    {

        cout << "Class 3 value is maximum";
    }

    else
    {
        cout << "Class 4 value is maximum";
    }
}

int main()
{
    Class1 class1;
    Class2 class2;
    Class3 class3;
    Class4 class4;

    class1.setValue(1);
    class2.setValue(2);
    class3.setValue(3);
    class4.setValue(4);

    max(class1, class2, class3, class4);
}