//second question

#include <iostream>

using namespace std;

template <typename T>

class Box
{
public:
    T length, breath, height;

    void calculateVolume(T l, T b, T h)
    {
        cout << "Volume is Box is " << (l * b * h) << endl;
    }
};

int main()
{
    Box<int> box;
    box.calculateVolume(1, 2, 3);
    Box<float> box2;
    box2.calculateVolume(1.2, 2.3, 3);
    return 1;
}
