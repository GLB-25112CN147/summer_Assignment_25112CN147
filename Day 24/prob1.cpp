/*Write a program to Check string rotation.*/
#include <iostream>
using namespace std;

int main()
{
    string s1, s2;
    cout << "Enter the first string : " << endl;
    getline(cin, s1);
    cout << "Enter the second string : " << endl;
    getline(cin, s2);
    if (s1.length() != s2.length())
    {
        cout << "Not a rotated string " << endl;
        return 0;
    }
    string check = s1 + s1;
    if (check.find(s2) != string ::npos)
    {
        cout << "It is a rotated string." << endl;
    }
    else
        cout << "Not a rotated string.";

    return 0;
}