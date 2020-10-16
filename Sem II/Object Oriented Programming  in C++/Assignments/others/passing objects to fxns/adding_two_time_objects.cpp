#include <iostream>

using namespace std;

class Time
{

private:
    int hr, min, sec;

public:
    void setTime();
    void getTime();
    void doSum(Time t1, Time t2);
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

void Time::doSum(Time t1, Time t2)
{

    sec = t1.sec + t2.sec;
    min = sec / 60;
    sec = sec % 60;

    min = min + t1.min + t2.min;
    hr = min / 60;
    min = min % 60;

    hr = t1.hr + t2.hr + hr;
}

int main()
{
    Time t1, t2, result;
    t1.setTime();
    t2.setTime();
    result.doSum(t1, t2);
    result.getTime();

    return 1;
}