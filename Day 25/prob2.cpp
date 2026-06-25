/*Write a program to Find common characters in strings.*/
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string s1,s2;
    cout << "Enter the first string : " << endl;
    unordered_set <char> s;
    getline(cin , s1);
    for(char ch : s1){
        if(s.find(ch)==s.end() && ch != ' '){
            s.insert(ch);
        }
    }
    cout << "Enter the string : " << endl;
    getline(cin , s2);
    unordered_set <char> printed;
    cout << "The common characters of the strings are : ";
    for(char ch : s2){
        if(s.find(ch)!= s.end() && printed.find(ch)==printed.end()){
            cout << ch << " ";
            printed.insert(ch);
        }
    }

    return 0;
}