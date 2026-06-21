/*Write a program to Reverse a string*/
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string : ";
    getline(cin, s);
    int i = 0, j = s.length() - 1;
    while (i <= j)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    cout << "Your reverse string is : " << endl
         << s;

    return 0;
}