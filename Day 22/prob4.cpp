/*Write a program to Remove spaces from string.*/
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main() {
    string s;
    string ans;
    cout << "Enter the string : " << endl;
    getline(cin , s);
    for ( char ch : s){
        if(ch == ' '){
            continue;
        }
        else
        ans+=ch;
    }
    cout << "The string without spaces is : " << endl << ans;

    return 0;
}