#include <iostream>

using namespace std;

class Distance
{

private:
    int km, meter;

public:
    Distance()
    {
        km = 10;
        meter = 10;
    }
    void operator+(int value)
    {
        this->km += value;
        this->meter += value;
    }

    void display()
    {

        cout << "Kilometer : " << km << endl;
        cout << "Meter : " << meter;
    }
};

int main()
{
    Distance d;
    d.operator+(5);
    // d + (5);
    d.display();

    return 1;
}