/*Write a program to Find first repeating character.*/
/*Write a program to Find first non-repeating character.*/
#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s;
    unordered_map <char , int > m;
    cout << "Enter the string : " << endl;
    getline (cin , s);
    for(char &ch : s){
        ch = tolower(ch);
        if(ch!= ' '){
        m[ch]++;
    }
    }
    for(char ch : s){
        if(ch != ' ' && m[ch]>1){
            cout << "The first repeating letter is : " << ch << endl;
            return 0;
        }
    }
    cout << "No repeating letter found !!!";


    return 0;
}