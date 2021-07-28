#include <iostream>

using namespace std;

class Test
{

public:
    int matrix[3][3]; //array of int
    void input()      //input method for taking input
    {

        for (int i = 0; i < 3; i++)
        {

            for (int j = 0; j < 3; j++)
            {

                cout << endl
                     << "Enter data for [" << i << "] : ";
                cin >> matrix[i][j];
            }
        }
    }

    void operator*(int value) //overloaded multiply opeartor
    {

        for (int i = 0; i < 3; i++)
        {

            for (int j = 0; j < 3; j++)
            {

                matrix[i][j] *= value;
            }
        }
    }

    void display()
    {

        for (int i = 0; i < 3; i++)
        {

            for (int j = 0; j < 3; j++)
            {

                cout << endl
                     << " [" << i << "] : " << matrix[i];
            }
        }
    }
};

int main()
{

    Test test;
    test.input();
    test *(9);
    test.display();
    return 1;
}