#include <iostream>

using namespace std;

class Time
{

private:
    int hour, min, sec;

public:
    void getTime();
    void setTime();
    friend void addTime(Time t1, Time t2, Time result);
};

void Time::setTime()
{

    cout << "Enter hour, minute and seconds : ";
    cin >> hour >> min >> sec;
}

void Time::getTime()
{

    cout << "Hour : " << hour << endl
         << "Minute : " << min << endl
         << " Seconds : " << sec;
}

void addTime(Time t1, Time t2, Time result)
{

    result.sec = t1.sec + t2.sec;
    result.min = result.sec / 60;
    result.sec = result.sec % 60;

    result.min = result.min + t1.min + t2.min;
    result.hour = result.min / 60;
    result.min = result.min % 60;

    result.hour = t1.hour + t2.hour + result.hour;

    result.getTime();
}

int main()
{
    Time t1, t2, result;
    t1.setTime();
    t2.setTime();
    addTime(t1, t2, result);
    // result.getTime();
    return 1;
}