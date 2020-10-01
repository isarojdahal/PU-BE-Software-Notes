#include <iostream>

using namespace std;

int main()
{

    enum Months
    {

        jan = 1,
        feb,
        mar,
        apr,
        may,
        jun,
        july,
        august,
        sept,
        obt,
        nov,
        dec

    };

    Months month;

    month = jan;
    cout << jan << endl;

    month = feb;
    cout << feb << endl;

    return 1;
}
