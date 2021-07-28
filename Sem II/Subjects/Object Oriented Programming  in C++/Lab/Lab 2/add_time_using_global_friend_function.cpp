// Write a program to add time using friend function. For That create a class called Time with hour,minute and seconds as member variables.

#include <iostream>

using namespace std;

class Time
{

private:
    int hr, min, sec;

public:
    friend void addTime(Time, Time);
    void input()
    {
        cout << "Enter Hour , Minute and Second : ";
        cin >> hr >> min >> sec;
    }
};

void addTime(Time t1, Time t2)
{

    Time t3;

    t3.sec = t1.sec + t2.sec;
    t3.min = t3.sec / 60;
    t3.sec = t3.sec % 60;

    t3.min += t1.min + t2.min;
    t3.hr = t3.min / 60;
    t3.min = t3.min % 60;

    t3.hr += t1.hr + t2.hr;

    cout << endl
         << endl
         << "Hour : " << t3.hr << " Minute : " << t3.min << " Seconds : " << t3.sec;
}

int main()
{
    Time t1, t2;
    t1.input();
    t2.input();

    addTime(t1, t2);

    return 1;
}