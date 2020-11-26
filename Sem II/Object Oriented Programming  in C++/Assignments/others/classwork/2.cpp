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
    }
    int openAccount(char name[20])
    {
        balanceAmount = 0;
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

    void displayMenu()
    {

        cout << endl
             << "1. Open an Account" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Show Account Info" << endl;
        cout << "5. Exit " << endl;
    }
};

int main()
{
    int input, money;

    Bank bank;

    while (1)
    {
        bank.displayMenu();
        cout << endl
             << "Input : ";
        cin >> input;
        cout << endl;

        switch (input)
        {

        case 1:
            char name[20];
            cout << endl
                 << "Enter Account Holder Name : ";
            cin >> name;
            bank.openAccount(name);
            break;

        case 2:
            cout << endl
                 << "Amount you want to deposit : ";
            cin >> money;
            bank.depositMoney(money);
            break;

        case 3:
            cout << endl
                 << "Amount you want to withdraw : ";
            cin >> money;
            bank.withdrawMoney(money);
            break;

        case 4:
            bank.accountInformation();
            break;

        case 5:
            exit(1);
        }
    }

    return 1;
}