/*Write a program to Count words in a sentence*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string : " << endl;
    getline(cin, s);
    int words = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if ((i == 0 && s[i] != ' ') || (s[i] == ' ' && s[i - 1] != ' '))
        {
            words++;
        }
    }
    cout << "The number of words in the string are : " << words << endl;
    return 0;
}