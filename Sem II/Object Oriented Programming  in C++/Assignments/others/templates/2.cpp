#include <iostream>

using namespace std;

template <typename T>

void sortData(T arr[20], int n)
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

template <typename T>

void displayData(T arr[20], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] : " << arr[i] << endl;
    }
}

int main()
{

    int intArray[7] = {1, 2, 3, 4, 5, 6, 7};
    char charArray[5] = {'a', 'd',
                         'e',
                         'c'};

    float floatArray[5] = {0.2, 2.9, 7.3, 4.0, 20.32};

    cout << endl
         << "For integer array : "
         << endl
         << "=============" << endl;
    cout << "Before sorting : " << endl;
    displayData(intArray, 7);

    cout << "After Sorting : " << endl;
    sortData(intArray, 7);
    displayData(intArray, 7);

    cout << endl
         << "For Character array : "
         << endl
         << "=============" << endl;
    cout << "Before sorting : " << endl;

    displayData(charArray, 4);

    cout << "After Sorting : " << endl;
    sortData(charArray, 4);
    displayData(charArray, 4);

    cout << endl
         << "For Float array : "
         << endl
         << "=============" << endl;
    cout << "Before sorting : " << endl;
    displayData(floatArray, 5);

    cout << "After Sorting : " << endl;
    sortData(floatArray, 5);
    displayData(floatArray, 5);

    return 1;
}