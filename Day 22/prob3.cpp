/*Write a program to Character frequency*/
#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Emter the string : " << endl;
    getline(cin , s);
    for(char ch : s){
        tolower(ch);
    }
    int freq=0;
    char ch1;
    cout << "Enter the character to find frequency : " ;
    cin >> ch1;
    for(char &ch : s){
        if(ch == ch1){
            freq++;
        }
    }
    cout << "The frequency of " << ch1 << " in the string is : " << freq;


    return 0;
}