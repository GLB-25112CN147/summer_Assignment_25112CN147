/*Write a program to Count vowels and consonants.*/
#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    string s;
    int vowel = 0, consonant = 0;
    cout << "Enter the string : " << endl;
    getline(cin, s);
    for (char ch : s)
    {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            vowel++;
        }
        else if (ch == ' ')
        {
            continue;
        }
        else
            consonant++;
    }
    cout << "The number of vowels are : " << vowel << " and the number of consonants are : " << consonant;

    return 0;
}