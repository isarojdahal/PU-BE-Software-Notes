#include <iostream>

using namespace std;

class TollBooth
{

public:
    int noOfCar, moneyCollected;
    TollBooth()
    {

        noOfCar = 0;
        moneyCollected = 0;
    }

    void payingCar()
    {
        noOfCar++;
        moneyCollected += 5;
        cout << endl
             << "Paying Car Added" << endl;
    }

    void noPayCar()
    {

        noOfCar++;

        cout << endl
             << "Non Paying Car Added" << endl;
    }

    void display()
    {

        cout << endl
             << "Total No of Car : " << noOfCar << endl
             << "Total Collected Money : " << moneyCollected << endl;
    }

    void displayMenu()
    {

        cout << endl;
        cout << "1. Add Paying Car" << endl;
        cout << "2. Add Non Paying Car" << endl;
        cout << "3. Display " << endl;
        cout << "4. Exit Program";
        cout << endl;
    }
};

int main()
{
    int input;
    TollBooth tollBooth;

    while (1)
    {
        tollBooth.displayMenu();
        cout << endl
             << "Input : ";
        cin >> input;
        cout << endl;

        switch (input)
        {

        case 1:
            tollBooth.payingCar();
            break;
        case 2:
            tollBooth.noPayCar();
            break;

        case 3:
            tollBooth.display();
            break;
        case 4:
            exit(1);

        default:
            cout << " Wrong Input";
        }
    }

    return 1;
}