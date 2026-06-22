/*Write a program to Check anagram strings*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string s1, s2;
    cout << "Enter the first string : " << endl;
    getline(cin, s1);
    unordered_map<char, int> m1;
    unordered_map<char, int> m2;

    for (char &ch : s1)
    {
        ch = tolower(ch);
        m1[ch]++;
    }
    cout << "Enter the second string : " << endl;
    getline(cin, s2);
    if (s1.length() != s2.length())
    {
        cout << "Not anagram strings!!!";
        return 0;
    }
    for (char &ch : s2)
    {
        ch = tolower(ch);
        m2[ch]++;
    }
    if (m1 == m2)
    {
        cout << "Anagram strings!!!";
    }
    else
        cout << "Not anagram strings!!!!";

    return 0;
}