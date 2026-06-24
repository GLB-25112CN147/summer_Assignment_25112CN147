/*Write a program to Find longest word.*/
#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string : " << endl;
    getline(cin, s);
    int letters = 0;
    int maxletters = 0;
    int endpos = 0;
    string longword = "";
    for (int i = 0; i <= s.length(); i++)
    {
        if (s[i] != ' ' && i < s.length())
        {
            letters++;
        }
        else
        {
            if (letters > maxletters)
            {
                maxletters = letters;
                endpos = i - 1;
            }
            letters = 0;
        }
    }
    for (int i = endpos - maxletters + 1; i <= endpos; i++)
    {
        longword += s[i];
    }

    cout << "The longest word in the string is : " << endl
         << longword;

    return 0;
}