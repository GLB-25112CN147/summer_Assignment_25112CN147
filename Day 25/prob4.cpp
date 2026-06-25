/*Write a program to Sort words by length.*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of words : ";
    cin >> n;
    vector<string> ip(n);
    cout << "Enter the words : " << endl;
    for (string &s : ip)
    {
        cin >> s;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (ip[j].length() > ip[j + 1].length())
            {
                swap(ip[j], ip[j + 1]);
            }
        }
    }
    cout << "Your sortted strings are : ";
    for (string &s : ip)
    {
        cout << s << "  ";
    }

    return 0;
}