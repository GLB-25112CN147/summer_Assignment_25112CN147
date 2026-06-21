/*Write a program to Check palindrome string.*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Enter the srting : " << endl;
    getline(cin, s);
    string ans = s;
    int i = 0, j = s.length() - 1;
    while (i <= j)
    {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    if (s == ans)
    {
        cout << "It is a pallindrome string.";
    }
    else
        cout << "It is not a pallindrome string";

    return 0;
}