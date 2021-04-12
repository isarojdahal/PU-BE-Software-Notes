#include <iostream>

using namespace std;

int main()
{

    int *ptr1 = NULL;
    ptr1 = new int; // Dynamic memory allocation
    *ptr1 = 100;

    cout << "value of ptr1 is " << *ptr1;

    int *ptr2 = new int(1234);
    cout << "value of ptr2 is " << *ptr2;

    cout << endl
         << "ptr1 before deletion : " << ptr1;
    delete ptr1;

    cout << endl
         << "ptr1 after deletion : " << *ptr1;

    return 1;
}