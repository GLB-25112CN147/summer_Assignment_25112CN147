/*Write a program to Find string length without strlen()*/
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string : " << endl;
    getline(cin, s);
    int count = 0;
    for (char ch : s)
    {
        count++;
    }
    cout << "The length of the string is : " << count << endl;

    return 0;
}