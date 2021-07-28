//  Define a class to represent a bank account. Include the following
// members:
// Data Members:
// i) Name of the account holder
// ii) Account number
// iii) Balance Amount is the account
// Member functions:
// i) Open an account
// ii) Deposit and withdraw money
// iii) Display account information
// Write a program to test this class for 10 costumers. Make use of all three
// types of constructors (whenever appropriate).

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class Bank
{
public:
    char accountHolderName[20];
    int balanceAmount, accountNumber;

    Bank()
    {
        balanceAmount = 0;
        accountNumber = 0;
    }
    int openAccount(char name[20])
    {
        strcpy(accountHolderName, name);
        int max = 100; //set the upper bound to generate the random number
        accountNumber = (rand() % max);
        cout << endl
             << "Account Successfully Opened with : " << endl;
        cout << "Account Name : " << accountHolderName << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance Amount : " << balanceAmount << endl;
        return 1;
    }

    int depositMoney(int money)
    {
        balanceAmount += money;
        cout << money << " is Deposited";
        return 1;
    }

    int withdrawMoney(int money)
    {
        if (money > balanceAmount)
        {
            cout << endl
                 << "Insufficient Balance";
            return 0;
        }
        balanceAmount -= money;
        cout << money << " is Withdrawn";
        return 1;
    }

    void accountInformation()
    {
        cout << endl
             << "Account Name : " << accountHolderName << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Total Balance : " << balanceAmount << endl;
    }
};

int main()
{
    int input, money;
    Bank bank[10];

    //Account Creation

    char name[20];
    for (int i = 0; i <= 9; i++)
    {
        cout << endl
             << "Enter Account Holder Name : ";
        cin >> name;
        bank[i].openAccount(name);
    }
    cout << endl
         << "Deposit money : ";

    for (int i = 0; i <= 9; i++)
    {

        cout << endl
             << "Customer No : " << (i + 1) << endl;
        cout << endl
             << "Amount you want to deposit : ";
        cin >> money;
        bank[i].depositMoney(money);
    }

    cout << endl
         << "Withdraw Money : " << endl;

    for (int i = 0; i <= 9; i++)
    {

        cout << endl
             << "For Customer No : " << (i + 1);
        cout << endl
             << "Amount you want to withdraw : ";
        cin >> money;
        bank[i].withdrawMoney(money);
    }

    for (int i = 0; i <= 9; i++)
    {
        bank[i].accountInformation();
    }

    return 1;
}