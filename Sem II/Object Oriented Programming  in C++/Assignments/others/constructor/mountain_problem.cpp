
#include <iostream>
#include <cstring>
using namespace std;

class Mountain
{

private:
    char name[10], location[15];
    int height;

public:
    Mountain()
    {
        strcpy(name, "");
        strcpy(location, "");
        height = 0;
    }

    Mountain(char n[], char l[], int h)
    {
        strcpy(name, n);
        strcpy(location, l);
        height = h;
    }

    void displayInfo()
    {
        cout << endl
             << "Name : " << name << endl
             << " Height : " << height << endl
             << " Location : " << location
             << endl
             << endl;
    }

    friend void cmpHeight(Mountain m1, Mountain m2);
};

void cmpHeight(Mountain m1, Mountain m2)
{
    (m1.height > m2.height) ? m1.displayInfo() : m2.displayInfo();
}
int main()
{
    Mountain m1("Sagarmatha", "Nepal", 8488);
    Mountain m2("Annapurna", "Pokhara", 8000);

    cout << endl
         << "Given Info \n\n ";
    m1.displayInfo();
    m2.displayInfo();
    cout << endl
         << "====================\n";

    cmpHeight(m1, m2);

    return 1;
}