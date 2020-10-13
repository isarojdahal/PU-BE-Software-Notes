#include <iostream>

using namespace std;

int main()
{
    enum Month
    {
        jan = 1,
        feb,
        march,
        april,
        may,
        june,
        july,
        aug,
        sept,
        oct,
        nov,
        dec
    };

    Month month;

    month = jan;
    cout << month << endl;

    month = feb;
    cout << month << endl;

    month = march;
    cout << month << endl;

    month = april;
    cout << month << endl;

    month = may;
    cout << month << endl;

    month = june;
    cout << month << endl;

    month = july;
    cout << month << endl;

    month = aug;
    cout << month << endl;

    month = sept;
    cout << month << endl;

    month = oct;
    cout << month << endl;

    month = nov;
    cout << month << endl;

    month = dec;
    cout << month << endl;

    return 1;
}