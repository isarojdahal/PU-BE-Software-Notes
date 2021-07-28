// . Imagine a tollbooth at a bridge. Carspassing by the booth are expected to
// pay five-rupee toll. Mostly they do, but sometimes a car go by without paying.
// The tollbooth keeps track of the number of cars that have gone by and of the
// total amount of money collected.

// Model this tollbooth with class (say TollBooth). The two data members to hold
// number of cars and amount of money collected. The constructor may initialize
// both these to 0. A member function (say payingCar() increments the car total
// and adds 5 to the cash total, while another member function (say noPayCar())
// increments the car total but adds nothing to the cash total. Finally member
// function display() displays the two totals.

// Hint: allow user to press a particular key to indicate a paying car and another
// key to indicate non paying car

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