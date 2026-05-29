/*Write a program to Check whether a number is 
palindrome. */
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int copy=n;
    int palldrme=0;
    while (n>0)
    {
        int r=n%10;
        palldrme=palldrme*10+r;
        n=n/10;
    }
    if(copy==palldrme){
        cout << "The number is pallindrome ";
    }
    else
    cout << "The number is not pallindrome ";
    return 0;
}