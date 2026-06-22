/*Write a program to Find maximum occurring character.*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string s;
    char mchar = '\0';
    unordered_map<char, int> m;
    cout << "Enter the string : " << endl;
    getline(cin, s);
    for (char &ch : s)
    {
        ch = tolower(ch);
        if (ch != ' ')
        {
            m[ch]++;
        }
    }
    int maxfreq = 0;
    for (char ch : s)
    {
        if (maxfreq < m[ch])
        {
            mchar = ch;
            maxfreq = m[ch];
        }
    }
    cout << "The maximum occuring character is : " << mchar << " with frequency : " << maxfreq;

    return 0;
}