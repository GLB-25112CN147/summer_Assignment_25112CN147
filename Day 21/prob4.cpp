/*Write a program to Convert lowercase to uppercase.*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s, ans;
    cout << "Enter the string : " << endl;
    getline(cin, s);
    for (char ch : s)
    {
        ch = toupper(ch);
        ans += ch;
    }
    cout << "The string in uppercase is : " << endl
         << ans;

    return 0;
}