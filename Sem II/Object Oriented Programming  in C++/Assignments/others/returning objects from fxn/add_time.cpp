#include <iostream>

using namespace std;

class Time
{

private:
    int hr, min, sec;

public:
    void setTime();
    void getTime();
    Time doSum(Time t1, Time t2);
};

void Time::setTime()
{

    cout << "Enter hour,minute and seconds : ";
    cin >> hr >> min >> sec;
}

void Time::getTime()
{

    cout << "Hour : " << hr << endl
         << "Minute : " << min << endl
         << "Seconds : " << sec;
}

Time Time::doSum(Time t1, Time t2)
{

    Time result;
    result.sec = t1.sec + t2.sec;
    result.min = result.sec / 60;
    result.sec = result.sec % 60;

    result.min = result.min + t1.min + t2.min;
    result.hr = result.min / 60;
    result.min = result.min % 60;

    result.hr = t1.hr + t2.hr + result.hr;

    return result;
}

int main()
{
    Time t1, t2, result;
    t1.setTime();
    t2.setTime();
    result = result.doSum(t1, t2);
    result.getTime();

    return 1;
}