/*Write a program to Create ATM simulation*/
#include <iostream>
using namespace std;

int main()
{
    double balance = 100000, amount;
    int option;
    do
    {
        cout << "     MENU     " << endl;
        cout << "1. Check Balance " << endl;
        cout << "2. Withdraw " << endl;
        cout << "3. Deposit " << endl;
        cout << "4. Exit " << endl;
        cout << "Enter your option : ";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Your balance is : " << balance << endl;
            break;
        case 2:
            cout << "Enter amount : ";
            cin >> amount;
            if (balance > amount)
            {
                cout << "Withdrawal succesful!!!" << endl;
                cout << "your updated balance is : " << balance - amount;
            }
            else
            {
                cout << "Insufficient balance!!!";
            }
            break;
        case 3:
            cout << "Enter amount : ";
            cin >> amount;
            cout << "Deposit  successfu!!!" << endl;
            cout << "Your updated balance is : " << balance + amount;
            break;
        case 4:
            cout <<"Thank you for using the ATM";

        default:
            break;
        }
    } while (option != 4);
    return 0;
}