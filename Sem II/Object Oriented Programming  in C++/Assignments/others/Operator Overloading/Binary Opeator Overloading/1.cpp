#include <iostream>

using namespace std;

class Time
{

private:
    int hr, min, sec;

public:
    Time()
    {
    }
    Time(int hr, int min, int sec)
    {
        this->hr = hr;
        this->min = min;
        this->sec = sec;
    }

    void display()
    {

        cout << "Hour : " << hr << endl;
        cout << "Minute : " << min << endl;
        cout << "Second : " << sec << endl;
    }

    Time operator+(Time t)
    {

        Time temp;

        temp.sec = t.sec + sec;
        temp.min = temp.sec / 60;
        temp.sec = temp.sec % 60;

        temp.min = temp.min + t.min + min;
        temp.hr = temp.min / 60;
        temp.min = temp.min % 60;

        temp.hr = t.hr + hr + temp.hr;

        // temp.hr = t.hr + hr;
        // temp.min = t.min + min;
        // temp.sec = t.sec + sec;

        return temp;
    }
};

int main()
{

    Time t1(1, 2, 30), t2(1, 2, 31);
    Time t3 = t1 + t2;
    t3.display();
}