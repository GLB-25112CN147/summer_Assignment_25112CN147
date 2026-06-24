/*Write a program to Remove duplicate characters*/
#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    string input, result = "";
    unordered_set<char> s;
    cout << "Enter the string : " << endl;
    getline(cin, input);
    for (char ch : input)
    {
        if (s.find(ch) == s.end())
        {
            s.insert(ch);
            result += ch;
        }
    }
    cout << "The new string is : " << endl
         << result;

    return 0;
}