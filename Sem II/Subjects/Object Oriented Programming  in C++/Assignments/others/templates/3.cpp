#include <iostream>

using namespace std;

template <typename T, int n>
class Array
{
public:
    void displayData(T arr[20])
    {

        for (int i = 0; i < n; i++)
        {
            cout << "arr[" << i << "] : " << arr[i] << endl;
        }
    }
    void sortData(T, int);
};

template <typename T, int n>
void Array<T, n>::sortData(T arr[20])
{

    T temp;
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int intArray[7] = {1, 2, 3, 4, 5, 6, 7};
    char charArray[5] = {'a', 'd',
                         'e',
                         'c', 'k'};

    float floatArray[5] = {0.2, 2.9, 7.3, 4.0, 20.32};

    Array<int, 7> a;
    a.sortData(intArray, 7);
    a.displayData(intArray);

    Array<char, 5> a2;
    a2.sortData(charArray, 7);
    a2.displayData(charArray);

    Array<float, 5> a3;
    a3.sortData(floatArray, 7);
    a3.displayData(floatArray);

    return 1;
}
