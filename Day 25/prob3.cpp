/*Write a program to Sort names alphabetically.*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of names : ";
    cin >> n;
    cin.ignore();
    vector<string> ip(n);
    cout << "Enter the names : " << endl;
    for (string &s : ip)
    {
        getline(cin, s);
    }
    cout << "The names in alphabetical order are : " << endl;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ip[j] > ip[j + 1])
            {
                swap(ip[j], ip[j + 1]);
            }
        }
    }
    for (string s : ip)
    {
        cout << s << endl;
    }

    return 0;
}