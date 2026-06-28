/*Write a program to Create bank account system*/
#include <iostream>
using namespace std;
struct bank
{
    string name;
    string number;
    double balance;
};

int main()
{
    int n;
    cout << "Enter number of accounts : ";
    cin >> n;
    bank account[n];
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        cout << "Enter account number : ";
        cin >> account[i].number;
        cout << "Enter Account Holder Name : ";
        cin >> account[i].name;
        cout << "Enter balance : ";
        cin >> account[i].balance;
    }
    cout << "                             BANK RECORD                          " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << account[i].number << "       " << account[i].name << "           " << account[i].balance << endl;
    }

    return 0;
}