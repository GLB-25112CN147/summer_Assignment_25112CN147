/*Write a program to Compress a string.*/
#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string : " << endl;
    getline(cin, s);
    string result = "";
    int count = 1;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
        else
        {
            result += s[i - 1];
            result += to_string(count);
            count = 1;
        }
    }
    result += s.back();
    result += to_string(count);
    cout << "The compressed string is : " << endl
         << result;

    return 0;
}